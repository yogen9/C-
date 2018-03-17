#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float pro,sum,x1,y1,x2,y2,d;

    cout<<"Enter the sum of two numbers : ";
    cin>>sum; cout<<endl;
    cout<<"Enter the product of two numbers : ";
    cin>>pro; cout<<endl;

    d=(sum*sum)-(4*pro);
    x1=(-(-sum)+sqrt(d))/2;   // here for equation a=1,b= -sum,c=pro.
    x2=(-(-sum)-sqrt(d))/2;   // in this equation x1 is alfa x2 is bita.
    y1=sum-x1;
    y2=sum-x2;

    cout<<"The solution: \n\n";
    cout<<"x1= "<<x1<<endl;
    cout<<"y1= "<<y1<<endl;
    cout<<"OR"<<endl;
    cout<<"x2= "<<x2<<endl;
    cout<<"y2= "<<y2<<endl;
}
