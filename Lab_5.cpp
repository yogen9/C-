#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char a[20];
    int i=0;
    cout<<"Enter the string : ";
    gets(a);

    for(i=0;i<20;i++)
    {
    if(a[i]>=65 && a[i]<=91)
    {
        a[i]=a[i]+32;
    }
    else if(a[i]>=97 && a[i]<=123)
    {
       a[i]=a[i]-32;
    }
    }

    cout<<"The toggled string is : "<<a<<endl;
    return 0;
}
