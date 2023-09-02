#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;
void menu();

class ManageMenu{
    protected:
    string userName;
    public:
    ManageMenu(){
        cout << "\n\n\n\n\n\n\n\n\n\t Enter Your Name to Continue as an Admin: ";
        cin >> userName;
        system("cls");
        menu();
    }
    ~ManageMenu(){}
};

class Customers
{
public:
    string name, gender, address;
    int age, mobileno;
    static int cusID;
    char all[999];

    void getDetails()
    {

        ofstream out("old-customers.txt", ios::app);
        {
            cout << "Enter Customer ID : ";
            cin >> cusID;
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter Age : ";
            cin >> age;
            cout << "Enter Mobile Number : ";
            cin >> mobileno;
            cout << "Enter Address : ";
            cin >> address;
            cout << "Enter Gender : ";
            cin >> gender;
        }
        out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << mobileno << "\nAddress: " << address << "\nGender: " << gender << endl;
        out.close();
        cout << "\nSAVED \nNOTE: WE save your details record for future purposes\n"
             << endl;
    }

    void showDetails()
    {
        ifstream in("old-customers.txt");
        {
            if (in)
            {
                cout << "File Error!" << endl;
            }
            while (!(in.eof()))
            {
                in.getline(all, 999);
                cout << all << endl;
            }
            in.close();
        }
    }
};

int Customers::cusID;

class Cabs
{
public:
    int cabChoice;
    int kilometres;
    float cabCost;
    static float lastcabCost;

