#include<iostream>
#include<string.h>
using namespace std;

main()
{
    char a[10];
    int i,j,flag=0;
    cout<<"Enter the string : ";
    cin>>a;

    j=strlen(a)-1;
    for(i=0;i<=strlen(a)/2;i++)
    {
        if(a[i]!=a[j])
        {
            cout<<"Not pelindrom";
            flag=1;
            break;
        }
        else
        {
           j--;
        }
    }
    if(flag==0)
        cout<<"Yes pelindrom"<<endl;
}
