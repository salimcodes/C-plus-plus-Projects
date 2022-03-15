#include <iostream>

using namespace std;

//Code written by Salim Olanrewaju Oyinlola

int main()
{
    int quant; //The quantity of each of the order
    int choice; //What in the menu does the customer wish to order

    int Qrooms=0, QNoodles=0, QFriedPlantain=0, QJollofRice=0, QAmalawithGbegiriandEwedu=0, QFriedRice=0;
    //The quantity of each variable [Room, Noodles, Fried Plantain, Jollof Rice, Amala with Gbegiri and Ewedu and Fried Rice] AVAILABLE

    int Srooms=0, SNoodles=0, SFriedPlantain=0, SJollofRice=0, SAmalawithGbegiriandEwedu=0, SFriedRice=0;
    //The quantity of each variable [Room, Noodles, Fried Plantain, Jollof Rice, Amala with Gbegiri and Ewedu and Fried Rice] SOLD ALREADY

    int Total_rooms=0, Total_Noodles=0, Total_FriedPlantain=0, Total_JollofRice=0, Total_AmalawithGbegiriandEwedu=0, Total_FriedRice=0;
    //The TOTAL quantity of each variable [Room, Noodles, Fried Plantain, Jollof Rice, Amala with Gbegiri and Ewedu and Fried Rice]

    g:
        int pin;
        cout << "As an admin, you are required to input the available commodities: " << endl;
        cout << "Enter the PIN: " << endl;
        cin >> pin;
        if(pin == 1234)     //The PIN is 1234
        {
            cout << "Welcome to the Salim-Hospitality Hotels. " << endl;
            cout << "[FOR ADMIN/OWNERS ONLY]" << endl;
            cout << "\n \t Quantity of Item we have available: " << endl;
            cout << "Rooms available: " << endl;
            cin >> Qrooms;
            cout << "Plates of Noodles available: " << endl;
            cin >> QNoodles;
            cout << "Plates of Fried Plantain available: " << endl;
            cin >> QFriedPlantain;
            cout << "Plates of Jollof Rice available: " << endl;
            cin >> QJollofRice;
            cout << "Plates of Amala with Gbegiri and Ewedu available: " << endl;
            cin >> QAmalawithGbegiriandEwedu;
            cout << "Plates of Fried Rice available: " << endl;
            cin >> QFriedRice;
        }
        else
        {
            cout << "Wrong Password" << endl;
            goto g;
        }

    m:
    system("cls");
    cout << endl << "FOR CUSTOMERS" << endl;
    cout << "Kindly select from the menu option: " << endl;
    cout << "1) Rooms" << endl;
    cout << "2) Noodle" << endl;
    cout << "3) Fried Plantain" << endl;
    cout << "4) Jollof Rice" << endl;
    cout << "5) Amala with Gbegiri and Ewedu" << endl;
    cout << "6) Fried Rice" << endl;
    cout << "7) Information regarding sales and collection - For Adminstrative Staff only" << endl;
    cout << "8) Exit" << endl;

    cout << endl;
    cout << "Please Enter your choice!" << endl;
    cin >> choice;


    switch(choice)
    {
    case 1:
        cout << "Enter the number of rooms do you want: " << endl;
        cin >> quant;
        if(Qrooms - Srooms >= quant) //if the rooms available is more than or equal to the quantity needed
        {
            Srooms += quant; //Adding the just ordered room to the total number of sold rooms
            Total_rooms += (quant*40000); //Since each room costs 40,000 naira
            cout << endl << quant << " room/rooms have been alloted to you!"  << endl;
        }
        else
        {
            cout << endl << "Only "<< Qrooms - Srooms << " rooms are available." << endl;

        }
        system("Pause");
        break;

    case 2:
        cout << "Enter the number of plates of noodles do you want: " << endl;
        cin >> quant;
        if(QNoodles - SNoodles >= quant) //if the plates of noodles available is more than or equal to the quantity ordered
        {
            SNoodles += quant; //Adding the just ordered room to the total number of sold plates of noodles
            Total_Noodles += (quant*1500); //Since each room costs 1,500 naira
            cout << endl << quant << " plate/plates of noodles is the order!"  << endl;
        }
        else
        {
            cout << endl << "Only "<< QNoodles - SNoodles << " plates of noodles are remaining in the hotel." << endl;

        }
        system("Pause");
        break;

    case 3:
        cout << "Enter the number of plates of fried plantain do you want: " << endl;
        cin >> quant;
        if(QFriedPlantain - SFriedPlantain >= quant) //if the plates of Fried Plantain available is more than or equal to the quantity ordered
        {
            SFriedPlantain += quant; //Adding the just ordered room to the total number of sold plates of Fried Plantain
            Total_FriedPlantain += (quant*1000); //Since each room costs 1,000 naira
            cout << endl << quant << " plate/plates of fried plantain is the order!"  << endl;
        }
        else
        {
            cout << endl << "Only "<< QFriedPlantain - SFriedPlantain << " plates of fried plantain are remaining in the hotel." << endl;

        }
        system("Pause");
        break;


    case 4:
        cout << "Enter the number of plates of Jollof Rice do you want: " << endl;
        cin >> quant;
        if(QJollofRice - SJollofRice >= quant) //if the plates of Jollof Rice available is more than or equal to the quantity ordered
        {
            SJollofRice += quant; //Adding the just ordered room to the total number of sold plates of Jollof Rice
            Total_JollofRice += (quant*3500); //Since each room costs 3,500 naira
            cout << endl << quant << " plate/plates of Jollof Rice is the order!"  << endl;
        }
        else
        {
            cout << endl << "Only "<< QJollofRice - SJollofRice << " plates of Jollof Rice are remaining in the hotel." << endl;

        }
        system("Pause");
        break;

    case 5:
        cout << "Enter the number of plates of Amala with Gbegiri and Ewedu do you want: " << endl;
        cin >> quant;
        if(QAmalawithGbegiriandEwedu - SAmalawithGbegiriandEwedu >= quant) //if the plates of Amala with Gbegiri and Ewedu available is more than or equal to the quantity ordered
        {
            SAmalawithGbegiriandEwedu += quant; //Adding the just ordered room to the total number of sold plates of Amala with Gbegiri and Ewedu
            Total_AmalawithGbegiriandEwedu += (quant*3000); //Since each room costs 3,000 naira
            cout << endl << quant << " plate/plates of Amala with Gbegiri and Ewedu is the order!"  << endl;
        }
        else
        {
            cout << endl << "Only "<< QAmalawithGbegiriandEwedu - SAmalawithGbegiriandEwedu << " plates of noodles are remaining in the hotel." << endl;

        }
        system("Pause");
        break;

    case 6:
        cout << "Enter the number of plates of Fried Rice do you want: " << endl;
        cin >> quant;
        if(QFriedRice - SFriedRice >= quant) //if the plates of Fried Rice available is more than or equal to the quantity ordered
        {
            SFriedRice += quant; //Adding the just ordered room to the total number of sold plates of Fried Rice
            Total_FriedRice += (quant*4000); //Since each room costs 4,000 naira
            cout << endl << quant << " plate/plates of Fried Rice is the order!"  << endl;
        }
        else
        {
            cout << endl << "Only "<< QFriedRice - SFriedRice << " plates of Fried Rice are remaining in the hotel." << endl;

        }
        system("Pause");
        break;


    case 7:
        int pin;
        cout << endl << "Enter the PIN: ";
        cin >> pin;
        if(pin == 1234)
        {
            cout << endl << "Details of sales and collection " << endl;
            cout << "Number of rooms we had: " << Qrooms << endl;
            cout << "Number of room we gave out for rent: " << Srooms << endl;
            cout << "Remaining rooms: " << Qrooms - Srooms << endl;
            cout << "Total rooms collections for the day: " << Total_rooms << endl;

            cout << endl;
            cout << endl << "Number of plates of Noodles we had: " << QNoodles << endl;
            cout << "Number of plates of Noodles we sold " << SNoodles << endl;
            cout << "Remaining plates of Noodles: " << QNoodles - SNoodles << endl;
            cout << "Total Noodle collection for the day: " << Total_Noodles << endl;

            cout << endl;
            cout << endl << "Number of plates of Fried Plantain we had: " << QFriedPlantain << endl;
            cout << "Number of plates of Fried Plantain we sold " << SFriedPlantain << endl;
            cout << "Remaining plates of Fried Plantain: " << QFriedPlantain - SFriedPlantain << endl;
            cout << "Total Fried Plantain collection for the day: " << Total_FriedPlantain << endl;

            cout << endl;
            cout << endl << "Number of plates of Jollof Rice we had: " << QJollofRice << endl;
            cout << "Number of plates of Jollof Rice we sold " << SJollofRice << endl;
            cout << "Remaining plates of Jollof Rice: " << QJollofRice - SJollofRice << endl;
            cout << "Total Jollof Rice collection for the day: " << Total_JollofRice << endl;

            cout << endl;
            cout << endl << "Number of plates of Amala with Gbegiri and Ewedu we had: " << QAmalawithGbegiriandEwedu << endl;
            cout << "Number of plates of Amala with gbegiri and Ewedu we sold " << SAmalawithGbegiriandEwedu << endl;
            cout << "Remaining plates of Amala with Gbegiri and Ewedu: " << QAmalawithGbegiriandEwedu - SAmalawithGbegiriandEwedu << endl;
            cout << "Total Amala with Gbegiri and Ewedu collection for the day: " << Total_AmalawithGbegiriandEwedu << endl;

            cout << endl;
            cout << endl << "Number of plates of Fried Rice we had: " << QFriedRice << endl;
            cout << "Number of plates of Fried Rice we sold " << SFriedRice << endl;
            cout << "Remaining plates of Fried Rice: " << QFriedRice - SFriedRice << endl;
            cout << "Total Fried Rice collection for the day: " << Total_FriedRice << endl;
            cout << endl;
            cout << "Total amount earned for the day is " << Total_rooms + Total_Noodles + Total_FriedPlantain + Total_JollofRice + Total_AmalawithGbegiriandEwedu + Total_FriedRice << " naira." <<endl;
            system("Pause");
        }
        else
        {
            cout << "Wrong Password!" << endl;
        }
    case 8:
        exit(0);

    default:
        cout << "Please enter a valid input." << endl;

    }
    goto m;
}


//Twitter @SalimOpines: https://twitter.com/SalimOpines
//Github: https://www.github.com/salimcodes

