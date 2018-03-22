//implementing user defined manipulator

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

ostream & paisa(ostream & out)
{ 
  out<<"Rs. ";
  return out; 
}

ostream & form(ostream & out)
{ 
  out.setf(ios::showpoint);
  
  out.precision(2);
  out<<setiosflags(ios::fixed);
  
  return out;
  
}

int main()
{  
  cout<<paisa<<form<<586.8;
  
  return 0;
}
