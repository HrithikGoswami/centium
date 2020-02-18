# include<iostream.h>
#include<conio.h>
class Complex
{
    int real,image;
    public:
    Complex()
    {
    }                         //Default Constructor.
    Complex(int r)           // Parameterised constructor for equal values.
    {
	real=r;
	image=r;
    }
    Complex(int r,int i)     // Parameterised constructor for different values.
    {
	real=r;
	image=i;
    }
    Complex(Complex &c)       //Copy Constructor.
    {
	real=c.real;
	image=c.image;
    }
    void displaysum()
    {
	cout<<"The sum of two complex nos. is:"<<real<<"+"<<image<<"i";
    }
    friend Complex sum(Complex,Complex);     //Declaration of friend function.
};

Complex sum(Complex o1,Complex o2)
{
    Complex o3;
    o3.real=o1.real+o2.real;
    o3.image=o1.image+o2.image;
    return o3;
}

void main()
{
    clrscr();
    int a,b,c;
    Complex c1;                      //Calling default constructor.
    cout<<"For equal values:";
    cout<<"\nEnter the real and imaginary part of number 1:";
    cin>>a>>a;
    Complex c2(a);                //Calling parameterised constructor for equal values.
    cout<<"For different values:";
    cout<<"\nEnter the real and imaginary part of number 2:";
    cin>>b>>c;
    Complex c3(b,c);                       //Calling parameterised constructor for different values.
    Complex c4=sum(c2,c3);          //Calling copy constructor.
    c4.displaysum();
    getch();
}