#include<iostream>
using namespace std;

int main()
{
    float r,a,p;
    cout<<"******    Write a C++ program to read radius of a circle, calculate area and perimeter and display them.  *******\n\n\n\n";
    cout<<"Enter the radios(in meter) :  ";    cin>>r;
    cout<<endl;

    a=3.14*r*r;
    p=2*3.14*r;

    cout<<"The area of circle: "<<a;       cout<<"  m^2"<<endl<<endl;
    cout<<"The parimeter of circle: "<<p;  cout<<"  m"<<endl;
}
