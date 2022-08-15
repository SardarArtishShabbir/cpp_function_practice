#include<iostream>
using namespace std;
int remind(int a, int b);
int main()
{
	int a = 9, b = 2;
	cout<<remind(a,b);
}
int remind(int a, int b)
{
	return a%b;
}
