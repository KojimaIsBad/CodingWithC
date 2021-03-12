#include <iostream>
#include <cstdio>
using namespace std;
//������ָ�ϡ�P20 ����2.8 

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
//����һ�����ڣ��ж�������Ѹ������������ʲô���� 
int main(){
	int year,month,day;	//����������� 
	int count;	//Ҫ���ӵ����� 
	int num;	//���ݵ����� 
	scanf("%d",&num);
	while(num--){//��num>0��ʱ��ѭ���������� 
		scanf("%d%d%d%d",&year,&month,&day,&count); 
		int yearType = isLeapYear(year);
		//����˼·���ȼ�����������ڼ���Ҫ���ӵ������Ǹ���ĵڼ��� 
		for(int i=0;i<month;i++){
			count += months[yearType][i];
		}
		count+=day;
		//�ж���û�г���һ�� 
		while(count> NumberOfYear(year)){
			count -= NumberOfYear(year);
			year++;
		}
		//ȷ������һ���� 
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
