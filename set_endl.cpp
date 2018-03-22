//implementation of setw() and endl

#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

class Work
{ float x;
  public: void get_data(float y)
          { x=y;
		   } 
		   void Display(int w)
		   {
		   	 cout<<"\nThe precision is set to w.";
		   	 cout<<setfill('_')<<setw(w)<<x;
		   }
};
int main()
{ Work W;
  float a;
  int w;
  cout<<"Enter the value you to display in modified form.\t";
  cin>>a;
  W.get_data(a);
  cout<<endl;
  cout<<"Enter the width you want to set.\t";
  cin>>w;
  W.Display(w);
  
  return 0; 
  
}
