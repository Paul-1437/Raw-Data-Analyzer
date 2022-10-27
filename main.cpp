//  Statistics_Calculation
//  Avaliable on Github
//  Created by Paul-1437 on 10/26/22.
//  The only thing you need to de is input all data(must be interger) with space or enter, finish with input 0.5

#include <iostream>
#include <cstring>
using namespace std;
/*
int m3(int s[1000]){
    int r=0,num=0,mode=-1;
    int min=-1,max=1;
    bool ms=0;
    for (int i=0;i<1001;i++){
        if (s[i]) {
            if (ms==0) {
                min=i;
                ms=1;
            }
            max=i;
        }
        if (s[i]>mode) {
            mode=i;
        }
        r+=s[i]*i;
        num+=s[i];
    }
    int mbk=max;
    for (int i=min;i<=max;){
        if (s[i]==0) {
            continue;
        }
        mbk--;
        i++;
        if (mbk==i) {
            cout<<"Median:"<<mbk<<endl;
            break;
        }
        if (mbk<i) {
            cout<<"Median:"<<mbk<<"and"<<i<<endl;
            break;
        }
    }
    cout<<"Mean:"<<r/num<<endl;
    cout<<"Mode:"<<mode<<endl;
    cout<<"Range:"<<min<<"to"<<max<<endl;
    return 0;
}
 */
int main(int argc, const char * argv[]) {
    int s[50001]={0};
    for (int i=0;1;i++){
        int n;
        cin>>n;
        if (n==0.5) {
            break;
        }
        s[n]+=1;
    }
    int r=0,num=0,mode=-1;
    int min=-1,max=1;
    bool ms=0;
    for (int i=0;i<50001;i++){
        if (s[i]) {
            if (ms==0) {
                min=i;
                ms=1;
            }
            max=i;
        }
        if (s[i]>s[mode]) {
            mode=i;
        }
        r+=s[i]*i;
        num+=s[i];
    }
    int mbk=max;
    for (int i=min;i<=max&&mbk>0;){
        while (s[i]==0) {
            i++;
        }
        while (s[mbk]==0) {
            mbk--;
        }
        if (mbk==i&&s[mbk]) {
            cout<<"Median:"<<mbk<<endl;
            break;
        }
        if (mbk<i&&s[i]&&s[mbk]) {
            cout<<"Median:"<<mbk<<" and "<<i<<endl;
            break;
        }
        mbk--;
        i++;
    }
    double me=r/num;
    printf("Mean:%2f\n",me);
    cout<<"Mode:"<<mode<<endl;
    cout<<"Range:"<<min<<" to "<<max<<','<<max-min<<endl;
    cout<<r<<endl<<num<<endl;
    return 0;
}
