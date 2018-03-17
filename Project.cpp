#include<iostream>
#include<windows.h>
#include<fstream>
using namespace std;
void SetColor(int value)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),value);
}
class game
{
    int c[10][10];
    char a[10][10];
    int coin;
    int high;
public:
    int candy_count;
    game(void)
    {
        coin=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                a[i][j]='O';
            }
        }
    }
    void random_gen(void)
    {
      for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                c[i][j]=10+(rand()%5);
            }
        }
    }
    void print_game(void)
    {
        SetColor(7);
        cout<<"   0  1  2  3  4  5  6  7  8  9       "<<"Coin: "<<coin<<endl;
        cout<<"                                      "<<"High: "<<high<<endl;
        for(int i=0;i<10;i++)
        {
            SetColor(7);
            cout<<i<<"  ";
            for(int j=0;j<10;j++)
            {
                SetColor(c[i][j]);
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    void selection(void)
    {
        int temp1,temp2,color;
        char b; // for only exception handling.
        candy_count=0;
        SetColor(7);
        point2:
        try
        {
            cout<<endl<<"Choose Color :";
            cin>>color;
            if(color<10 || color>14)  throw color;
            cout<<"How Many Candy's :";
            cin>>candy_count;
            if(candy_count<=1 || candy_count>25)  throw b;
            for(int i=0;i<candy_count;i++)
            {
                point1:        // *
                try
                {
                    cout<<"Enter the Row and the Column :"<<endl;
                    cin>>temp1>>temp2;
                    if(temp1<0 | temp1>9 | temp2<0 | temp2>9) throw temp1;
                    if(c[temp1][temp2]==color)
                    {
                        a[temp1][temp2]=0;
                    }
                    else
                    {
                        i--;
                        SetColor(12);
                        cout<<"Wrong Entry..."<<endl;
                        SetColor(7);
                    }
                }
                catch(...)
                {
                    SetColor(12);
                    cout<<"Not Valid...";
                    SetColor(7);
                    goto point1;
                }
            }
        }
        catch(int a)
        {
            SetColor(12);
            cout<<"Not Valid...";
            SetColor(7);
            goto point2;
        }
        catch(char b)
        {
            SetColor(12);
            cout<<"Not Valid...";
            SetColor(7);
            goto point2;
        }
    }
    void Engine(void)
    {
        point:
        for(int j=0;j<10;j++)
        {
            if(a[0][j]==0)
            {
                c[0][j]=10+(rand()%5);
                a[0][j]='O';
            }
        }
        for(int i=1;i<10;i++)
        {
            for(int j=0;j<10;j++)
             {
                for(int k=0;k<=i;k++)
                {
                    if(a[i-k][j]==0)
                        {
                            if((i-k)==0)
                                goto point;
                            else
                            {
                                c[i-k][j]=c[i-k-1][j];
                                a[i-k][j]=a[i-k-1][j];
                                a[i-k-1][j]=0;
                            }
                        }
                }
            }
        }
    coin=coin+candy_count;
    high_write();
    }
    void high_read(void)
    {
        fstream file_obj("candy_rush.bin",ios::in|ios::out|ios::app|ios::binary);
        if(file_obj.is_open()==TRUE)
        {
            cout<<'\a';
            file_obj.seekg(0,ios::end);
            if(file_obj.tellg()==0)
            {
                file_obj<<"0";
                file_obj.seekg(0,ios::beg);
                file_obj>>high;
            }
            else
            {
                file_obj.seekg(0,ios::beg);
                file_obj>>high;
            }
            file_obj.close();
        }
    }
    void high_write(void)
    {
        if(coin>high)
        {
            fstream file_obj("candy_rush.bin",ios::in|ios::out|ios::binary);
            file_obj.seekg(0,ios::beg);
            file_obj<<coin;
            file_obj.seekg(0,ios::beg);
            file_obj>>high;
            cout<<'\a';
            file_obj.close();
        }

    }
};

class play : public game
{
    public:
    play(void) :  game()
    {
        high_read();
        cout<<endl<<endl<<"     ";
        SetColor(121);
        cout<<"Welcome To CANDY RUSH...!!"<<endl<<endl;
        SetColor(128);
        cout<<"Collect Coin As Much You Can..."<<endl<<"You Have Only 15 Chance..."<<endl;
        cout<<"CTRL+C For EXIT..."<<endl<<endl;
        cout<<"Colors:"<<endl;
        SetColor(10); cout<<"10 : Green "<<endl;
        SetColor(11); cout<<"11 : Light Blue"<<endl;
        SetColor(12); cout<<"12 : Red"<<endl;
        SetColor(13); cout<<"13 : Pink"<<endl;
        SetColor(14); cout<<"14 : Yellow"<<endl;
        cout<<"       ";
        SetColor(121);
        cout<<"GAME STARTS..."<<endl<<endl;

        random_gen();
        print_game();
    }
    void game_play(void)
    {
        for(int i=1;i<16;i++)
        {
            selection();
            cout<<endl;
            Engine();

            cout<<endl;
            print_game(); cout<<"Round:"<<i<<" over"<<endl;
        }
        cout<<endl<<"Thank You ";
    }
};

int main()
{
    play obj;
    obj.game_play();
}

