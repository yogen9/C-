#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	for (int colour = 0x00; colour <= 0xff; colour ++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),colour),	std::cout << "Using colour:" << colour << std::endl;
		cin.get();
		cout<<'\a';
	}
}