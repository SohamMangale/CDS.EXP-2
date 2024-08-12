//Soham
//23070123084
//entc b1
//experiment 2C
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any integer:";
    cin>>a;
    cout<<"integer ="<<a<<" and size is"<<sizeof(a)<<"bytes";
    register int b;
    cout<<"Enter a number:";
    cin>>b;
    cout<<"register ="<<b<<" and size is "<<sizeof(b)<<"bytes";
    auto c =0;
    cout<<"Enter an integer:";
    cin>>c;
    cout<<"auto ="<<c<<"size is"<<sizeof(c)<<"bytes";
    return 0;
}
