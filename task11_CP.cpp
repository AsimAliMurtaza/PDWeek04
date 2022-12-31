#include <iostream>
using namespace std;

void challan(int speed);

main()
{
 while(true)
 {
 int speed;
  cout << "Enter speed: ";
  cin >> speed;
  challan(speed);
  }
}

void challan(int speed)
{
  if (speed>100)
  {
    cout << "Halt! YOU WILL BE CHALLENGED!!!" << endl;
  }
  if (speed<100)
  {
    cout << "Perfect! You are going good." << endl;
  }
}