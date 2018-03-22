#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Grandparent
{  char name[20];
   
   public:
   	     void get_name(char *s)
   	     { strcpy(name,s);
   	       
		 }
		 void put_name()
		 { cout<<"\nGrandparent's name:\t";
		   puts(name);
		   cout<<"\n";
		 }
};

class Parent1: virtual public Grandparent
{  char sex;
   public: void Enter(char s)
            { sex=s;
			}
			void Show()
			{ cout<<"\nTheir Gender:\t";
			  cout<<sex;
			  cout<<endl;
			}
  
};

class Parent2: public virtual Grandparent
{  int age;
   public: void get_age(int a)
           { age=a;
			} 
			void put_age()
			{ cout<<"\nTheir age:\t";
			  cout<<age;
			  cout<<endl;
			}
};

class child: public Parent1,public Parent2
{  char Cname[20];
   public: void get_value(char *i)
           {  
		     strcpy(Cname,i);             
		   }
		   void put_value()
		   { cout<<"\nThe name you have entered is:\t";
		     puts(Cname);
		     cout<<endl;
		   }
};

int main()
{ child C1;
  char s[20],c[20],G;
  int a; 
  cout<<"\nEnter your name:\t";
  gets(c);
  cout<<"\nEnter your GrandParent name:\t";
  gets(s);
  cout<<"\nEnter their age:\t";
  cin>>a;
  cout<<"\nEnter their gender(F/M)\t";
  cin>>G;
  C1.get_value(c);
  C1.get_name(s);
  C1.get_age(a);
  C1.Enter(G);
  C1.put_value();
  C1.put_name();
  C1.put_age();
  C1.Show();
  
  return 0;
}
