#include<iostream>
using namespace std;

class student
{
    char name[10];
    int id;
    float cpi;
public:
    student(void)  // default constructor
    {
        cout<<"Enter the name of student : ";
        cin>>name;
        cout<<"Enter the id : ";
        cin>>id;
        cout<<"Enter the cpi : ";
        cin>>cpi;
        cout<<endl<<endl<<endl;
    }
  void disp(void)
   {
      cout<<"student name : "<<name<<endl;
      cout<<"id : "<<id<<endl;
      cout<<"cpi : "<<cpi<<endl;
   }
   float temp_cpi(void)
   {
       return cpi;
   }
};

int main()
{
    int a;
    cout<<"How many students: ";
    cin>>a;
    student cp[a];

    float m;

    m=cp[0].temp_cpi();
    for(int i=1;i<a;i++)
    {
        if(m<cp[i].temp_cpi())
        {
            m=cp[i].temp_cpi();
        }

    }
    cout<<"The Topper : "<<endl;

    for(int i=0;i<a;i++)
       {
           if(cp[i].temp_cpi()==m)
                cp[i].disp();
       }

}
