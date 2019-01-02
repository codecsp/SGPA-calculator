#include<iostream>
using namespace std;
#include<string.h>
#include"structHeader.h" //SUB it[10];
//#include"pointer.h"
#include <sstream>
#include<fstream>

    fstream fio;
    string line;

    //string line;


class branch
{
public :

    void menu();
    void fyit();
    void fycse();
    void syitsem1();
    void sycsesem1();
    void history();
    void syelnsem1();
   // void
};

void branch::fyit()
{
    it[0].subname="Chemistry";
    it[1].subname="M2";
    it[2].subname="Mechanics";
    it[3].subname="Graphics";
    it[4].subname="Electrical";
    it[5].subname="Communication";
    it[6].subname="Chemistrylab";
    it[7].subname="MechanicsLab";
    it[8].subname="Graphicslab";
    it[9].subname="ElectricalLab";
   // it[10].credit="Chemistry";
    it[0].credit=3;
    it[1].credit=4;
    it[2].credit=3;
    it[3].credit=3;
    it[4].credit=3;
    it[5].credit=3;
    it[6].credit=1;
    it[7].credit=1;
    it[8].credit=1;
    it[9].credit=1;


    system("cls");
    int i=0;
    cout<<"\n\n\n\n***********************************    ENTER GRADES  (IT) "<<__DATE__<<","<<__TIME__<<"    ******************************\n\n";
    cout<<"\n\n\n\t\tPlease enter your sweet name      : ";
       // cin>>soham;
    getline(cin,soham);
    cout<<"\n\n";
    while(i<10)
    {
        cout<<"Enter "<<it[i].subname<<" Grade (EX. AA or AB likewise):";
        cin>>it[i].gd;

        if(strcmp(it[i].gd,c10)==0)
            it[i].rslt=10;
        else if(strcmp(it[i].gd,c9)==0)
            it[i].rslt=9;
        else if(strcmp(it[i].gd,c8)==0)
            it[i].rslt=8;
        else if(strcmp(it[i].gd,c7)==0)
            it[i].rslt=7;
        else if(strcmp(it[i].gd,c6)==0)
            it[i].rslt=6;
        else if(strcmp(it[i].gd,c5)==0)
            it[i].rslt=5;
        else if(strcmp(it[i].gd,c4)==0)
            it[i].rslt=4;
        else if(strcmp(it[i].gd,c3)==0)
            it[i].rslt=0;


        i++;
    }

    int creditsum=0;
    double tmp;
    i=0;
    while(i<10)
    {
            creditsum+=it[i].credit;
            i++;
    }
    double gradesum=0.0;
    i=0;
    while(i<10)
    {
         //   cout<<"\n"<<it[i].rslt <<" "<<it[i].credit;
            tmp=it[i].rslt*it[i].credit;
            gradesum+=tmp;

            i++;
    }

        double sgpa=gradesum/creditsum;
        //cout<<"\n\nscored credits : "<<gradesum;
        cout<<"\n\ntotal credits : "<<creditsum;
        cout<<"\n\nCongratulations...."<<soham<<" !!! Your SGPA is   "<<sgpa<<endl;


    line=soham;
    fio.open("sgpa.txt",ios::app|ios::in|ios::out);
	fio <<line<<"               "<<sgpa<< endl;
    fio.close();
    system("pause");

}


