#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int overwrite[15] ={0};
int move = 100;

int welcome();
char q1();
char q2();
char q3();
char q4();
char q5();
char q6();
char q7();
char q8();
char q9();
char q10();
char q11();
char q12();
char q13();
char q14();
char q15();
char q16();
char q17();
char q18();
char q19();
char q20();
char q21();
char q22();
char q23();
char q24();
char q25();
char q26();
char q27();
char q28();
char q29();
char call(int  select2);
void win(char arr3[][3],int position,int position2,int counter,int arr2[][3]);
void lose(char arr3[][3],int position,int position2,int counter,int arr2[][3]);
int conditions(char arr3[][3],int position,int position2,int counter,int arr2[][3]);
int Grid(char arr3[][3]);
void Error_Message(char arr3[][3],int position,int position2,int counter,int arr2[][3]);
int pass_value(char arr3[][3],int position,int position2,int counter,int arr2[][3]);






int main()
{
    int arr2[3][3] = {0},position2=0, counter =0,position =0;
    char arr3[3][3] ={0},play=0;

    system("CLS");
    cout << "<<ENTER ANY KEY TO START THE GAME " << endl;
    cin >> play;
    if(play >0)
    {
        welcome();
        pass_value(arr3,position,position2,counter,arr2);

    }

    return 0;
}

