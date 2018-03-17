#include<iostream>
using namespace std;

int main()
{
    int n,i,m;
    int a[100];
    cout<<"Enter the number of element: ";
    cin>>n;

    cout<<"Enter the values : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=a[0];
    for(i=1;i<n;i++)
    {
      if(m<a[i])
        m=a[i];
    }
    cout<<"Maximum value is : "<<m<<endl;
    return 0;
}
