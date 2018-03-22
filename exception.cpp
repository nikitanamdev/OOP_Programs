//implementing exception handling

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{ int x,y,result;
  char ch;
  
  do
  {
  	cout<<"\nEnter the values for performing division-\t";
    cin>>x>>y;
   try
   { if(y==0)
     throw y;
    else
	{ result=x/y;
	  cout<<"\nDivision of the numbers-"<<result;
	 } 
  }
  catch(int i)
  { 
   cout<<"\nCaught an exception.";
  }
  cout<<"\nDo you want to perform again??(y/n)";
  cin>>ch;
}while(ch=='y'||ch=='Y');

  return 0;
}
