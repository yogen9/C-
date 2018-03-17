#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[20],s2[20];
    cout<<"Enter the first string: ";
    cin>>s1; cout<<endl;
    cout<<"Enter the second string: ";
    cin>>s2; cout<<endl;

    if(strlen(s1)==strlen(s2))
       {cout<<"strings are same\n";}
    else
        {cout<<"stings are different\n";}
}
