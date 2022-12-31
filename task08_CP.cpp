#include <iostream>
using namespace std;

void isEqual(int, int);

main ()
{
 int num1;
 int num2;
 while(true)
{
 cout << "Enter first number: ";
 cin >> num1;
 cout << "Enter second number: ";
 cin >> num2;
 isEqual(num1,num2);
 }
}

void isEqual(int num1, int num2)
{
   int isEqual;
 if (num1==num2)
 {
 cout << "True" << endl;
 }
 
 if (num1!=num2)
 {
  cout << "False" << endl;
 }
}