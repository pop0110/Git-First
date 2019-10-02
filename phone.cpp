#include <iostream>
#include <cstring>
using namespace std;

class phone{
char *areacode, *exchange, *number;
public :
	phone(){
		areacode=new char[5];	
		exchange=new char[5];
		number=new char[5];
	}
	void initialise(char a[],char b[],char c[]){
		strcpy(areacode,a);
		strcpy(exchange,b);
		strcpy(number, c);
	}
	void output(){
		cout<<"\n Number is : ("<<areacode<<") "<<exchange<<"-"<<number;	
	}
	~phone(){
		delete[] areacode;
		delete[] exchange;
		delete[] number;
	}

};
int main(){
	char a[10],b[10],c[10];
	cout<<"Enter phone number : ";
	cin>>a>>b>>c;
	phone p,myp;
	p.initialise(a,b,c);
	myp.initialise("123","456","7890");
	p.output();
	myp.output();
	cout<<"\n";
	return 0;
}
