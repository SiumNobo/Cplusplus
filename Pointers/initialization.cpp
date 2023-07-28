#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    //print a value by pinter.
    cout<<*p<<endl;
    //adress
    cout<<p<<endl;
    if(p==&a)
    {
        cout<<"matched"<<endl;
    }


}