#include<iostream>
#include"branch.h"
using namespace std ;
#include"structHeader.h"
#include<sstream>
#include<fstream>


class pointer
{

  public :

      //  void getgrades();
        void menu();
       // void result();
};

//void pointer ::
/*void getgrades()
{
    cout<<"\n\n\n\t\tPlease enter your sweet name      : ";
       // cin>>soham;
    getline(cin,soham);

    int i=0;
    while(i<subjectcount)
    {
        cout<<"Enter "<<stu[i].subname<<" Grade :";
        cin>>stu[i].gd;

        if(strcmp(stu[i].gd,c10)==0)
            stu[i].rslt=10;
        else if(strcmp(stu[i].gd,c9)==0)
            stu[i].rslt=9;
        else if(strcmp(stu[i].gd,c8)==0)
            stu[i].rslt=8;
        else if(strcmp(stu[i].gd,c7)==0)
            stu[i].rslt=7;
        else if(strcmp(stu[i].gd,c6)==0)
            stu[i].rslt=6;
        else if(strcmp(stu[i].gd,c5)==0)
            stu[i].rslt=5;
        else if(strcmp(stu[i].gd,c4)==0)
            stu[i].rslt=4;
        else if(strcmp(stu[i].gd,c3)==0)
            stu[i].rslt=0;


        i++;
    }

    system("pause");
}
*/
//void pointer ::
/*
void result()
{

    int creditsum=0,i;
    int tmp;
    i=0;
    while(i<subjectcount)
    {
            creditsum+=stu[i].credit;
            i++;
    }
    double gradesum=0.0;
    i=0;
        while(i<subjectcount)
        {
            tmp=stu[i].rslt*stu[i].credit;
            gradesum+=tmp;

            i++;
        }

        double sgpa=gradesum/creditsum;
        cout<<"\nscored credits : "<<gradesum;
        cout<<"\ntotal credits : "<<creditsum;
        cout<<"\n\nCongratulations...."<<soham<<" !!! Your SGPA is   "<<sgpa<<endl;

    line=soham;
    fio.open("sgpa.txt",ios::app|ios::in|ios::out);
	fio <<line<<"               "<<sgpa<< endl;
    fio.close();


        system("pause");
}
*/
void pointer ::menu()
{
    system("color f0");
    int opt;
    pointer ps;
    branch br;
    while(1)
    {
        system("cls");
        cout<<"\n\n\n\n***********************************    MENU  "<<__DATE__<<","<<__TIME__<<"    ******************************";
        cout<<"\n\n\n\n\t\t\t1.Select Branch";
      //  cout<<"\n\t\t\t2.Enter Obtained Grades(If your branch is not added above) ";
       // cout<<"\n\t\t\t3.Calculate Result(If your branch is not added above)";
        cout<<"\n\t\t\t2.History";
        cout<<"\n\t\t\t3.Go Back";
        cout<<"\n\n ";
    // cin>>opt;
        cout << "\nEnter proper option : " ;

        string pline;
        //int opt;
        while(getline(cin, pline))
        {
         stringstream ss(pline);
         if (ss >> opt)
         {
            if (ss.eof())
            {   // Success
                break;
            }
         }
        // cout << "\nEnter proper option : " ;
        }
        if(opt>2)
            break;
        switch(opt)
        {
        case 1: br.menu(); break;
        //case 2: ps.getgrades();break;
        //case 3: ps.result();break;
        case 2: branch his;
                his.history(); break;

        }
    }
}

