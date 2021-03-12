#include <iostream>
#include <cstdio>
using namespace std;

int months[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
bool isLeapYear(int year){
    return (year%4==0&&year%100!=0)||(year%400==0);
}
int numberOfYear(int year){
	return (isLeapYear(year)) ? 366:365;
}

int main(){
	int year1,month1,day1;
	int year2,month2,day2;
	int c1,c2;
	int num = 0; //数据的组数
	int res;	//最终的结果 
	scanf("%d",&num);
	while(num--){
		scanf("%d%d%d",&year1,&month1,&day1);
		scanf("%d%d%d",&year2,&month2,&day2);
		int row1 = isLeapYear(year1);
		for(int i=0;i<month1;i++){
			c1 += months[row1][i];
		}
		c1 += day1;
		
		int row2 = isLeapYear(year2);
		for(int i=0;i<month2;i++){
			c2 += months[row2][i];
		}
		c2 += day2;
		
		if(year1==year2){
			if(c1>c2)
				res = c1 -c2;
			else
				res = c2 - c1;
		}
		else if(year1>year2){
			res = c1;
			while(year1>year2){
				year1--;
				res+=numberOfYear(year1);
			}
			res+=numberOfYear(year2)-c2;
		} else {
			res = c2;
			while(year2>year1){
				year2--;
				res+=numberOfYear(year2);
			}
			res+=numberOfYear(year1)-c1;
		}
		printf("%d",res);
	}
	return 0;
}
