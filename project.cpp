#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<fstream>
#include<windows.h>
#include<conio.h>
#include"subjects.h"
#include"pointer.h"
#include<iostream>
#include <sstream>
//#include"branch.h"
#include"structHeader.h"

using namespace std;

void wcemain()
{
    int opt;
    subject sp;
    pointer ps;
    system("color f0");
    int d=sp.getsubcount();

    while(1)
    {
        system("cls");

        cout<<"\n\t\t\t\t\t\t\t\t\t\tCreated by :-";
        cout<<"\n\t\t\t\t\t\t\t\t\t\tSOHAM PATIL ";
        cout<<"\n\t\t\t\t\t\t\t\t\t\tSY IT";
        cout<<"\n\t\t\t\t\t\t\t\t\t\tWalchand College Of Engineering, Sangli";
        cout<<"\n\n\n\n***********************************    RESULT(SGPA) Calculator    "<<__DATE__<<","<<__TIME__<<"    ******************************";
        cout<<"\n\n\n1.Branch Selection";
        cout<<"\n2.Add Subjects (If your branch is not added above )";

        cout<<"\n3.exit\n\n   ";
        string line;
       // int opt;
        cout << "\nEnter proper option : " ;
        while (getline(cin, line))
        {
         stringstream ss(line);
         if (ss >> opt)
         {
            if (ss.eof())
            {   // Success
                break;
            }
         }
        }

        if(opt>2)
            break;
        switch(opt)
        {

            case 1 :ps.menu();break;
            case 2 :sp.menu();break;

        }

    }
    //return 0;
}



int main ()         // userID AND PASSWORD
{
    string userName;
    string userPassword;
    int loginAttempt = 0;
    system("color f0");
    while (loginAttempt < 3)
    {
        system("cls");
        cout<<"\n\t\t\t\t\t\t\t\t\t\tCreated by :- Soham Patil  (SY IT)";
        cout<<"\n\t\t\t\t\t\t\t\t\t\tTested by  :- Komal Jadhav (SY CSE)\n";
  //      cout<<"\n\t\t\t\t\t\t\t\t\t\tSY IT";
      //  cout<<"\n\t\t\t\t\t\t\t\t\t\tTested by : KOMAL JADHAV ";
        cout<<"\n\t\t\t\t\t\t\t\t\t\tWalchand College Of Engineering, Sangli";


        cout<<"\n\n\n\n***********************************    LOG IN Credentials   "<<__DATE__<<","<<__TIME__<<"    ******************************";


        cout << "\n\n\n\n\t\tPlease enter your user name      : ";
        cin >> userName;
        cout << "\t\tPlease enter your user password  : ";
        cin >> userPassword;

        if (userName == "wce" && userPassword == "it")
        {
            cout << "Welcome Folk!\n";

            wcemain();

            break;
        }
        else
        {
            cout << "\n\n\n\t\tInvalid login attempt....... Please try again.\n\n\n\t\t" << '\n';
            loginAttempt++;
        }
        system("pause");
    }
    if (loginAttempt == 3)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    cout << "Thank you "<<soham<<", for logging in..!!!\n";




}

