#include <iostream>
using namespace std;

void converter(int num,int& idx,char dt[],bool isYear=false){
	if(isYear){
		dt[idx]=num/1000 + '0';num=num%1000;
		dt[idx+1]=num/100 + '0';num=num%100;
		dt[idx+2]=num/10+'0';num=num%10;
		dt[idx+3]=num+'0';
		dt[idx+4]='\0';
		idx+=5;
		return;	
	}
		dt[idx]=num/10 + '0';
		dt[idx+1]=num%10 + '0';
		dt[idx+2]='-';
		idx+=3;
	}
	void date(int d,int m,int y,char str[]){
		int index=0;
		converter(d,index,str);
		// cout<<dt;
		converter(m,index,str);
		// cout<<dt;
		converter(y,index,str,true);
	}

int main(){
	char dt[20];
	date(31,2,1997,dt);
	cout<<dt;	
	return 0;
}
