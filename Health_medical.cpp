#include<string>
#include<fstream>
#include<Windows.h>
#include<conio.h>
#include<iostream>

using namespace std;

void gotoxy(int x, int y) 
{ 
    COORD coord;
    coord.X = x; 
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void menu();
void read();
void write();
void modify();
void Delete();
void search();
void box();


//registering the patients
class patient
{
    public:
    string name;
    long long int phonenum;
    int age;
    string address;
    public:

    patient(string Pname="NoDetails",long Pnumber=101,int P_age=0,string Paddress="Nodetails"):
        name(Pname),
        phonenum(Pnumber),
        age(P_age),
        address(Paddress)
   {}
    void getdata()
    {   box();
        int i=12;
        gotoxy(29,10);
        cout<<"enter the patients name:";
        getline(cin,name);
        gotoxy(26,i++);
        cout<<"enter the address of the patients:";
        getline(cin,address);
        gotoxy(26,i++);
        cout<<"enter the phonenum name:";
        cin>>phonenum;
        gotoxy(26,i++);
        cout<<"enter the age name:";
        cin>>age;
        
    }
    void showData()
    {   box();
        int i=12;
        gotoxy(26,i++);
        cout<<"\n patients name:"<<name;
        gotoxy(26,i++);
        cout<<"\ncontact number of the patients:"<<phonenum;
        gotoxy(26,i++);
        cout<<"\nage:"<<age;
        gotoxy(26,i++);
        cout<<"\nthe address of the patient:"<<address;
    }
}p,s;
//records of medicine prescribed to the patients

void menu();
void read();
void write();
void modify();
void Delete();
void search();

int main()
{
    menu();
    return 0;
}

void box()
{system("cls");
 int n;
 for(n=18;n<70;n++)
 {
  gotoxy(n,23);
  cout<<"*";
 }
 for(n=18;n<70;n++)
 {
 gotoxy(n,7);
 cout<<"*";
 }
 for(n=7;n<24;n++)
 {
  gotoxy(70,n);
  cout<<"*";
 }
 for(n=7;n<24;n++)
 {
 gotoxy(17,n);
  cout<<"*";
 }
}

void menu()
{
    cout<<"\t\t\t---MAIN MENU---\n"<<"\tchoose from the following modes \n";
    cout<<"1.record a patient\n"<<"2.medicines prescribed\n";
    cout<<"3.reminders for today\n"<<"4.feedback extraction for today\n";
    cout<<"5.exit\n";
    int n;
    cin>>n;
    
    switch(n)
    {
        case 1:
        p,s;
        p.getdata();
        p.showData();
        s.showData();
        break;

        case 2:
        printf("hello");
        break;

        case 3:
        printf("hello");
        break;

        case 4:
        printf("hello");
        break;

        case 5:
        exit (0);
        break;
    }
}