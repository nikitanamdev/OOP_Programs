#include<iostream>
#include<conio.h>

using namespace std;

class shape
{ public: virtual void area()=0;
          virtual void perimeter()=0; 
          virtual void Display()=0;
};

class triangle: public shape
{ int base,height,side;
  int result1,result2;
  public : void get_data1(int b,int h,int s)
           {  base=b;
              height=h;
              side=s;
		   }
           void area()
           { result1=0.5*base*height;
		   }
		   void perimeter()
		   { result2=3*side;
		   }
		   void Display()
		   { cout<<"\nThe area of the triangle is:\t"<<result1;
		     cout<<"\nThe perimeter of the triangle is:\t"<<result2;
		   
		   }
   
};

class square:public shape
{ int side,result1,result2;
  public: void get_data2(int s)
          { side=s;
		  }
          void area()
          { result1=side*side;
		  }
		  void perimeter()
		  { result2=4*side;
		  }
		  void Display()
		  { cout<<"\nThe area of the square:\t"<<result1;
		    cout<<"\nThe perimeter of the square:\t"<<result2;
		  }
};

class rectangle:public shape
{ int length,breadth,result1,result2;
  public: void get_data3(int l,int h)
          { length=l;
            breadth=h;
		   } 
		   void area()
		   { result1=length*breadth;
		   }
		   void perimeter()
		   { result2=2*(length+breadth);
		   
		   }
		   void Display()
		   { cout<<"\nThe area of the rectangle is:\t"<<result1;
		     cout<<"\nThe perimeter of the rectangle is:\t"<<result2;
		   }
};

class circle: public shape
{ int radius,result1,result2;
  public: void get_data4(int r) 
           { radius=r;
           
			}
			void area()
			{ result1=3.14*radius*radius;
			 } 
			 void perimeter()
			 { result2=2*3.14*radius;
			 }
			 void Display()
			 { cout<<"\nThe area of the circle is:\t"<<result1;
			   cout<<"\nThe perimeter of the circle is:\t"<<result2;
			 }
			 
};

int main()
{ shape *s;
  triangle t;
  square S;
  circle c;
  rectangle r;
  int br,len,h,side,rad,B;
  int ch;
  char x;
  do{
  cout<<"\nEnter 1 for getting the result of triangle.";
  cout<<"\nEnter 2 for getting the result of square.";
  cout<<"\nEnter 3 for getting the result of rectangle.";
  cout<<"\nEnter 4 for getting the result of circle.";
  cout<<"\nEnter your choice.";
  cin>>ch;
  if(ch==1)
  {
  s=&t;
  cout<<"\nEnter the base for the triangle:\t";
  cin>>B;
  cout<<"\nEnter the height for the triangle:\t";
  cin>>h;
  cout<<"\nEnter the side for the triangle:\t";
  cin>>side;
  t.get_data1(B,h,side);
  s->area();
  s->perimeter();
  s->Display();
  }
  else if(ch==2)
  { s=&S;
    cout<<"\nEnter the side for the square:\t";
    cin>>side;
    S.get_data2(side);
    s->area();
    s->perimeter();
    s->Display();
  }
  else if(ch==3)
  { s=&r;
    cout<<"\nEnter the length for the rectangle:\t";
    cin>>len;
    cout<<"\nEnter the breadth for the rectangle:\t";
    cin>>br;
    r.get_data3(len,br);
    s->area();
    s->perimeter();
    s->Display();
    
  }
  else if(ch==4)
  { s=&c;
    cout<<"\nEnter the radius for the circle:\t";
    cin>>rad;
    c.get_data4(rad);
    s->area();
    s->perimeter();
    s->Display();
    
  }
  else
  cout<<"\nYou have entered wrong choice!!";
  cout<<"\nDo you want to add more operations on shapes?(y/n)";
  cin>>x;
}while(x=='y'||x=='Y');
 return 0;
}

