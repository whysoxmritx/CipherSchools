#include<bits/stdc++.h>
using namespace std;
class num{
    public:
    int evenOdd(int n){
        if(n%2==0)
        {
            cout<<"Even"<<endl;
        }
        else
        cout<<"Odd"<<endl;
    }
};
int main(){ 
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    num x;
    x.evenOdd(number);
}