    void cabDetails()
    {
        cout << "We collaborated with fastest, safest, and smartest cab service around the country" << endl;
        cout << "-----------------ABC Cabs--------------------\n"
             << endl;
        cout << "1. Rent a Standard Cab - Rs. 15 for 1KM" << endl;
        cout << "1. Rent a Luxury Cab - Rs. 25 for 1KM" << endl;

        cout << "\nTo calculate the cost for your journey: " << endl;
        cout << "Enter which kind of cab you need ?";
        cin >> cabChoice;
        cout << "Enter Kilometres you have to travel ?";
        cin >> kilometres;

        int hireCab;

        if (cabChoice == 1)
        {
            cabCost = kilometres * 15;
            cout << "\nYour tour cost: " << cabCost << " rupees for a standard cab" << endl;
            cout << "Press 1 to hire this cab: or";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;

            system("cls");

            if (hireCab == 1)
            {
                lastcabCost = cabCost;
                cout << "\nYOu have successfully hired a Standard cab" << endl;
                cout << "Go to Menu and take the receipt" << endl;
            }
            else if (hireCab == 2)
            {
                cabDetails();
            }
            else
            {
                cout << "Invalid Input: Redirecting to previous menu \nPlease Wait!" << endl;
                Sleep(999);
                system("cls");
                cabDetails();
            }
        }
        else
        {
            cout << "Invalid Input! Redirecting to Main Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("cls");
            menu();
        }
        cout << "\nPress 1 to Redirect Main Menu: ";
        cin >> hireCab;
        system("cls");
        if (hireCab == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
};

float Cabs::lastcabCost;
class Booking
{
public:
    int choiceHotel;
    int packChoice;
    static float hotelCost;

    void hotels()
    {
        string hotelNo[] = {"Avantika", "Rudraksh", "AnjuShree"};
        for (int a = 0; a < 3; a++)
        {
            cout << (a + 1) << " Hotel" << hotelNo[a] << endl;
        }
        cout << "\nCurrently we collaborated with above hotels!" << endl;
        cout << "Press any key to back or\nEnter number of the hotel you want to book: ";
        cin >> choiceHotel;

        system("cls");

        if (choiceHotel == 1)
        {
            cout << "-------WELCOME TO HOTEL AVANTIKA-------\n"
                 << endl;
            cout << "The Garden, food and beverage. Enjoy all you can drink,Stay cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by Avantika:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: Rs.5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Avantika: Rs. 15000.00" << endl;
            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> packChoice;

            if (packChoice == 1)
            {
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard Pack at Avantika" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice == 2)
            {
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked Premium Pack at Avantika" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice == 3)
            {
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Luxury Pack at Avantika" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu\nPlease Wait!" << endl;
                Sleep(1100);
                system("cls");
                hotels();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect Main Menu: ";
            cin >> gotomenu;
            system("cls");
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else if (choiceHotel == 2)
        {
            cout << "-------WELCOME TO HOTEL RUDRAKSH-------\n"
                 << endl;
            cout << "The Garden, food and beverage. Enjoy all you can drink,Stay cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by Rudraksh:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: Rs.5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Rudraksh: Rs. 15000.00" << endl;
            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> packChoice;

            if (packChoice == 1)
            {
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard Pack at Rudraksh" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice == 2)
            {
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked Premium Pack at Rudraksh" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice == 3)
            {
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Luxury Pack at Rudraksh" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu\nPlease Wait!" << endl;
                Sleep(1100);
                system("cls");
                hotels();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect Main Menu: ";
            cin >> gotomenu;
            system("cls");
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else if (choiceHotel == 3)
        {
            cout << "-------WELCOME TO HOTEL ANJUSHREE-------\n"
                 << endl;
            cout << "The Garden, food and beverage. Enjoy all you can drink,Stay cool and get chilled in the summer sun." << endl;
            cout << "Packages offered by AnjuShree:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: Rs.5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at AnjuShree: Rs. 15000.00" << endl;
            cout << "\nPress another key to back or\nEnter package number you want to book: ";
            cin >> packChoice;

            if (packChoice == 1)
            {
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard Pack at AnjuShree" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice == 2)
            {
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked Premium Pack at AnjuShree" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice == 3)
            {
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Luxury Pack at AnjuShree" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu\nPlease Wait!" << endl;
                Sleep(1100);
                system("cls");
                hotels();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect Main Menu: ";
            cin >> gotomenu;
            system("cls");
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
    }
};

float Booking::hotelCost;
class Charges : public Booking, Cabs, Customers
{
public:
    void printBill()
    {
        ofstream outf("receipt.txt");
        {
            outf << "---------ABC Travel Agency---------" << endl;
            outf << "---------------Receipt-------------" << endl;
            outf << "___________________________________" << endl;

            outf << "Customer ID: " << Customers::cusID << endl
                 << endl;
            outf << "Description\t\t Total" << endl;
            outf << "Hotel cost:\t\t " << fixed << setprecision(2) << Booking::hotelCost << endl;
            outf << "Travel (cab) cost:\t " << fixed << setprecision(2) << Cabs::lastcabCost << endl;

            outf << "___________________________________" << endl;
            outf << "Total Charge:\t\t " << fixed << setprecision(2) << Booking::hotelCost + Cabs::lastcabCost << endl;
            outf << "___________________________________" << endl;
            outf << "--------------THANK YOU------------" << endl;
        }
        outf.close();
    }
    void showBill()
    {
        ifstream inf("receipt.txt");
        {
            if (!inf)
            {
                cout << "File opening error!" << endl;
            }
            while (!(inf.eof()))
            {
                inf.getline(all, 999);
                cout << all << endl;
            }
        }
        inf.close();
    }
};

void menu()
{
    int mainChoice;
    int inChoice;
    int gotoMenu;

    cout << "\t\t            * ABC Travels *\n"
         << endl;
    cout << "----------------------Main Menu-------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tCabs Management     -> 2\t|" << endl;
    cout << "\t|\tBookings Management -> 3\t|" << endl;
    cout << "\t|\tCharges & Bill      -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter Your Choice: ";
    cin >> mainChoice;

    system("cls");
    Customers a2;
    Cabs a3;
    Booking a4;
    Charges a5;

    if (mainChoice == 1)
    {
        cout << "---------Customers----------\n"
             << endl;
        cout << "1. Enter New Customer" << endl;
        cout << "2. See Old Customers" << endl;

        cout << "\nEnter Choice: ";
        cin >> inChoice;

        system("cls");
        if (inChoice == 1)
        {
            a2.getDetails();
        }
        else if (inChoice == 2)
        {
            a2.showDetails();
        }
        else
        {
            cout << "Invalid Input! Redirecting to Previous Menu\nPlease Wait!" << endl;
            Sleep(1100);
            system("cls");
            menu();
        }

        cout << "\nPress 1 to Redirect main menu: ";
        cin >> gotoMenu;
        system("cls");
        if (gotoMenu == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if (mainChoice == 2)
    {
        a3.cabDetails();
    }
    else if (mainChoice == 3)
    {
        cout << "--> Book a luxury Hotel using the system <--" << endl;
        a4.hotels();
    }
    else if (mainChoice == 4)
    {
        cout << "--> Get your receipt <--" << endl;
        a5.printBill();

        cout << "Your receipt is already printed you can get it from file path\n"
             << endl;
        cout << "to display your receipt in the screen, Enter 1: or another key to back main menu: ";

        cin >> gotoMenu;

        if (gotoMenu == 1)
        {
            system("cls");
            a5.showBill();
            cout << "\nPress 1 to redirect main menu: ";
            system("cls");
            if (gotoMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            system("cls");
            menu();
        }
    }
    else if (mainChoice == 5)
    {
        cout << "--GOOD-BYE--" << endl;
        Sleep(999);
        system("cls");
        menu();
    }
    else
    {
        cout << "Invalid Input! Redirecting to Previous Menu\nPlease Wait!" << endl;
        Sleep(1100);
        system("cls");
        menu();
    }
}

int main()
{
    ManageMenu startObj;
    return 0;
}