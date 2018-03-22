//implement runtime polymorphism using using virtual functions

#include<iostream>
#include<conio.h>

using namespace std;

class Base
{ public: virtual void Display()
          { 
            cout<<"\nDisplay of Base!";
            
		  }
		  virtual void Show()
		  { 
		    cout<<"\nShow of Base!";
		  }
};

class Derived : public Base
{  
  public: void Display()
          {  
		     cout<<"\nDisplay of Derived!";
		  }
		  void Show()
		  { 
		     cout<<"\nShow of Derived!";
		  }
};

int main()
{  
  Base *b,b1;
  Derived d;
  cout<<"\nBase pointer object is pointing to base class.";
  b=&b1;
  b->Display();
  b->Show();
  cout<<"\nNow Base pointer object is pointing to derived class";
  b=&d;
  b->Display();
  b->Show();
  
  return 0;
}
