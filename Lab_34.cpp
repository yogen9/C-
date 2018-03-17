#include<iostream>
using namespace std;
int main()
{
    float p,q;
    cout<<"DIVISION: P/Q"<<endl;
    cout<<"Enter the value of P "<<endl;
    cin>>p;
    cout<<"Enter the value of Q "<<endl;
    cin>>q;
    try
    {
        if(q==0) throw q;
        float ans=0;
        ans=p/q;
        cout<<"Ans : "<<ans<<endl;
    }
    catch(float a)
    {
       cout<<"exeption catch";
    }
}
