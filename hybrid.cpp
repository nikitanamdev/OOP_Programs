//program to implement hybrid inheritance

#include<iostream>
#include<conio.h>

using namespace std;

class student
{ protected: int rollno;
  public: 
     void get_number(int a)
     { rollno=a;
	 }
	 void put_number()
	 { cout<<"Roll no. is:\t";
	   cout<<rollno;
	 }
};

class test: public student
{ protected: float part1,part2;
  public: void get_marks(float x,float y)
          { part1=x;
            part2=y;
		  }
		  void put_marks()
		  { cout<<"\nMarks obtained: \n"<<"Part1= "<<part1<<"\nPart2= "<<part2<<endl;
		  }
};

class sports
{ protected : float score;
  public :
  	      void get_score(float s)
  	      { score=s;
			}
			
		  void put_score()
		  { cout<<"\nSports wt: "<<score<<"\n\n";
			  }	
};

class result:public test,public sports
{ float total;
  public : void display()
           {  total=part1+part2+score;
              put_number();
			  put_marks();
			  put_score();
			  
			  cout<<" Total Score: "<<total<<endl;
			   
		   }
};

int main()
{ result student_1;
  student_1.get_number(1234);
   student_1.get_marks(27.5,33.0);
   student_1.get_score(6.0);
   student_1.display();
   
   return 0;
}