void branch::fycse()
{
    cse[0].subname="physics";
    cse[1].subname="M1";
    cse[2].subname="civil";
    cse[3].subname="mechanical";
    cse[4].subname="electronics";
   // cse[5].subname="Communication";
    cse[5].subname="Computer";
    cse[6].subname="biology";
    cse[7].subname="Physicslab";
    cse[8].subname="CivilLab";
    cse[9].subname="ComputerLab";
    cse[10].subname="MechanicalLab";
    cse[11].subname="ElectronicsLab";

    cse[0].credit=3;
    cse[1].credit=4;
    cse[2].credit=3;
    cse[3].credit=3;
    cse[4].credit=3;
    cse[5].credit=2;
    cse[6].credit=2;
    cse[7].credit=1;
    cse[8].credit=1;
    cse[9].credit=1;
    cse[10].credit=1;
    cse[11].credit=1;


    system("cls");

    cout<<"\n\n\n\n***********************************    ENTER GRADES  "<<__DATE__<<","<<__TIME__<<"    ******************************\n\n";
    cout<<"\n\n\n\t\tPlease enter your sweet name      : ";
       // cin>>soham;
        getline(cin,soham);
    int i=0;
//    cout<<"\n\n\n";
    while(i<12)
    {
        cout<<"Enter "<<cse[i].subname<<" Grade (EX. AA or AB likewise) : ";
        cin>>cse[i].gd;

        if(strcmp(cse[i].gd,c10)==0)
            cse[i].rslt=10;
        else if(strcmp(cse[i].gd,c9)==0)
            cse[i].rslt=9;
        else if(strcmp(cse[i].gd,c8)==0)
            cse[i].rslt=8;
        else if(strcmp(cse[i].gd,c7)==0)
            cse[i].rslt=7;
        else if(strcmp(cse[i].gd,c6)==0)
            cse[i].rslt=6;
        else if(strcmp(cse[i].gd,c5)==0)
            cse[i].rslt=5;
        else if(strcmp(cse[i].gd,c4)==0)
            cse[i].rslt=4;
        else if(strcmp(cse[i].gd,c3)==0)
            cse[i].rslt=0;


        i++;
    }



    int creditsum=0;
    double tmp;
    i=0;
    while(i<12)
    {
            creditsum+=cse[i].credit;
            i++;
    }
    double gradesum=0.0;
    i=0;
        while(i<12)
        {
            tmp=cse[i].rslt*cse[i].credit;
            gradesum+=tmp;

            i++;
        }

        double sgpa=gradesum/creditsum;
       // cout<<"\n\nscored credits : "<<gradesum;
        cout<<"\n\ntotal credits : "<<creditsum;
        cout<<"\n\nCongratulations...."<<soham<<" !!! Your SGPA is   "<<sgpa<<endl;


    line=soham;
    fio.open("sgpa.txt",ios::app|ios::in|ios::out);
//	fio <<line<<"               "<<sgpa<< endl;
    fio <<line<<setw(20)<<sgpa<< endl;

    fio.close();

        system("pause");






}


void branch::syitsem1() //syit1
{
    syit1[0].subname="Linear Algebra";
    syit1[1].subname="Discrete Mathematics";
    syit1[2].subname="Data Structures";
    syit1[3].subname="Microprocessors";
    syit1[4].subname="DCN";
   // syit1[5].subname="Communication";
    syit1[5].subname="DS Lab";
    syit1[6].subname="MP Lab";
    syit1[7].subname="PL-1 (CPP) lab";
    syit1[8].subname="Mini Project-I";

    syit1[0].credit=4;
    syit1[1].credit=4;
    syit1[2].credit=3;
    syit1[3].credit=3;
    syit1[4].credit=3;
    syit1[5].credit=1;
    syit1[6].credit=1;
    syit1[7].credit=3;
    syit1[8].credit=1;


    system("cls");

    cout<<"\n\n\n\n***********************************    ENTER GRADES (SY-IT) "<<__DATE__<<","<<__TIME__<<"    ******************************\n\n";
    cout<<"\n\n\n\t\tPlease enter your sweet name      : ";
       // cin>>soham;
        getline(cin,soham);

    cout<<"\n\n";
    int i=0;
//    cout<<"\n\n\n";
    while(i<9)
    {
        cout<<"Enter "<<syit1[i].subname<<" Grade (EX. AA or AB likewise) : ";
        cin>>syit1[i].gd;

        if(strcmp(syit1[i].gd,c10)==0)
            syit1[i].rslt=10;
        else if(strcmp(syit1[i].gd,c9)==0)
            syit1[i].rslt=9;
        else if(strcmp(syit1[i].gd,c8)==0)
            syit1[i].rslt=8;
        else if(strcmp(syit1[i].gd,c7)==0)
            syit1[i].rslt=7;
        else if(strcmp(syit1[i].gd,c6)==0)
            syit1[i].rslt=6;
        else if(strcmp(syit1[i].gd,c5)==0)
            syit1[i].rslt=5;
        else if(strcmp(syit1[i].gd,c4)==0)
            syit1[i].rslt=4;
        else if(strcmp(syit1[i].gd,c3)==0)
            syit1[i].rslt=0;
        else
            syit1[i].rslt=0;


        i++;
    }



    int creditsum=0;
    double tmp;
    i=0;
    while(i<12)
    {
            creditsum+=syit1[i].credit;
            i++;
    }
    double gradesum=0.0;
    i=0;
        while(i<12)
        {
            tmp=syit1[i].rslt*syit1[i].credit;
            gradesum+=tmp;

            i++;
        }

        double sgpa=gradesum/creditsum;
       // cout<<"\n\nscored credits : "<<gradesum;
        cout<<"\n\ntotal credits : "<<creditsum;
        cout<<"\n\nCongratulations...."<<soham<<" !!! Your SGPA is   "<<sgpa<<endl;

    line=soham;
    fio.open("sgpa.txt",ios::app|ios::in|ios::out);
//    fio <<line<<"               "<<sgpa<< endl;
        fio <<line<<setw(20)<<sgpa<< endl;


    fio.close();


        system("pause");



}


