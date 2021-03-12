#include <iostream>
#include <cstdio>

using namespace std;
int dayTab[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

bool isLeapYear(int year){
    return (year%4==0&&year%100!=0)||(year%400==0);
}
int main(){
    //���������գ���������Ǳ���ĵڼ���
    //������жϹ���ٱ�400�����ڱ�4����������100����
    int year,month,day;
    scanf("%d%d%d",&year,&month,&day);
//    printf("%d",year);
    int count = 0;
    if(isLeapYear(year))
        for(int i=1;i<month;i++)
            count+=dayTab[0][i];
    else
        for(int i=1;i<month;i++)
            count+=dayTab[1][i];
    count += day;
    printf("%d",count);
    return 0;
}
