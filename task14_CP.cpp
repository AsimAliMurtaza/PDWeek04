#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();
void calculateaggregate(string, float, float, float);
void comparestd(string, float, string, float);

main ()
{
    int choice;
    char press;
    printMenu();
    while(true)
    {
        cin >> choice;
        string name1;
        float matricMarks1;
        float interMarks1;
        float ecatMarks1;
        
        if(choice == 1)
        {
            system("cls");
            cout << "Enter name: ";
            cin >> name1;
            cout << "Enter matric marks (out of 1100): ";
            cin >> matricMarks1;
            cout << "Enter inter marks (out of 550): ";
            cin >> interMarks1;
            cout << "Enter ecat marks (out of 400): ";
            cin >> ecatMarks1;
            cout << "Press C then Enter to continue...";
            cin >> press;
            printMenu();
        }
        string name2;
        float matricMarks2;
        float interMarks2;
        float ecatMarks2;

        if (choice == 2)
        {
            system("cls");
            cout << "Enter name: ";
            cin >> name2;
            cout << "Enter matric marks (out of 1100): ";
            cin >> matricMarks2;
            cout << "Enter inter marks (out of 550): ";
            cin >> interMarks2;
            cout << "Enter ecat marks (out of 400): ";
            cin >> ecatMarks2;
            cout << "Press C then Enter to continue...";
            cin >> press;
            printMenu();
        }

        if(choice == 3)
        {
            system("cls");
            calculateaggregate(name1, matricMarks1, interMarks1, ecatMarks1);
            cout << "Press C then Enter to continue...";
            cin >> press;
            printMenu();
        }
                if(choice == 4)
        {
            system("cls");
            calculateaggregate(name2, matricMarks2, interMarks2, ecatMarks2);
            cout << "Press C then Enter to continue...";
            cin >> press;
            printMenu();
        }
        if(choice == 5)
        {
            system("cls");
            comparestd(name1, ecatMarks1, name2, ecatMarks2);
            cout << "Press C then Enter to continue...";
            cin >> press;
            printMenu();
        }
    }
}

void printMenu()
{   
    cout<<"************************************"<<endl;
    cout<<"*                                  *"<<endl;
    cout<<"*  University Admission            *"<<endl;
    cout<<"*          Management System       *"<<endl;
    cout<<"*                                  *"<<endl;
    cout<<"************************************"<<endl;
    cout << "1. Add details of first student! " << endl;
    cout << "2. Add details of second student!" << endl;
    cout << "3. Check aggergate of first student! " << endl;
    cout << "4. Check aggergate of second student! " << endl;
    cout << "5. Display student with RollNumber 01! " << endl;
    cout << "Enter your choice: ";
}


void calculateaggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
    float aggregate;
    aggregate = (matricMarks/1100 * 30) + (interMarks/550 * 30) + (ecatMarks/400 * 40);
    cout<< name << "Your aggregate is: " << aggregate<<endl;
}
void comparestd(string name1, float ecatMarks1, string name2, float ecatMarks2){
    if ( ecatMarks1 > ecatMarks2)
    {
        cout << "Student 01 has roll number one." << endl;
    }
        if ( ecatMarks1 < ecatMarks2)
    {
        cout << "Student 02 has roll number one." << endl;
    }
}
