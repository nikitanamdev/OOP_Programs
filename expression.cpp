#include<iostream>
#include<conio.h>
#include<math.h>
#define e 2.71828
using namespace std;

class Work
{ float x,result;
  public: 
         void get_data(float y)
         { x=y;
		 }
		 void Do()
		 { 
		   result=2-(x*pow(e,2*x)) + pow(4,x);  
		 }
		 void Display()
		 { 
		   cout<<"\nThe result of the given expression(2-xe^2x +4x) is-\t"<<result;
		 }
};

int main()
{  float y;
   cout<<"\nEnter the value u want to insert in expression 2-xe^2x+4x-\t";
   cin>>y;
   Work w;
   w.get_data(y);
   w.Do();
   w.Display();
   return 0;
}
