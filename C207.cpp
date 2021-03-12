#include <iostream>
#include <cstdio>

using namespace std;


int months[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
bool isLeapYear(int year){
    return (year%4==0&&year%100!=0)||(year%400==0);
}

int main(){
	int year,count;
	cin>>year;
	cin>>count;
	int yearType = isLeapYear(year); 
	int month=1;
	while(count>months[yearType][month]){
		count =  count - months[yearType][month++];
	}
	int day = count;
	cout<<month<<" "<<day<<endl;
	//将格式转化为yyyy-mm-dd
	printf("%04d-%02d-%2d\n",year,month,day) ;
	
	return 0;
}