// Welcoming to the game
int welcome()
{
       float time1 = 10, push1 = 100,time2 =1,push2 = 53;
       system("CLS");
       cout << setw(push1) << "***                      ***                      ***" << endl;
       Sleep(time1);
       cout << setw(push1) << " ***                   *** ***                   *** " << endl;
       Sleep(time1);
       cout << setw(push1) << "  ***                 ***   ***                 ***  " << endl;
       Sleep(time1);
       cout << setw(push1) << "   ***               ***     ***               ***   " << endl;
       Sleep(time1);
       cout << setw(push1) << "    ***             ***       ***             ***    " << endl;
       Sleep(time1);
       cout << setw(push1) << "     ***           ***         ***           ***     " << endl;
       Sleep(time1);
       cout << setw(push1) << "      ***         ***           ***         ***      " << endl;
       Sleep(time1);
       cout << setw(push1) << "       ***       ***             ***       ***       " << endl;
       Sleep(time1);
       cout << setw(push1) << "        ***     ***               ***     ***        "<< endl;
       Sleep(time1);
       cout << setw(push1) << "         ***   ***                 ***   ***         " << endl;
       Sleep(time1);
       cout << setw(push1) << "            ***                       ***            " << endl;



       Sleep(300);
       system("CLS");
       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;

       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);

        cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;

       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;

       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         "<< endl;
       Sleep(time1);
       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;

       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;


       Sleep(300);
       system("CLS");
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         "<< endl;
       Sleep(time1);
       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;

       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;



       Sleep(300);
       system("CLS");
        cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
              cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
              cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
        cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
              cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
              cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;



       Sleep(300);
       system("CLS");
        cout << setw(60);
       for(int i=0;i<41;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
              cout << setw(60);
       for(int i=0;i<41;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
        cout << setw(60);
       for(int i=0;i<41;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
       Sleep(time1);
       cout << setw(push1) << "********                         ********" << endl;
       Sleep(time1);
       cout << setw(push1) << "********                         ********" << endl;
       Sleep(time1);
       cout << setw(push1) << "********                         ********" << endl;
       Sleep(time1);
       cout << setw(push1) << "********                         ********" << endl;
       Sleep(time1);
       cout << setw(push1) << "********                         ********" << endl;
        cout << setw(60);
       for(int i=0;i<41;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
              cout << setw(60);
       for(int i=0;i<41;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
              cout << setw(60);
       for(int i=0;i<41;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;


       system("CLS");
       cout << setw(push1) << "            ***                       ***            " << endl;
       Sleep(time1);
       cout << setw(push1) << "         ***   ***                 ***   ***         " << endl;
       Sleep(time1);
       cout << setw(push1) << "        ***     ***               ***     ***        " << endl;
       Sleep(time1);
       cout << setw(push1) << "       ***       ***             ***       ***       " << endl;
       Sleep(time1);
       cout << setw(push1) << "      ***         ***           ***         ***      " << endl;
       Sleep(time1);
       cout << setw(push1) << "     ***           ***         ***           ***     " << endl;
       Sleep(time1);
       cout << setw(push1) << "    ***             ***       ***             ***    " << endl;
       Sleep(time1);
       cout << setw(push1) << "   ***               ***     ***               ***   " << endl;
       Sleep(time1);
       cout << setw(push1) << "  ***                 ***   ***                 ***  " << endl;
       Sleep(time1);
       cout << setw(push1) << " ***                   *** ***                   *** " << endl;
       Sleep(time1);
       cout << setw(push1) << "***                      ***                      ***" << endl;


       Sleep(300);
       system("CLS");
       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;

       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);

        cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;

       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;

       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         " << endl;
       Sleep(time1);
       cout << setw(push1) << "******                                         "<< endl;
       Sleep(time1);
       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;

       cout << setw(push2);
       for(int i=0;i<35;i++)
       {
           cout << "*";
           Sleep(time2);
       }
       cout << endl;
}


char q1()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "How many verses are there in the holy QURAN " << endl;
    cout <<setw(80)<<    "a). 6236 " << endl;
    cout <<setw(80)<<    "b). 6157 " << endl;
    cout <<setw(80)<<    "c). 6689 " << endl;
    cout <<setw(80)<<    "d). 6687 " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
        
    cout << "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'a':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q2()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "  How many verses are there in surah Al Qalam " << endl;
    cout <<setw(80)<<   "  a). 51 " << endl;
    cout <<setw(80)<<   "  b). 56 " << endl;
    cout <<setw(80)<<   "  c). 52 " << endl;
    cout <<setw(80)<<   "  d). 53 " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;

    cout << "Enter one of the above options " << endl;
    cin >> x;  
    switch(x)
    {
        case 'c':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q3()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Who was the first child to accept islam " << endl;
    cout <<setw(80)<<   "a). numan  " << endl;
    cout <<setw(80)<<   "b). Khan   " << endl;
    cout <<setw(80)<<   "c). Talha  " << endl;
    cout <<setw(80)<<   "d). Ali RA " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
        
    cout << "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'd':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q4()
{
    char x = 0;
        
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "What was the first qibla of muslims " << endl;
    cout <<setw(80)<<   "a). Madina " << endl;
    cout <<setw(80)<<   "b). Mecca  " << endl;
    cout <<setw(80)<<   "c). Jadha  " << endl;
    cout <<setw(80)<<   "d). Al Aqsa" << endl;

    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'd':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q5()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "What was the first surah revealed to prophet Muhammad SAW" << endl;
    cout <<setw(80)<<   "a).Al_Alaq     " << endl;
    cout <<setw(80)<<   "b).Surah Annas " << endl;
    cout <<setw(80)<<   "c).Surah Baqara" << endl;
    cout <<setw(80)<<   "d).Surah Mulk  " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'a':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q6()
{
    char x = 0;
        
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "In muslims world of science who was cosidered as father of chemistry " << endl;
    cout <<setw(80)<<   "a).Bu-Ali-Sina     " << endl;
    cout <<setw(80)<<   "b).Ibn al-Haytham  " << endl;
    cout <<setw(80)<<   "c).Jabir ibn Hayyan" << endl;
    cout <<setw(80)<<   "d).Ibn Arabi       " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'c':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q7()
{
    char x = 0;
        
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Who was sameera mousa        " << endl;
    cout <<setw(80)<<   "a).Ejyptian nuclear physcist" << endl;
    cout <<setw(80)<<   "b).Ejyptian cook            " << endl;
    cout <<setw(80)<<   "c).Ejyptian pilot           " << endl;
    cout <<setw(80)<<   "d).Ejyptian scientist       " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'a':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q8()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Formula of momentum" << endl;
    cout <<setw(80)<<   "a).p = m*a" << endl;
    cout <<setw(80)<<   "b).p = m*r" << endl;
    cout <<setw(80)<<   "c).p = m*q" << endl;
    cout <<setw(80)<<   "d).p = m*v" << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout << "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'd':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q9()
{
    char x = 0;

    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "What is mass energy equation " << endl;
    cout <<setw(80)<<   "a).E = mc/2 " << endl;
    cout <<setw(80)<<   "b).E = 2pi/2" << endl;
    cout <<setw(80)<<   "c).E = m*c^2" << endl;
    cout <<setw(80)<<   "d).E = m*a  " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;

    
    cout << "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'c':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q10()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Force of gravitation " << endl;
    cout <<setw(80)<<   "a).F = G*m1*m2/r^2  " << endl;
    cout <<setw(80)<<   "b).F = BIL          " << endl;
    cout <<setw(80)<<   "c).F = m*c^2        " << endl;
    cout <<setw(80)<<   "d).F = 2*pi*r       " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'a':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q11()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "What is newton 3rd law of motion " << endl;
    cout <<setw(80)<<   "a).S = m*a" << endl;
    cout <<setw(80)<<   "b).r = m/q" << endl;
    cout <<setw(80)<<   "c).F = G*r" << endl;
    cout <<setw(80)<<   "d).F = m*a" << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'd':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q12()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "What is the value of x in the equation 2x + 9 =0 " << endl;
    cout <<setw(80)<<   "a).1/2 " << endl;
    cout <<setw(80)<<   "b).9/2 " << endl;
    cout <<setw(80)<<   "c).2/9 " << endl;
    cout <<setw(80)<<   "d).-9/2" << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
     
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'd':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q13()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "will be the mass of 10kg block on moon" << endl;
    cout <<setw(80)<<   "a).10kg  " << endl;
    cout <<setw(80)<<   "b).9kg   " << endl;
    cout <<setw(80)<<   "c).9.5kg " << endl;
    cout <<setw(80)<<   "d).9.99kg" << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;

    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'a':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q14()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Mass means" << endl;
    cout <<setw(80)<<   "a).Quantity of metal " << endl;
    cout <<setw(80)<<   "b).Quantity of matter" << endl;
    cout <<setw(80)<<   "c).m*a               " << endl;
    cout <<setw(80)<<   "d).a/f               " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;

    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x; 
    switch(x)
     {
        case 'b':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q15()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Covid 19 is   " << endl;
    cout <<setw(80)<<   "a).Virus     " << endl;
    cout <<setw(80)<<   "b).Bacteria  " << endl;
    cout <<setw(80)<<   "c).Living    " << endl;
    cout <<setw(80)<<   "d).Non living" << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
  
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'a':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q16()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Who are Ihle-Ketab mentioned in the holy Quran " << endl;
    cout <<setw(80)<<   "a).Muslims  " << endl;
    cout <<setw(80)<<   "b).Christans" << endl;
    cout <<setw(80)<<   "c).Hindus   " << endl;
    cout <<setw(80)<<   "d).jewess   " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
   
    cout << "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'd':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q17()
{
    char x = 0;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Heat is       " << endl;
    cout <<setw(80)<<   "a).Not energy" << endl;
    cout <<setw(80)<<   "b).Reaction  " << endl;
    cout <<setw(80)<<   "c).Energy    " << endl;
    cout <<setw(80)<<   "d).Force     " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;  
       
    cout << "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'c':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q18()
{
    char x = 0;
    
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "RAM is         " << endl;
    cout <<setw(80)<<   "a).Powe source" << endl;
    cout <<setw(80)<<   "b).Main memory" << endl;
    cout <<setw(80)<<   "c).Memory     " << endl;
    cout <<setw(80)<<   "d).Not memory " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'b':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q19()
{
    char x = 0;

    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "What is plastic   " << endl;
    cout <<setw(80)<<   "a).Semi Organic  " << endl;
    cout <<setw(80)<<   "b).Organic       " << endl;
    cout <<setw(80)<<   "c).In organic    " << endl;
    cout <<setw(80)<<   "d).semi In organic" << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'b':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q20()
{
    char x = 0;

    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "What is machine language " << endl;
    cout <<setw(80)<<   "a).Low level  " << endl;
    cout <<setw(80)<<   "b).High level " << endl;
    cout <<setw(80)<<   "c).Binary     " << endl;
    cout <<setw(80)<<   "d).Octal      " << endl; 
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;  
        
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'c':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q21()
{
    char x = 0;
  
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "300/1.5 is " << endl;
    cout <<setw(80)<<   "a).move" << endl;
    cout <<setw(80)<<   "b).150" << endl;
    cout <<setw(80)<<   "c).250" << endl;
    cout <<setw(80)<<   "d).200" << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
      
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x; 
    switch(x)
     {
        case 'd':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q22()
{
    char x = 0;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Building block of digital devices " << endl;
    cout <<setw(80)<<   "a).Transistor" << endl;
    cout <<setw(80)<<   "b).RAM       " << endl;
    cout <<setw(80)<<   "c).CPU       " << endl;
    cout <<setw(80)<<   "d).GPU       " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
  
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x; 
     switch(x) 
     {
        case 'a':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q23()
{
    char x = 0;
        
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Density of mercury" << endl;
    cout <<setw(80)<<   "a).5.8g/cm3 " << endl;
    cout <<setw(80)<<   "b).5.43g/cm3" << endl;
    cout <<setw(80)<<   "c).5.49g/cm3" << endl;
    cout <<setw(80)<<   "d).5.86g/cm3" << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80) << "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'b':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q24()
{
    char x = 0;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Temprature of Sun" << endl;
    cout <<setw(80)<<   "a).57790 K" << endl;
    cout <<setw(80)<<   "b).5775 K " << endl;
    cout <<setw(80)<<   "c).5778 K " << endl;
    cout <<setw(80)<<   "d).5587 K " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
        
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'c':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q25()
{
    char x = 0;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Distace of sun from earth " << endl;
    cout <<setw(80)<<   "a).147.1 km         " << endl;
    cout <<setw(80)<<   "b).147.1 trillion km" << endl;
    cout <<setw(80)<<   "c).147.1 billion km " << endl;
    cout <<setw(80)<<   "d).147.1 million km " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'd':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q26()
{
    char x = 0;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "What is best way of life " << endl;
    cout <<setw(80)<<   "a).Islam        " << endl;
    cout <<setw(80)<<   "b).Communism    " << endl;
    cout <<setw(80)<<   "c).Etheism      " << endl;
    cout <<setw(80)<<   "d).Christianity " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'a':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q27()
{
    char x = 0;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Population of Islam" << endl;
    cout <<setw(80)<<   "a).2 billion   " << endl;
    cout <<setw(80)<<   "b).1.9 billion " << endl;
    cout <<setw(80)<<   "c).3 billion   " << endl;
    cout <<setw(80)<<   "d).1.86 billion" << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'b':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q28()
{
    char x = 0;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Population of pakistan" << endl;
    cout <<setw(80)<<   "a).230 million   " << endl;
    cout <<setw(80)<<   "b).240 million   " << endl;
    cout <<setw(80)<<   "c).220.9 million " << endl;
    cout <<setw(80)<<   "d).220.8 million " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;

    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'c':
        return 'T';
        break;
        default:
        return 'F';
    }
}

char q29()
{
    char x = 0;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    cout << endl;
    cout << setw(80) << "Building block of Matter " << endl;
    cout <<setw(80)<<   "a).Atom    " << endl;
    cout <<setw(80)<<   "b).Molecule" << endl;
    cout <<setw(80)<<   "c).Proton  " << endl;
    cout <<setw(80)<<   "d).Neutron " << endl;
    cout << endl;
    cout << setw(move) << "<<<&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&>>>" << endl;
    
    cout <<setw(80)<< "Enter one of the above options " << endl;
    cin >> x;
    switch(x)
    {
        case 'a':
        return 'T';
        break;
        default:
        return 'F';
    }
}

// This funnction call questions according to the parameter
char call(int  select2)
{
    char ret=0;
    cout << endl;
    if(select2 == 1) 
    ret = q1(); 
     else if(select2 == 2)
     ret = q2();
     else if(select2 == 3)
     ret = q3();
     else if(select2 == 4)
     ret = q4();
     else if(select2 == 5)  
     ret = q5();
     else if(select2 == 6)
     ret = q6();
     else if(select2 == 7)
     ret = q7();
     else if(select2 == 8)
     ret = q8();
     else if(select2 == 9)
     ret = q9();
     else if(select2 == 10)
     ret = q10();
     else if(select2 == 11)
     ret = q11();
     else if(select2 == 12)
     ret = q12();
     else if(select2 == 13)
     ret = q13();
     else if(select2 == 14)
     ret = q14();
     else if(select2 == 15)
     ret = q15();
     else if(select2 == 16)
     ret = q16();
     else if(select2 == 17)
     ret = q17();
     else if(select2 == 18)
     ret = q18();
     else if(select2 == 19)
     ret = q19();
     else if(select2 == 20)
     ret = q20();
     else if(select2 == 21)
     ret = q21();
     else if(select2 == 22)
     ret = q22();
     else if(select2 == 23)
     ret = q23();    
     else if(select2 == 24)
     ret = q24();
     else if(select2 == 25)
     ret = q25();
     else if(select2 == 26)
     ret = q26();
     else if(select2 == 27)
     ret = q27();
     else if(select2 == 28)
     ret = q28();
     else if(select2 == 29)
     ret = q29();
     cout << endl;

         
   return ret;
    
}

// win function
void win(char arr3[][3],int position,int position2,int counter,int arr2[][3])
{
    char re_play;
    cout << "<<******YOU WIN!********>>" << endl;
    cout << endl;
    cout << "Press y to play again or e to exit " << endl;
    cin >> re_play;

    for(int i=0;i<15;i++)
    {
        overwrite[i] = 0;
    }
    if(re_play == 'y')
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                arr3[i][j] = 0;
            }
        }
        pass_value(arr3,position,position2,counter, arr2);
    }
    
    if(re_play == 'e')
    exit(0);
    
}
// loose function
void lose(char arr3[][3],int position,int position2,int counter,int arr2[][3])
{
    char re_play;
    cout << "<<<YOU LOSE>>>" << endl;
    cout << "Press y to play again or e to exit " << endl;
    cin >> re_play;

    for(int i=0;i<15;i++)
    {
        overwrite[i] = 0;
    }


    if(re_play == 'y')
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                arr3[i][j] = 0;
            }
        }
        Sleep(1000);
        pass_value(arr3,position,position2,counter, arr2);
    }
    if(re_play == 'e')
    exit(0);
}

// checking winning conditions 
int conditions(char arr3[][3],int position,int position2,int counter,int arr2[][3])
{
    // Winning conditions 
    if(arr3[0][0] =='T' && arr3[0][1]=='T' && arr3[0][2]=='T')
    win(arr3,position,position2,counter, arr2);
    else if(arr3[0][0] =='T' && arr3[1][1] == 'T'&& arr3[2][2] =='T')
    win(arr3,position,position2,counter, arr2);
    else if(arr3[0][0] =='T' && arr3[1][0] == 'T'&& arr3[2][0] =='T')
    win(arr3,position,position2,counter, arr2);
    else if(arr3[0][1] =='T' && arr3[1][1] == 'T'&& arr3[2][1] =='T')
    win(arr3,position,position2,counter, arr2);
    else if(arr3[0][2] =='T' && arr3[1][1] == 'T'&& arr3[2][0] =='T')
    win(arr3,position,position2,counter, arr2);
    else if(arr3[0][2] =='T' && arr3[1][2] == 'T'&& arr3[2][2] =='T')
    win(arr3,position,position2,counter, arr2);
    else if(arr3[1][0] =='T' && arr3[1][1] == 'T'&& arr3[1][2] =='T')
    win(arr3,position,position2,counter, arr2);
    else if(arr3[2][0] =='T' && arr3[2][1] == 'T'&& arr3[2][2] =='T')
    win(arr3,position,position2,counter, arr2);
 


    if(arr3[0][0] =='F' && arr3[0][1]=='F' && arr3[0][2]=='F')
    lose(arr3,position,position2,counter, arr2);
    else if(arr3[0][0] =='F' && arr3[1][1] == 'F'&& arr3[2][2] =='F')
    lose(arr3,position,position2,counter, arr2);
    else if(arr3[0][0] =='F' && arr3[1][0] == 'F'&& arr3[2][0] =='F')
    lose(arr3,position,position2,counter, arr2);
    else if(arr3[0][1] =='F' && arr3[1][1] == 'F'&& arr3[2][1] =='F')
    lose(arr3,position,position2,counter, arr2);
    else if(arr3[0][2] =='F' && arr3[1][1] == 'F'&& arr3[2][0] =='F')
    lose(arr3,position,position2,counter, arr2);
    else if(arr3[0][2] =='F' && arr3[1][2] == 'F'&& arr3[2][2] =='F')
    lose(arr3,position,position2,counter, arr2);
    else if(arr3[1][0] =='F' && arr3[1][1] == 'F'&& arr3[1][2] =='F')
    lose(arr3,position,position2,counter, arr2);
    else if(arr3[2][0] =='F' && arr3[2][1] == 'F'&& arr3[2][2] =='F')
    lose(arr3,position,position2,counter, arr2);

    // If all the 9 boxes are full 
   else
   {
       if(arr3[0][0]>0 && arr3[0][1]>0 && arr3[0][2]>0 && arr3[1][0]>0 && arr3[1][1]>0 && arr3[1][2]>0 && arr3[2][0]>0 && arr3[2][1]>0 && arr3[2][2]>0)
       {
           lose(arr3,position,position2,counter, arr2);
       }     
   }   

}


// Grid function
int Grid(char arr3[][3])
{
    char arr1[40][40] = {0};
    int push =50;
    // These two loops store the grid in in the arr1 of size 40x40
    for(int i=0;i<25;i++)
    {
        for(int j=0;j<39;j++)
        {
            
            if(i==7 || i==8 || i==15 || i==16)
             {
        
                 arr1[i][j] = '_';
             }
            else
             {
                 arr1[i][j] = ' ';
             }
             
            if(j==11||j==12||j==13 || j==24||j==25||j==26) 
               {
                   if(j==11)
                   arr1[i][j] = '|';
                   if(j==12)
                   arr1[i][j] = '*';
                   if(j==13)
                   arr1[i][j] = '|';
                   if(j==24)
                   arr1[i][j] = '|';
                   if(j==25)
                   arr1[i][j] = '*';
                   if(j==26)
                   arr1[i][j] = '|';

               }
        }  
    }
    // These conditions stores True or false  on the appropriate location  of the Grid  
    if(arr3[0][0] == 'T')
    arr1[4][5] = 'T';
    else if(arr3[0][0]=='F')
    arr1[4][5] = 'F';

    if(arr3[0][1] == 'T')
    arr1[4][19] = 'T';
    else if(arr3[0][1]=='F')
    arr1[4][19] = 'F';

    if(arr3[0][2] == 'T')
    arr1[4][33] = 'T';
    else if(arr3[0][2]=='F')
    arr1[4][33] = 'F';

    if(arr3[1][0] == 'T')
    arr1[12][5] = 'T';
    else if(arr3[1][0]=='F')
    arr1[12][5] = 'F';

    if(arr3[1][1] == 'T')
    arr1[12][18] = 'T';
    else if(arr3[1][1]=='F')
    arr1[12][18] = 'F';

    if(arr3[1][2] == 'T')
    arr1[12][33] = 'T';
    else if(arr3[1][2]=='F')
    arr1[12][33] = 'F';

    if(arr3[2][0] == 'T')
    arr1[20][5] = 'T';
    else if(arr3[2][0]=='F')
    arr1[20][5] = 'F';

    if(arr3[2][1] == 'T')
    arr1[20][19] = 'T';
    else if(arr3[2][1]=='F')
    arr1[20][19] = 'F';

    if(arr3[2][2] == 'T')
    arr1[20][33] = 'T';
    else if(arr3[2][2]=='F')
    arr1[20][33] = 'F';

   // Showing 1 2 3 ... 9 on grid
    arr1[0][9]  ='1';
    arr1[0][22] ='2'; 
    arr1[0][36] ='3'; 


    arr1[9][9]  ='4'; 
    arr1[9][22] ='5'; 
    arr1[9][36] ='6'; 

    arr1[17][9]  ='7'; 
    arr1[17][22] ='8'; 
    arr1[17][36] ='9'; 
   // These loops Print the Grid
    for(int i=0;i<25;i++)
    {
        cout << setw(push);
        for(int j=0;j<40;j++)
        {
           cout << arr1[i][j];
        }
        cout << endl;
    }
}
// showing error 
void Error_Message(char arr3[][3],int position,int position2,int counter,int arr2[][3])
{
    cout << "<<<This box is already selected>>>" << endl;
    Sleep(1500);
    pass_value(arr3,position,position2,counter, arr2);
}


// This function clear screen, call condition function, call Grid function, call Error message function 
int pass_value(char arr3[][3],int position,int position2,int counter,int arr2[][3])
{
    int arr4[9] ={0},counter1=0,counter2=1,veriable=1 ,veriable2=1;
    char ret;
        
    // storing random 9 values in the range of 29 values
     srand(time(0));
     for(int i=0;i<9;i++)
     {
         arr4[i] = rand()%28+1;
     }


    // These loops avoid repition of questions
    for(int i=0;i<9;i++)
    {
        for(int j=counter2;j<9;j++)
        {
             if(arr4[i] == arr4[j])
             {
                   if(arr4[i]<29)
                   arr4[i]++;
                   else
                   arr4[i]--;

             }
             
                
        }
        counter2++;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr2[i][j] = arr4[counter1];
            counter1++;
        }
    }
    


    


    // this loop clear screen for every new question and check conditions 9 times 
    while(1)
    {
        system("CLS");
        Grid(arr3);
        conditions(arr3,position,position2,counter, arr2);
        cout << endl  << setw(85) << "<<<Select one of the Grid box((1 to 9)>>>";
        cin >> position;
        cout << endl;
        
        
        

        // If any location of the Grid contain true or false this loop and condition will pointout 
        for(int i=0;i<20;i++)
        {
            if(overwrite[i] == position)
            {
                
               Error_Message(arr3,position,position2,counter, arr2);
               continue;
            }  
        }

        overwrite[counter] = position;
       
   

        // This conditions stores the number of function to be call 
        if(position == 1)
        position2 = arr2[0][0];

        else if(position == 2)
        position2 = arr2[0][1];

        else if(position == 3)
        position2 = arr2[0][2];

        else if(position == 4)
        position2 = arr2[1][0];

        else if(position == 5)
        position2 = arr2[1][1];

        else if(position == 6)
        position2 = arr2[1][2];

        else if(position == 7)
        position2 = arr2[2][0];

        else if(position == 8)
        position2 = arr2[2][1];

        else if(position == 9)
        position2 = arr2[2][2];
        cout << endl<<    endl;
       ret = call(position2);
       counter ++;
       
       // These conditions stores T or F in the appropriate position
       if(position == 1)
       arr3[0][0] = ret;
       else if(position==2)
       arr3[0][1] = ret;
       else if(position==3)
       arr3[0][2] = ret;
       else if(position==4)
       arr3[1][0] = ret;
       else if(position==5)
       arr3[1][1] = ret;
       else if(position==6)
       arr3[1][2] = ret;
       else if(position==7)
       arr3[2][0] = ret;
       else if(position==8)
       arr3[2][1] = ret;
       else if(position==9)
       arr3[2][2] = ret;

    }
    

}
