//  Statistics_Calculation
//  Avaliable on Github
//  Created by Paul-1437 on 10/26/22.
//  The only thing you need to de is input all data(must be positive interger) with space or enter, finish with input -1

#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    int s[100001]={0};
    for (int i=0;1;i++){
        int n;
        cin>>n;
        if (n==-1) {
            break;
        }
        s[n]+=1;
    }
    int r=0,num=0,mode=-1;
    int min=-1,max=1;
    bool ms=0;
    for (int i=0;i<100001;i++){
        if (s[i]==0) {
            continue;
        }
        if (ms==0) {
            min=i;
            ms=1;
        }
        max=i;
        if (s[i]>s[mode]) {
            mode=i;
        }
        r+=s[i]*i;
        num+=s[i];
    }
    int sorted[1000],sortf=0;
    for (int i=0;i<=max;i++){
        for (int j=s[i];j>0;j--){
            sorted[sortf]=i;
            sortf++;
        }
    }
    double me=double(r)/double(num);
    printf("Mean:%2f\n",me);
    int median;
    if (sortf%2==0) {
        median=sorted[sortf/2]+sorted[sortf/2-1];
        median/=2;
    }
    else
        median=sorted[sortf/2];
    cout<<"Median:"<<median<<endl;
    cout<<"Mode:"<<mode<<endl;
    cout<<"Range:"<<min<<" to "<<max<<','<<max-min<<endl;
    cout<<r<<','<<num<<endl;
    for (int i=min; i<=max; i++){
        if (s[i]>0) {
            cout<<i<<' '<<s[i]<<endl;
        }
    }
    return 0;
}