void branch::sycsesem1()
{
    sycse1[0].subname="Discrete Mathematics";
    sycse1[1].subname="Data Structures";
    sycse1[2].subname="DCN";
    sycse1[3].subname="Software Engineering";
    sycse1[4].subname="Processor Architecture";
    sycse1[5].subname="Environment science";
    sycse1[6].subname="DS Lab";
    sycse1[7].subname="Processor Architecture Lab";
    sycse1[8].subname="Pl-1 (CPP)";
    // it[10].credit="Chemistry";
    sycse1[0].credit=4;
    sycse1[1].credit=3;
    sycse1[2].credit=3;
    sycse1[3].credit=4;
    sycse1[4].credit=3;
    sycse1[5].credit=3;
    sycse1[6].credit=1;
    sycse1[7].credit=1;
    sycse1[8].credit=3;
    //it[9].credit=3;


    system("cls");
    int i=0;
    cout<<"\n\n\n\n***********************************    ENTER GRADES (SY-CSE) "<<__DATE__<<","<<__TIME__<<"    ******************************\n\n";
    cout<<"\n\n\n\t\tPlease enter your sweet name      : ";
       // cin>>soham;
    getline(cin,soham);
    cout<<"\n\n";
    while(i<9)
    {
        cout<<"Enter "<<sycse1[i].subname<<" Grade (EX. AA or AB likewise):";
        cin>>sycse1[i].gd;

        if(strcmp(sycse1[i].gd,c10)==0)
            sycse1[i].rslt=10;
        else if(strcmp(sycse1[i].gd,c9)==0)
            sycse1[i].rslt=9;
        else if(strcmp(sycse1[i].gd,c8)==0)
            sycse1[i].rslt=8;
        else if(strcmp(sycse1[i].gd,c7)==0)
            sycse1[i].rslt=7;
        else if(strcmp(sycse1[i].gd,c6)==0)
            sycse1[i].rslt=6;
        else if(strcmp(sycse1[i].gd,c5)==0)
            sycse1[i].rslt=5;
        else if(strcmp(sycse1[i].gd,c4)==0)
            sycse1[i].rslt=4;
        else if(strcmp(sycse1[i].gd,c3)==0)
            sycse1[i].rslt=0;
        else
            sycse1[i].rslt=0;


        i++;
    }

    int creditsum=0;
    double tmp;
    i=0;
    while(i<9)
    {
            creditsum+=sycse1[i].credit;
            i++;
    }
    double gradesum=0.0;
    i=0;
    while(i<9)
    {
         //   cout<<"\n"<<it[i].rslt <<" "<<it[i].credit;
            tmp=sycse1[i].rslt*sycse1[i].credit;
            gradesum+=tmp;

            i++;
    }

        double sgpa=gradesum/creditsum;
        //cout<<"\n\nscored credits : "<<gradesum;
        cout<<"\n\ntotal credits : "<<creditsum;
        cout<<"\n\nCongratulations...."<<soham<<" !!! Your SGPA is   "<<sgpa<<endl;


    line=soham;
    fio.open("sgpa.txt",ios::app|ios::in|ios::out);
	//fio <<line<<"               "<<sgpa<< endl;
    fio <<line<<setw(20)<<sgpa<< endl;

    fio.close();
    system("pause");

}

