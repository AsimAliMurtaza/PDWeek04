#include <iostream>
#include <windows.h>
using namespace std;

void pakistan(string, float);
void india(string, float);
void ireland(string, float);
void canada(string, float);
void england(string, float);

main()
{
 while(true)
 {
 string country;
 float dollar;
  cout << "Enter country name: ";
  cin >> country;
  cout << "Enter dollars: ";
  cin >> dollar;
  pakistan(country, dollar);
  ireland(country, dollar);
  england(country, dollar);
  canada(country, dollar);
  india(country, dollar);
 }
}

void pakistan(string country, float dollar)
{
 float amount;
 amount = dollar * 0.95;
 if (country== "pakistan")
 {
 cout << "Total price after discount is: " << amount << endl;
 }
}

void ireland(string country, float dollar)
{
 float amount;
 amount = dollar * 0.9;
 if (country== "ireland")
 {
 cout << "Total price after discount is: " << amount << endl;
 }
}

void india(string country, float dollar)
{
 float amount;
 amount = dollar * 0.8;
 if (country== "india")
 {
 cout << "Total price after discount is: " << amount << endl;
 }
}

void england(string country, float dollar)
{
 float amount;
 amount = dollar * 0.7;
 if (country== "england")
 {
 cout << "Total price after discount is: " << amount << endl;
 }
}

void canada(string country, float dollar)
{
 float amount;
 amount = dollar * 0.55;
 if (country== "canada")
 {
 cout << "Total price after discount is: " << amount << endl;
 }
}