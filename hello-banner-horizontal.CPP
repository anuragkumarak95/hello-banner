/*this project is a prototype of the banner function of unix terminal.
this code uses chart.txt as its file database and works on single word
and only alphabetic characters. thank you.*/

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>

ifstream file("chart.TXT",ios::nocreate);//connecting the database file.
void main(){
clrscr();
char str[10]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int c=0;
cout<<endl<<"Enter the word that you want to convert to banner. :\n"
    <<"[only single word and alphabets only to be inputed.]::";
cin>>str;
for(int i=0;i<7;i++)//loop for each line of all characters.
{ for(int j=0;j<10;j++)//loop for ech characters.
  { if(str[j]!=' '){c=0;
    switch(str[j])//switch for the alphabetic initial line count in the database.
    { case 'a':
      case 'A':c=0;
      break;

      case 'b':
      case 'B':c=7;
      break;

      case 'c':
      case 'C':c=14;

      break;
      case 'd':
      case 'D':c=21;

      break;
      case 'e':
      case 'E':c=28;

      break;
      case 'f':
      case 'F':c=35;

      break;
      case 'g':
      case 'G':c=42;

      break;
      case 'h':
      case 'H':c=49;

      break;
      case 'i':
      case 'I':c=56;

      break;
      case 'j':
      case 'J':c=63;

      break;
      case 'k':
      case 'K':c=70;

      break;
      case 'l':
      case 'L':c=77;

      break;
      case 'm':
      case 'M':c=84;

      break;
      case 'n':
      case 'N':c=91;

      break;
      case 'o':
      case 'O':c=98;

      break;
      case 'p':
      case 'P':c=105;

      break;
      case 'q':
      case 'Q':c=112;

      break;
      case 'r':
      case 'R':c=119;

      break;
      case 's':
      case 'S':c=126;

      break;
      case 't':
      case 'T':c=133;

      break;
      case 'u':
      case 'U':c=140;

      break;
      case 'v':
      case 'V':c=147;

      break;
      case 'w':
      case 'W':c=154;

      break;
      case 'x':
      case 'X':c=161;

      break;
      case 'y':
      case 'Y':c=168;

      break;
      case 'z':
      case 'Z':c=175;

      break;

      default: ;//cout<<"wrong character;";
    }//swutch end.

    int n=i+c+1;
    char line[20];
    file.seekg(0,ios::beg);
    for(int f=0;f<n;f++){file.getline(line,20);} //displaying the text line by line for each characters.
    cout<<" "<<line<<" ";
    }//if statement end
  }
cout<<endl;//enter between the lines.
}


// asking user to try the code again.
char ch=' ';
cout<<endl<<endl<<"Wanna try again?[y/n] ";
cin>>ch;
if(ch=='y'||ch=='Y'){main();}
else{exit(0);}

getch();
}
