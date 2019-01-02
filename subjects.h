#include<iostream>
#include<string>
using namespace std ;

#include"structHeader.h"
#include<string.h>
#include <sstream>
#include<fstream>
//#include"branch.h"
//#include"pointer.h"
fstream fi;
string lin;
int countsubject;/*typedef struct sub
{
    char subname[50];
    int credit;
}SUB;
*/
void getgrades()
{
    cout<<"\n\n\n\t\tPlease enter your sweet name      : ";
       // cin>>soham;
    getline(cin,soham);

    int i=0;
    while(i<subjectcount)
    {
        cout<<"Enter "<<stu[i].subname<<" Grade (EX. AA or AB likewise) :";
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
        else
            stu[i].rslt=0;

        i++;
    }

    system("pause");
}

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

   // string line;
    lin=soham;
    fi.open("sgpa.txt",ios::app|ios::in|ios::out);
	fi <<lin<<"               "<<sgpa<< endl;
    fi.close();
    system("pause");
}

    void histor()
    {


    fi.open("sgpa.txt",ios::app|ios::in|ios::out);
    fi.seekg(0, ios::beg);
	cout<<"\n\nName "<<setw(20)<<"SGPA\n\n";

	while (fi)
    {
        getline(fi, lin);
        cout << lin << endl;
	}

	fi.close();
    system("pause");


    }
class subject
{
    int subcount;
public :
        subject()
        {
            subcount=0;
        }
        void getsub();
        void menu();
        int getsubcount()
        {
            return subcount;
        }
        void presub();

};

//pointer p1;


void subject::getsub()
{


           string li;
           cout<<"\nEnter total subjects (integer only): ";
           cin>>subcount;

    /*    while (getline(cin, li))
        {
         stringstream ss(li);
         if (ss >> subcount)
         {
            if (ss.eof())
            {   // Success
                break;
            }
         }
        }
*/

             //  subcount=10;
            // SUB stu[subcount];
           subjectcount=subcount;
           countsubject=subcount;
            int i=0;
            while(i<subcount)
            {
                cout<<endl;
                cout<<"Enter subject "<<i+1<<" name  :" ;
                fflush(stdin);
                getline(cin, stu[i].subname);
               // getline (cin,mystr);
                cout<<"enter it's  credits (Integer only)  : ";
                cin>>stu[i].credit;

                i++;
            }


}

void subject::menu()
{
    int opt;
    system("color f0");
    subject s1;
    while(1)
    {

    system("cls");
    cout<<"\n\n\n\n*****************************    If your branch is not added, add here  "<<__DATE__<<","<<__TIME__<<"    *************************\n\n";

    cout<<"\n\n\n\t\tNOTE : Please enter subject credentials at first";

    cout<<"\n\n\n\t\t1.Enter subject credentials  ";
    cout<<"\n\t\t2.Enter Obtained Grades";
    cout<<"\n\t\t3.calculate Result";
    cout<<"\n\t\t4.History";
    cout<<"\n\t\t5.Exit";
    cout<<"\n\n  ";
    cout << "\nEnter proper option : " ;

        string sline;
        //int opt;
        while (getline(cin, sline))
        {
         stringstream ss(sline);
         if (ss >> opt)
         {
            if (ss.eof())
            {   // Success
                break;
            }
         }
       //  cout << "\nEnter proper option : " ;
        }

    if(opt>4)
        break ;
    switch(opt)
    {
    case 1 : s1.getsub(); break ;
    //case 2 : branch h;
      //       h.history();break;
    case 2 : getgrades();break;
//            goto LOOP;
    case 3 : result(); break;
    case 4 : histor(); break;
    case 5 :  return ;

        }
    }

}