void branch::syelnsem1()
{
    syeln1[0].subname="Mathematics - III";
    syeln1[1].subname="Circuit Theory";
    syeln1[2].subname="Digital Electronics";
    syeln1[3].subname="Electronics-Circuit analysis";
    syeln1[4].subname="Transducer Measurement";
    syeln1[5].subname="DE lab";
    syeln1[6].subname="ECAD-I Lab";
    syeln1[7].subname="TMI Lab";
    syeln1[8].subname="DSA Lab";
    // it[10].credit="Chemistry";
    syeln1[0].credit=4;
    syeln1[1].credit=4;
    syeln1[2].credit=3;
    syeln1[3].credit=3;
    syeln1[4].credit=3;
    syeln1[5].credit=2;
    syeln1[6].credit=1;
    syeln1[7].credit=1;
    syeln1[8].credit=3;
    //it[9].credit=3;


    system("cls");
    int i=0;
    cout<<"\n\n\n\n***********************************    ENTER GRADES (SY-ELN) "<<__DATE__<<","<<__TIME__<<"    ******************************\n\n";
    cout<<"\n\n\n\t\tPlease enter your sweet name      : ";
       // cin>>soham;
    getline(cin,soham);
    cout<<"\n\n";
    while(i<9)
    {
        cout<<"Enter "<<syeln1[i].subname<<" Grade (EX. AA or AB likewise):";
        cin>>syeln1[i].gd;

        if(strcmp(syeln1[i].gd,c10)==0)
            syeln1[i].rslt=10;
        else if(strcmp(syeln1[i].gd,c9)==0)
            syeln1[i].rslt=9;
        else if(strcmp(syeln1[i].gd,c8)==0)
            syeln1[i].rslt=8;
        else if(strcmp(syeln1[i].gd,c7)==0)
            syeln1[i].rslt=7;
        else if(strcmp(syeln1[i].gd,c6)==0)
            syeln1[i].rslt=6;
        else if(strcmp(syeln1[i].gd,c5)==0)
            syeln1[i].rslt=5;
        else if(strcmp(syeln1[i].gd,c4)==0)
            syeln1[i].rslt=4;
        else if(strcmp(syeln1[i].gd,c3)==0)
            syeln1[i].rslt=0;
        else
            syeln1[i].rslt=0;


        i++;
    }

    int creditsum=0;
    double tmp;
    i=0;
    while(i<9)
    {
            creditsum+=syeln1[i].credit;
            i++;
    }
    double gradesum=0.0;
    i=0;
    while(i<9)
    {
         //   cout<<"\n"<<it[i].rslt <<" "<<it[i].credit;
            tmp=syeln1[i].rslt*syeln1[i].credit;
            gradesum+=tmp;

            i++;
    }

        double sgpa=gradesum/creditsum;
        //cout<<"\n\nscored credits : "<<gradesum;
        cout<<"\n\ntotal credits : "<<creditsum;
        cout<<"\n\nCongratulations...."<<soham<<" !!! Your SGPA is   "<<sgpa<<endl;


    line=soham;
    fio.open("sgpa.txt",ios::app|ios::in|ios::out);
	fio <<line<<setw(20)<<sgpa<< endl;
    fio.close();
    system("pause");

}


void branch::history()
{
    fio.open("sgpa.txt",ios::app|ios::in|ios::out);
    fio.seekg(0, ios::beg);
    cout<<"\n\nName "<<setw(25)<<"SGPA\n\n";
	while (fio)
    {
        getline(fio, line);
        cout << line << endl;
	}

	fio.close();
    system("pause");

}

void branch::menu()
{
    int opt;
    branch b1;
   system("color f0");
    while(1)
    {
        system("cls");
        //cout<<"\n\n\n\t\tBranch Selection\n\n";
        cout<<"\n\n\n\n***********************************    BRANCH SELECTIONS  "<<__DATE__<<","<<__TIME__<<"    ******************************";
        cout<<"\n\n\n\t\t1.SY IT SEM-III";
        cout<<"\n\t\t2.SY CSE SEM-III";
        cout<<"\n\t\t3.SY Electronics SEM-III ";
        cout<<"\n\t\t4.History ";
        cout<<"\n\t\t5.Go Back \n\n";
        cout<<"\t\t\n";
        cout<<"Note : If your branch is not listed above, go back to main menu and add subject credentials\n\n";
       // cin>>opt;
        cout << "\nEnter proper option : " ;

        string ssline;
        //int opt;
        while (getline(cin, ssline))
        {
         stringstream ss(ssline);
         if (ss >> opt)
         {
            if (ss.eof())
            {   // Success
                break;
            }
         }
        // cout << "\nEnter proper option :  " ;
        }
        //cout << "Finally: " << d << std::endl;


        if(opt>4)
            break;
        switch(opt)
        {
        case 1: b1.syitsem1();break;
        case 2: b1.sycsesem1();break;
        case 3: b1.syelnsem1();break;
        case 4: b1.history();break;
        }
    }

}
