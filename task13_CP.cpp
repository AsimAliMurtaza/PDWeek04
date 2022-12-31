#include <iostream>
using namespace std;

main()
{
    int holidays;
    int workingDays;
    float timeForGames;
    int norm = 30000;
    float difference;
    float differenceHr;
    while(true)
    {  cout << "Enter holidays: ";
      cin >> holidays;

      workingDays = 365 - holidays;
      
      timeForGames = (workingDays * 63) + (holidays * 127);
      difference = norm - timeForGames;
      differenceHr = difference / 60;

      cout << "Difference from the Norm= " << differenceHr << " Hours" <<endl;

      if (timeForGames > norm)
      {
          cout << "Tom will run away" << endl;
      }
      if (timeForGames < norm)
      {
          cout << "Tom sleeps well." << endl;
      }
    }
}