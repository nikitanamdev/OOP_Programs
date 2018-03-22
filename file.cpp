#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iomanip>
using namespace std;

int count1=0,count2=0,count3=0; 
class A
{ char a[50];
  int len; 
  public:  void get_data(char *s)
           { len=strlen(s);
             strcpy(a,s);
             
		   }
		   void B();
		   void Show();
};

void A::B()
{  
  for(int i=0;i<len;i++)
  { if(a[i]=='.')
    { count1++;
      
	}
	else if(a[i]!=' ')
	   count2++;
	
	else
	count3++;
  }
}

void A::Show()
{ 
  cout<<"\nNo. of lines\t"<<"No. of words\t"<<"No. of characters";
  cout<<endl;
  cout<<setw(6)<<count1<<setw(13)<<count2<<setw(18)<<count1+count2+count3;
}

int main()
{ char string[50];
  cout<<"\nEnter the string :\t";
  gets(string);
  A a1;
  a1.get_data(string);
  a1.B();
  a1.Show();
  
  return 0;
  
}
