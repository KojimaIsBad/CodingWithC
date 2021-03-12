#include <iostream>
#include <cstdio>
using namespace std;
//《机试指南》P20 例题2.8 

int months[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
bool isLeapYear(int year){
    return (year%4==0&&year%100!=0)||(year%400==0);
}
int NumberOfYear(int year){
	if(isLeapYear(year))
		return 366;
	else
		return 365;
} 
//输入一个日期，判断其加撒谎给你若干天后是什么日期 
int main(){
	int year,month,day;	//输入的年月日 
	int count;	//要增加的天数 
	int num;	//数据的组数 
	scanf("%d",&num);
	while(num--){//当num>0的时候循环条件成立 
		scanf("%d%d%d%d",&year,&month,&day,&count); 
		int yearType = isLeapYear(year);
		//整体思路，先计算输入的日期加上要增加的天数是该年的第几天 
		for(int i=0;i<month;i++){
			count += months[yearType][i];
		}
		count+=day;
		//判断有没有超过一年 
		while(count> NumberOfYear(year)){
			count -= NumberOfYear(year);
			year++;
		}
		//确定是那一个月 
		month = 0;
		yearType = isLeapYear(year);
		while(count>months[yearType][month]){
			count -= months[yearType][month];
			month++;
		}
		day = count;
		printf("%04d-%02d-%02d",year,month,day);
		
	}
	
}
