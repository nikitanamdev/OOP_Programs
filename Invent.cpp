#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>

using namespace std;

class Inventory
{ 
  char Name[50];
  int code;
  float cost;
  public: void readdata();
          void writedata();
          
};

void Inventory::readdata()
{ 
  cout<<"\nEnter Name:\t";
  cin>>Name;
  cout<<"\nEnter code:\t";
  cin>>code;
  cout<<"\nEnter cost:\t";
  cin>>cost;
  
}

void Inventory::writedata()
{
  cout<<"\nName\t\tPrice\t\tCode\n";
  cout<<Name<<setw(13)<<cost<<setw(20)<<code;
  	 
}

int main()
{
	Inventory I[10];
	fstream file;
	file.open("Inventory.dat",ios::in|ios::out);
	cout<<"\nFor how many items you want to enter the details:\t";
	int c;
	char ch;
	cin>>c;
	cout<<"\nEnter the details then:\t";
	for(int i=0;i<c;i++)
	{ 
	 I[i].readdata();
	 cin.get(ch);
	 file.write((char *)&I[i],sizeof(I[i]));
	}
	
	file.seekg(0);
	cout<<"\nThe details you have entered:\t";
	for(int i=0;i<c;i++)
	{ 
	  file.read((char *)&I[i],sizeof(I[i]));
	  I[i].writedata();
	}
	file.close();
	
	return 0;
}
