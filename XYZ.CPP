#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
class string
{
    private:
	char str[30];
    public:
	void get_string()
	{
	    cin>>str;
	}
	void display()
	{
	    cout<<str;
	}
	string operator+(string x)
	{
	    string s;
	    strcat(str, x.str);
	    strcpy(s.str, str);
	    return s;
	}
	int operator<=(string y);
	string operator=(string z)
	{
	    strcpy(str, z.str);
	    return z;
	}
	int lenstring(int l)
	{
	    l=strlen(str);
	    cout<<"Length of the string is:"<<l;
	}
	void tolower()
	{
	    for(int i=0; str[i]!='\0'; i++)
	    {
		if(str[i]>='A' && str[i]<='Z')
		    str[i]=str[i]+32;
	    }
	    cout<<"Upper to Lower case:"<<str;
	}
	void toupper()
	{
	    for(int i=0; str[i]!='\0'; i++)
	    {
		if(str[i]>='a' && str[i]<='z')
		    str[i]=str[i]-32;
	    }
	    cout<<"Lower to upper case:"<<str;
	}
};

int string::operator<=(string y)
{
    if(strcmp(str, y.str)==0)
	return 0;
    else
	return 1;
}

void main()
{
    clrscr();
    string s1, s2, s3, s4;
    int ch, r;
    cout<<"1.CONCATENATION\n2.COMPARISON\n3.COPY\n4.LENGHT";
    cout<<"\n5.To LOWRER CASE\n6.TO UPPER CASE\n7.EXIT";
    while(1)
    {
	cout<<"\nEnter your choice:";
	cin>>ch;
	switch(ch)
	{
	    case 1:
		cout<<"\nEnter String 1:";
		s1.get_string();
		cout<<"\nEnter String 2:";
		s2.get_string();
		s3=s1+s2;
		cout<<"\nThe concatenated string is:";
		s3.display();
		break;
	    case 2:
		cout<<"\nEnter String 1:";
		s1.get_string();
		cout<<"\nEnter String 2:";
		s2.get_string();
		r=s1<=s2;
		if(r==0)
		    cout<<"\nBoth Strings are equal";
		else
		    cout<<"\nBoth strings are not equal";
		break;
	    case 3:
		cout<<"\nEnter the String:";
		s1.get_string();
		s3=s1;
		cout<<"The copy of this string is:";
		s3.display();
		break;
	    case 4:
		cout<<"Enter the string:";
		s1.get_string();
		s1.lenstring(r);
		break;
	    case 5:
		cout<<"Enter the String in upper case:";
		s1.get_string();
		s1.tolower();
		break;
	    case 6:
		cout<<"Enter the String in lower case:";
		s1.get_string();
		s1.toupper();
		break;
	    case 7:
		exit(0);
		break;
	    default:
		cout<<"WRONG CHOICE";
	}
    }
    getch();
}

