#include<bits/stdc++.h>
#include "include/bignumber.h"
using namespace pr0crustes;
using namespace std;
#define LL long long 
int32_t main(){
    LL t;cin>>t;
    while(t--){
        time(nullptr);
        int len1=rand();
        int len2=rand();
        string s1="";
        string s2="";
        for(int i=0;i<len1;i++)s1+=to_string(rand()%9);
        for(int i=0;i<len2;i++)s2+=to_string(rand()%9);
        BigNumber num1(s1);
        BigNumber num2(s2);
        cout<<"ADDITION="<<num1+num2<<endl;
        cout<<"\n";
        cout<<"MULTIPLICATION="<<num1*num2<<endl;
        cout<<"\n";
        cout<<"SUBTRACTION="<<num1-num2<<endl;
        cout<<"\n";
        cout<<"DIVISION="<<num1/num2<<endl;
    }

}