//reading and writing in the text file

#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<string.h>
using namespace std;

class Book
{ 
  char Name[50];
  float price;
  public: void get_data()
          { 
            cout<<"\nEnter the name of the Book:\t";
            gets(Name);
            cout<<"\nEnter the price of the Book:\t";
            cin>>price;
            
		  }
		  void print_data()
		  { 
		    cout<<"\nName\t\t"<<"Price\n";
		    puts(Name);
		    cout<<setw(13)<<price;
		  }
};

int main()
{ 
  Book B[3];
  char ch;
  fstream file;
  
  file.open("Book.Dat",ios::in|ios::out);
  cout<<"\nEnter details of three books:\t";
  for(int i=0;i<3;i++)
  { 
    B[i].get_data();
    cin.get(ch);
    file.write((char *)&B[i],sizeof(B[i]));
  }
  
  file.seekg(0);
  cout<<"\nOutput\t";
  for(int i=0;i<3;i++)
  { 
   file.read((char *) &B[i],sizeof(B[i]));
   B[i].print_data();
  }
  file.close();
  return 0;
}
