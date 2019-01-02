#include<iostream>
#ifndef STRUCT_HEADER
#define STRUCT_HEADER
#include<fstream>
using namespace std;

typedef struct sub
{
    string subname;
    int credit;
    char gd[2];
    int rslt;

}SUB;


string soham;
char c10[3]="AA"; char c9[3]="AB";
char c8[3]="BB";  char c7[3]="BC";
char c6[3]="CC";  char c5[3]="CD";
char c4[3]="DD";  char c3[3]="FF";

int subjectcount;

SUB stu[25];
SUB it[10];//sem2
SUB cse[12]; //sem1
SUB syit1[9];
SUB sycse1[9];
SUB syeln1[9];

//int rslt[subjectcount];

#endif // STRUCT_HEADER
