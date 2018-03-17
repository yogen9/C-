#include<iostream>
#include<cstring>
using namespace std;

class store_list
{
    char name[10];
    float price;
public:
    store_list(void)
    {
        cout<<"Enter the name of Item : ";
        cin>>name;
        cout<<"Enter the price if Item : ";
        cin>>price;
    }
    store_list(char *nom,float i)
    {
        strcpy(name,nom);
        price=i;
    }
    void disp(void)
    {
        cout<<name;
        cout<<" : "<<price<<endl;
    }
    int get_price(void)
    {
        return price;
    }
};
int main()
{
    store_list one[3];
    int M,i,sum=0;
    M=one[0].get_price();
    for(i=1;i<3;i++)
    {
        if(M<one[i].get_price())
        {
            M=one[i].get_price();
        }
    }
    cout<<"The Highest Price item :"<<endl;
    one[i].disp();
    for(i=0;i<3;i++)
    {
      sum=sum+one[0].get_price();
    }
    cout<<"The Total price of All : "<<sum;
}
