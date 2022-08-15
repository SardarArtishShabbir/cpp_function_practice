#include<iostream>
using namespace std;
void Mul(int num1, int num2);
int main()
{   
    int x;
    int y;
    x = 2;
    y = 4;
     Mul(x,y);
}
void Mul(int num1, int num2)
{
   
	cout<<"Multiplied number is: "<<num1*num2;
}
