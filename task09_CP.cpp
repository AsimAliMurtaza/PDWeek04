#include <iostream>
using namespace std;

void ifTrue(string);

main()
{
 while(true)
 {
  string input;
  cout << "Enter input: ";
  cin >> input;
 ifTrue(input);
  }
}

void ifTrue(string x)
{
 if (x=="true")
 {
   cout << "False" << endl;
 }
 if (x=="false")
 {
   cout << "true" << endl;
 }
}