#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
    int s[10];
    int tos;
public:
    stack(void)
    {
        tos=0;
    }
    void push(int a)
    {
        if(tos>9)
            cout<<"Stack Overflow\n";
        else
        {   s[tos]=a;
            tos++;    }

    }
    int pop(void)
    {
       if(tos==-1)
            cout<<"stack is empty";   // what is  return when this.
        else
        { tos--;
          return s[tos]; }

    }
    void disp(void)
    {
        int i;
        i=tos;
        i--;
        cout<<"The Element of stack(top to bottom): "<<endl;
        while(i>=0)
        {
            cout<<"Stack  Value"<<endl<<i;
            cout<<"     "<<s[i]<<endl;
            i--;
        }
    }
};

int main()
{
    stack one;
    int a,b,c;
    while(a!=4 || a>5)
    {
        cout<<"Enter\n1 for push\n2 for pop and display value at top of stack\n3 for display stack\n4 to quite:"<<endl;
        cin>>a;

        switch(a)
        {
            case 1: system("CLS");
                    cout<<"Enter the value to store:"<<endl;
                    cin>>b;
                    one.push(b);
                    break;
            case 2: system("CLS");
                    c=one.pop();
                    cout<<"The value at top :"<<c<<endl;
                    break;
            case 3: system("CLS");
                    one.disp();
                    break;
            case 4: break;

        }

    }
}
