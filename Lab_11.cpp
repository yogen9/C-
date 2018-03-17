#include<iostream>
using namespace std;

class complex
{
    int i;
    int r;
public:
    void get(int a,int b)
    {
        i=a;
        r=b;
    }
    void disp(void)
    {
        cout<<endl<<"The complex number is : ("<<i<<","<<r<<")"<<endl;
    }
    complex operator+(complex d_c)
    {
        complex temp;
        temp.r=r+d_c.r;
        temp.i=i+d_c.i;
        return temp;
    }
    complex operator-(complex d_c)
    {
        complex temp;
        temp.i=i-d_c.i;
        temp.r=r-d_c.r;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    int i,r;

    cout<< "Enter the real and imaginary values : ";
    cin>>i>>r;
    c1.get(i,r);

    cout<<"Enter the second real and imaginary values : ";
    cin>>i>>r;
    c2.get(i,r);

    int b;
    cout<<"What do you want "<<endl;
    cout<<"1. Addition "<<endl;
    cout<<"2. subsraction "<<endl;
    cin>>b;

    switch(b)
    {
        case 1: c3=c1+c2;
                c3.disp();
                break;
        case 2: c3=c1-c2;
                c3.disp();
                break;
        default: cout<<"invalid input ";
    }
}
