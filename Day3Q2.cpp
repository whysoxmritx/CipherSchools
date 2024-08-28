#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int temp=n;
    int fac=1;
    while(temp!=0){
        fac*=temp;
        temp--;
    }
    cout<<"Factorial of "<<n<<" is:"<<fac;
}