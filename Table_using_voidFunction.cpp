#include<iostream>
using namespace std;
void Table();
int main()
{
     Table();
}
void Table()
{
		int a,num;
	cout<<"Enter any number :";
	cin>>num;
	for(a=1;a<=10;a++)
	{
		cout<<num<<" x "<<a<<" = "<<num*a<<endl;
	}
}
