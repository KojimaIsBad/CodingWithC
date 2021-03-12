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
    //输入年月日，计算改天是本年的第几天
    //闰年的判断规则①被400整除②被4整除但不被100整除
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
