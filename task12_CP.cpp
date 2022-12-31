#include <iostream>
using namespace std;


void redRose(float);
void tulips(float);
void whiteRose(float);

main()
{
    int redRose;
    int whiteRose;
    int tulips;
    float sum;

    float totRed;

    float totWhite;

    float totTulips;


    cout << "Enter number of red roses: ";
    cin >> redRose;
    totRed = redRose * 2;

    cout << "Enter number of white roses: ";
    cin >> whiteRose;
    totWhite = whiteRose * 4.1;

    cout << "Enter number of tulips: ";
    cin >> tulips;
    totTulips = tulips * 2.5;
    
    sum = totTulips + totWhite +totRed;

    if (sum > 200)
    {
        float discount = sum * 0.8;
        cout << "After discount price: " << discount << endl;

    }
    cout << "Original Price= " << sum << endl;


}
