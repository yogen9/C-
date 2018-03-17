#include<iostream>
using namespace std;
class shape
{
    int a;
    int b;
public:
    shape()
    {
        cout<<"Enter the value a: ";
        cin>>a;
        cout<<"Enter the value b: ";
        cin>>b;
    }
    virtual float calculate_area(void)
    {
        return 1.1;
    }
    float get_a(void)
    {
        return a;
    }
    float get_b(void)
    {
        return b;
    }
};

class rectangle : public shape
{
public:
    float calculate_area(void)
    {

        float p;
        p=get_a()*get_b();
        return p;
    }
};
class triangle : public shape
{
public:
    float calculate_area(void)
    {

        float p;
        p=(0.5)*get_a()*get_b();
        return p;
    }
};
int main()
{   int i;
    cout<<"**************calculate area of shape by dynamic polymorfysam**************************************"<<endl;
    cout<<"Enter 1 rectangle"<<endl<<"      2 triangle"<<endl;
    cin>>i;
    shape *shape_ptr;
    float ans;
    switch(i)
    {
        case 1: shape_ptr= new rectangle();
                ans=shape_ptr->calculate_area();
                cout<<"Area of rectangle to corresponding value : "<<ans<<endl;
                break;
        case 2: shape_ptr= new triangle();
                ans=shape_ptr->calculate_area();
                cout<<"Area of triangle to corresponding value : "<<ans<<endl;
                break;
        default: cout<<"invalid input";
                 break;
    }
}
