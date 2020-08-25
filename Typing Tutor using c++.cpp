#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>
#include<fstream>
#include<windows.h>

using namespace std;

void basics();
void letters();
void sentence();
int main()
{
system("cls");
int opt;
menu:
system("cls");
cout<<"\n\n\t\t\t   ************** TYPING TUTOR  **************";
cout<<"\n\n\n\t\t~~~ MAIN MENU ~~~";
cout<<"\n\n\t\t1.Learn basics";
cout<<"\n\n\t\t2.Type the letters";
cout<<"\n\n\t\t3.Type the sentence";
cout<<"\n\n\t\t0.Exit";
cout<<"\n\n\n\t\tEnter your choice : ";
cin>>opt;
switch(opt)
{
case 1: basics();
    goto menu;
    break;
case 2: letters();
    goto menu;
    break;
case 3: sentence();
    goto menu;
    break;
case 0: exit(0);
    break;
default: goto menu;
     break;
}
}
void basics()
{
system("cls");;
int rep;
char choice1,choice2;
char key;
char mid[]="asdfgf ;lkjhj";
char top[]="qwertr poiuyu";
char bot[]="zxcvbv /.,mnm";
cout<<"\n\nHello! I think you are new dude to the world of fast typing.";
Sleep(1000);
cout<<"\n\nAnd as I have now agreed to teach you how to be fast in typing......";
Sleep(1000);
cout<<"\n\nLet us start.Are you ready ?(y/n)";
cin>>choice1;
if(choice1=='y'||choice1=='Y')
{
    system("cls");;
    cout<<"\n\nUnderstand, it is very to do this....";
    Sleep(1000);
    cout<<"\n\nFollow me.......";
    Sleep(1000);
    cout<<"\n\nPress any key to start.";
    _getch();
    cout<<"\n\nLet us study the basics....";
    Sleep(1000);
    cout<<"\n\nFirst you have to learn the mid row.....";
    cout<<"\n\nHow many times do you want to practice(Remember...each time you have to practice 13 characters) : ";
    cin>>rep;
    cout<<"\n\nDo you want to see the finger positioning ?(y/n)";
    cin>>choice2;
    if(choice2=='y'||choice2=='Y')
    {
        /************************************/
        cout<<"\n\nUnder development..........";
        _getch();
    }
    cout<<"\n\nType what you see on the screen...";
    int i;
    for(i=0;i<rep;++i)
    {
        for(int j=0;j<13;++j)
        {
            cout<<"\n\nEnter this:"<<mid[j];
            cout<<"\tYou entered:";
            key=_getch();
            cout<<key;
            if(key==mid[j])
            {
                cout<<"\tCorrect..";
                Beep(1200,700);
                Sleep(200);

            }
            else
            {
                cout<<"\tWrong";
                Beep(300,500);
                Sleep(100);

                Beep(300,500);
                Sleep(100);

            }
        }
    }
    system("cls");
    cout<<"\n\nNow you have to learn the top row.....";
    cout<<"\n\nHow many times do you want to practice : ";
    cin>>rep;
    cout<<"\n\nDo you want to see the finger positioning ?(y/n)";
    cin>>choice2;
    if(choice2=='y'||choice2=='Y')
    {
        /************************************/
        cout<<"\n\nUnder development..........";
        _getch();
    }
    cout<<"\n\nType what you see on the screen...";
    for(i=0;i<rep;++i)
    {
        for(int j=0;j<13;++j)
        {
            cout<<"\n\nEnter this:"<<top[j];
            cout<<"\tYou entered:";
            key=_getch();
            if(key==top[j])
            {
                cout<<"\tCorrect..";
                Beep(1200,700);
                Sleep(200);

            }
            else
            {
                cout<<"\tWrong";
                Beep(300,500);
                Sleep(200);

                Beep(300,500);
                Sleep(100);

            }
        }
    }
    system("cls");
    cout<<"\n\nFirst you have to learn the bottom row.....";
    cout<<"\n\nHow many times do you want to practice : ";
    cin>>rep;
    cout<<"\n\nDo you want to see the finger positioning ?(y/n)";
    cin>>choice2;
    if(choice2=='y'||choice2=='Y')
    {
        /************************************/
        cout<<"\n\nUnder development..........";
        _getch();
    }
    cout<<"\n\nType what you see on the screen...";
    for(i=0;i<rep;++i)
    {
        for(int j=0;j<13;++j)
        {
            cout<<"\n\nEnter this:"<<bot[j];
            cout<<"\tYou entered:";
            key=_getch();
            if(key==bot[j])
            {
                cout<<"\tCorrect..";
                Beep(1200,700);
                Sleep(200);

            }
            else
            {
                cout<<"\tWrong";
                Beep(300,500);
                Sleep(200);

                Beep(300,500);
                Sleep(100);

            }
        }
    }
}  //wanna learn
else
{
cout<<"\n\nOh! I think you are busy. OK See you later.......";
Sleep(3000);
}
}
void letters()
{

char choice;
int num;
int score=0,randnum;
char letter,key;
system("cls");
cout<<"In this test you will have to type the letters you see on the screen.";
Sleep(1000);
cout<<"\n\nDo you want to see the help menu ?(y/n)";
choice=_getch();
if(choice=='y'||choice=='Y')
{
cout<<"\n\n1.You are to type the random letters you see on the screen.";
Sleep(2000);
cout<<"\n\n2.If your answer is correct you can hear this beep.";
while(!kbhit())
{
Beep(1200,700);
Sleep(300);

}
_getch();
cout<<"\n\n3.If your answer is wrong you will hear this";
while(!kbhit())
{
Beep(300,500);
Sleep(100);

Beep(300,500);
Sleep(100);

}
}
cout<<"\n\nPress any key when you are ready.";
_getch();
int number;
cout<<"\n\nWhat should be the max score:";
cin>>number;
for(int i=0;i<number;i++)
{
system("cls");
srand(time(NULL));

num=48+rand() %100 + 1;
letter=(char)num;
cout<<"\n\t"<<letter;
key=_getch();
if(key==letter)
{
Beep(1200,700);
Sleep(200);

score++;
}
else
{
Beep(300,500);
Sleep(200);

Beep(300,500);
Sleep(200);

}
}
cout<<"\n\n\nYour total score is "<<score<<"/"<<number;
_getch();
}
void sentence()
{
system("cls");
time_t t1,t2;

cout<<"This is speed test to try your speed.\n";
Sleep(1000);
type:
cout<<"\nYou will have to type the sentence given.\n";
Sleep(1000);
cout<<"\n\nPress any key to start.";
_getch();
system("cls");

string s1[10];
s1[0]="Banging your head against a wall for one hour burns 150 calories.";
s1[1]="Dolphins have been trained to be used in wars.";
s1[2]="Snakes can help predict earthquakes.";
s1[3]="In Switzerland it is illegal to own just one guinea pig.";
s1[4]="Iceland does not have a railway system.";
s1[5]="The healthiest place in the world is in Panama.";
s1[6]="Kids ask 300 questions a day.";
s1[7]="Violin bows are commonly made from horse hair.";
s1[8]="The unicorn is the national animal of Scotland.";
s1[9]="Water makes different pouring sounds depending on its temperature.";
cout<<"\n\n\tEnter the no. of times you want to practice: ";
int p;
cin>>p;
cout<<endl;
for(int i=0;i<p;i++)
{
 system("cls");
 srand(time(NULL));
 int n1;
 n1 = rand()%10;
cout<<"\t"<<s1[n1]<<endl;
string x;
x=s1[n1];
float len=0;
len=x.length();
std::string line;
t1 = time(NULL);
if(i>0)
    cout<<"\n\n\tpress the space bar before you start typing.";
    cout<<"\n\n\tEnter the sentence:";

line.clear();
cin.ignore();
getline(cin,line,'\n');

t2 = time(NULL);
if(line==x)
{

        cout<<"\n\n\tYour typing speed was ";
        printf("%.2f",(len/5)/((t2-t1)*0.01666));
        cout<<" Words/min.";
        _getch();

}
else
{
cout<<"\n\n\tThe sentence you typed was wrong..";
_getch();

}
}
}
