//usage of namespace

#include<iostream>
#include<conio.h>

using namespace std;

namespace first_space{ 
       void func()
       { 
         cout<<"\nInside first space.";
	   }
}

namespace second_space{
	   void func()
	   {
	   	 cout<<"\nInside second space.";
	   }
}

int main()
{ 
   first_space::func(); //calls the first_space func
   
   second_space::func(); //calls the second_space function
    
   return 0; 
}
