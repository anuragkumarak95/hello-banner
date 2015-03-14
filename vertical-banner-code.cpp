/*This code generates a banner from the provided string just like the banner created by the unix terminal.*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void banner(char);

void main()
{ clrscr();

  char str[50]; //initiallising the string array.
  cout<<endl<<"Enter the string: ";
  cin>>str; //asking user to enter the string they want to convert to a banner.

  for(int i=0;i<50;i++)
  { banner(str[i]); //producing the banner for individual characters of the string that user entered.
  }

  char ch=' '; //asking the user if they wanna try the code again.
  cout<<endl<<"Wanna try again? [y/n]::";
  cin>>ch;
  if(ch=='y'||ch=='Y'){main();}
  else if(ch=='n'||ch=='Y'){exit(1);}
  getch();
}

// function that generates the banner.
void banner(char c)
{ switch(c)
  { case 'a':
    case 'A':cout<<endl<<"";
    break;

    case 'b':
    case 'B':cout<<endl<<"";
    break;

    case 'c':
    case 'C':cout<<endl<<"";
    break;

    case 'd':
    case 'D':cout<<endl<<"";
    break;

    case 'e':
    case 'E':cout<<endl<<"";
    break;

    case 'f':
    case 'F':cout<<endl<<"";
    break;

    case 'g':
    case 'G':cout<<endl<<"";
    break;

    case 'h':
    case 'H':cout<<endl<<"";
    break;

    case 'i':
    case 'I':cout<<endl<<"";
    break;

    case 'j':
    case 'J':cout<<endl<<"";
    break;

    case 'k':
    case 'K':cout<<endl<<"";
    break;

    case 'l':
    case 'L':cout<<endl<<"";
    break;

    case 'm':
    case 'M':cout<<endl<<"";
    break;

    case 'n':
    case 'N':cout<<endl<<"";
    break;

    case 'o':
    case 'O':cout<<endl<<"";
    break;

    case 'p':
    case 'P':cout<<endl<<"";
    break;

    case 'q':
    case 'Q':cout<<endl<<"";
    break;

    case 'r':
    case 'R':cout<<endl<<"";
    break;

    case 'S':
    case 's':cout<<endl<<"";
    break;

    case 't':
    case 'T':cout<<endl<<"";
    break;

    case 'u':
    case 'U':cout<<endl<<"";
    break;

    case 'v':
    case 'V':cout<<endl<<"";
    break;

    case 'w':
    case 'W':cout<<endl<<"";
    break;

    case 'x':
    case 'X':cout<<endl<<"";
    break;

    case 'y':
    case 'Y':cout<<endl<<"";
    break;

    case 'z':
    case 'Z':cout<<endl<<"";
    break;

    default: ;//cout<<endl<<"not a valid string for the banner.";
	     //cout<<endl<<"press enter to reset:";getch();

  }
}
