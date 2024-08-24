#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the first number:";
     cin>>n2;
    cout<<"Enter the first number:";
     cin>>n3;
     if(n1>n2 && n1>n3)
     cout<<"The Largest number is:"<<n1;
    else if(n2>n3 && n2>n1)
    cout<<"The Largest number is:"<<n2;
    else
    cout<<"The Largest number is:"<<n3;
}