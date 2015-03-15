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
    case 'A':cout<<endl<<"--/\\--\n-/--\\-\n|----|\n|____|\n|----|\n|----|\n|----|";
    break;

    case 'b':
    case 'B':cout<<endl<<"-_____-\n|-----\\\n|-----|\n|_____/\n|-----\\\n|-----|\n|_____/";
    break;

    case 'c':
    case 'C':cout<<endl<<"-_____\n|-----\n|-----\n|-----\n|-----\n|-----\n|_____";
    break;

    case 'd':
    case 'D':cout<<endl<<"-_____-\n|-----\\\n|-----|\n|-----|\n|-----|\n|-----|\n|_____/";
    break;

    case 'e':
    case 'E':cout<<endl<<"-_____\n|-----\n|-----\n|__---\n|-----\n|-----\n|_____";
    break;

    case 'f':
    case 'F':cout<<endl<<"-_____\n|-----\n|-----\n|__---\n|-----\n|-----\n|-----";
    break;

    case 'g':
    case 'G':cout<<endl<<"-____-\n/----\\\n|-----\n|--__-\n|----\\\n|----|\n\\____/";
    break;

    case 'h':
    case 'H':cout<<endl<<"|----|\n|----|\n|____|\n|----|\n|----|\n|----|";
    break;

    case 'i':
    case 'I':cout<<endl<<"---|--\n---|--\n---|--\n---|--\n---|--\n---|--\n---|--";
    break;

    case 'j':
    case 'J':cout<<endl<<"---|--\n---|--\n---|--\n---|--\n---|--\n---|--\n\\__|--";
    break;

    case 'k':
    case 'K':cout<<endl<<"|----/\n|---/-\n|--/--\n|-/---\n|--\\--\n|---\\-\n|----\\";
    break;

    case 'l':
    case 'L':cout<<endl<<"|-----\n|-----\n|-----\n|-----\n|-----\n|-----\n|_____";
    break;

    case 'm':
    case 'M':cout<<endl<<"-/\\-/\\-\n|--|--|\n|--|--|\n|--|--|\n|-----|\n|-----|\n|-----|";
    break;

    case 'n':
    case 'N':cout<<endl<<"|\\---|\n|-\\--|\n|--\\-|\n|---\\|\n|----|\n|----|\n|----|";
    break;

    case 'o':
    case 'O':cout<<endl<<"-____-\n|----|\n|----|\n|----|\n|----|\n|----|\n|____|";
    break;

    case 'p':
    case 'P':cout<<endl<<"-____-\n|----|\n|----|\n|____|\n|-----\n|-----\n|-----";
    break;

    case 'q':
    case 'Q':cout<<endl<<"-____-\n|----|\n|----|\n|----|\n|----|\n|---\\|\n|____\\";
    break;

    case 'r':
    case 'R':cout<<endl<<"-____-\n|----|\n|----|\n|____|\n|-\\---\n|--\\--\n|---\\-";
    break;

    case 'S':
    case 's':cout<<endl<<"-____-\n|----|\n|-----\n|____-\n-----|\n-----|\n|____|";
    break;

    case 't':
    case 'T':cout<<endl<<"_____\n--|--\n--|--\n--|--\n--|--\n--|--\n--|--";
    break;

    case 'u':
    case 'U':cout<<endl<<"|----|\n|----|\n|----|\n|----|\n|----|\n|----|\n|____|";
    break;

    case 'v':
    case 'V':cout<<endl<<"|----|\n|----|\n|----|\n|----|\n|----|\n-\\--/-\n--\\/--";
    break;

    case 'w':
    case 'W':cout<<endl<<"|-----|\n|-----|\n|-----|\n|--|--|\n|--|--|\n|--|--|\n-\\/-\\/-";
    break;

    case 'x':
    case 'X':cout<<endl<<"\\-----/\n-\\---/-\n--\\-/--\n---\\---\n--/-\\--\n-/---\\-\n/-----\\";
    break;

    case 'y':
    case 'Y':cout<<endl<<"\\-----/\n-\\---/-\n--\\-/--\n---|---\n---|---\n---|---\n---|---";
    break;

    case 'z':
    case 'Z':cout<<endl<<"_______\n------|\n-----/-\n----/--\n---/---\n--/----\n-/-----\n|______";
    break;

    default: ;//cout<<endl<<"not a valid string for the banner.";
	     //cout<<endl<<"press enter to reset:";getch();
    break;
  }
}
