#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;

//Functions Prototypes

void login();
void registration();
void forgot();

int main()
{
    int choice; //To store the user's choice
    cout << "\t\t\t______________________________________________________________\n\n\n";
    cout << "\t\t\t                WELCOME TO SALIM'S C++ FIRST APP              \n\n\n";
    cout << "\t\t\t                          LOGIN PAGE                          \n\n\n";
    cout << endl;
    cout << "\t\t\t __________________          MENU                _______________\n\n";
    cout << endl;
    cout << "\t | Press 1 to LOGIN                      |" << endl;
    cout << "\t | Press 2 to REGISTER                   |" << endl;
    cout << "\t | Press 3 if you FORGOT YOUR PASSWORD   |" << endl;
    cout << "\t | Press 4 to EXIT                       |" << endl;
    cout << "\n\t\t Enter your choice: ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
    case 1:
        login();
        break;

    case 2:
        registration();
        break;

    case 3:
        forgot();
        break;

    case 4:
        system("cls");
        cout << "Thank you!!!" << endl;
        break;

    default:
        cout << "Please select from the options above." << endl;
        main();
    }
}


void login()
{

    int count;
    string userId, password, id, pass;
    system("cls");
    cout << endl << "Enter your username and password: " << endl;
    cout << "\t\t\t USERNAME: ";
    cin >> userId;
    cout << "\t\t\t PASSWORD: ";
    cin >> password;

    ifstream input("records.txt"); //To read the input
    while(input>>id>>pass)
    {
        if(id==userId && pass==password)
        {
            count=1;
            system("cls");
        }
    }
    input.close();

    if(count ==1)
    {
        cout <<userId << "\n Your Login is successful \n";
    }
    else
    {
        cout << "\n LOGIN ERROR \n Please check your username and password" << endl;
        main();
    }
}

void registration()
{
    string ruserId, rpassword, rid, rpass;
    system("cls");
    cout << "\t\t\t Enter the username: ";
    cin >> ruserId;
    cout << "\t\t\t Enter your password: ";
    cin >> rpassword;

    ofstream f1("records.text", ios::app);
    f1<<ruserId<<' '<<rpassword<<endl;
    system("cls");
    cout << "\n\t\t\t Registration is successful! \n" << endl;
    main();
}


void forgot()
{
    int option;
    system("cls");
    cout << "\t\t\t You forgot your password? No worries \n";
    cout << "Press 1 to search your ID by username " << endl;
    cout << "Press 2 to go back to the main menu " << endl;
    cout << "\t\t\t Enter your choice: ";
    cin >> option;

    switch(option)
    {
    case 1:
        {
            int count = 0;
            string suserId, sid, spass;
            cout << "\n\t\t Enter the username which you remebered: " << endl;
            cin >> suserId;

            ifstream f2("records.txt");
            while(f2>>sid>>spass)
            {
                if(sid==suserId)
                {
                    count=1;
                }
            }
            f2.close();
            if(count==1)
            {
                cout << "\n\n Your account is found! \n" << endl;
                cout << endl << "Your password is: " << spass << endl;
                main();
            }
            break;
        }
    case 2:
            {
                main();
            }
    default:
        cout << "Enter a valid number!" << endl;
        forgot();

    }
}
