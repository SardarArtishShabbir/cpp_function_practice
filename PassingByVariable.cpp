#include<iostream>
using namespace std;
void Mul(int num1, int num2);
int main()
{   
    int x;
    int y;
    cout<<"Enter a value:";
    cin>>x;
    cout<<"Enter a value:";
    cin>>y;
     Mul(x,y);
}
void Mul(int num1, int num2)
{
   
	cout<<"Multiplied number is: "<<num1*num2;
}
