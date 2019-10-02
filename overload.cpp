#include <iostream>
#include <string.h>
using namespace std;

class student{
	char name[40];
	int marks;
	bool isPass;
public :
	student(){
		strcpy(name,"");
		marks=0;
		isPass=true;
	}

	void getInput(){
		cout<<"Enter name and marks : ";
		cin>>name>>marks;
	}

	friend void operator!(student&);
	int getMarks(){
		return marks;
	}

	void print(){
		cout<<"Name : "<<name<<" Marks : "<<marks<<" Is Pass : "<<boolalpha<<isPass<<"\n";
	}
};

void operator!(student& s)	
{		s.isPass=!s.isPass;
	}

int main(){
	student s1;
	s1.getInput();
	if(s1.getMarks() < 40){
		!s1;
	}
	s1.print();
	return 0;
}
