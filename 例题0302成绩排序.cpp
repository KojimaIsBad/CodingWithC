#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
//原来我的代码 
//const int MAXN=100;
//int num[MAXN];
//int score[MAXN];
//
//bool Compare(int i,int j){
//	if(score[i]>score[j])
//		return 1;
//	else 
//		return 0;
//}
//
//
//int main(){
//	int n;
//	while(scanf("%d",&n)!=EOF){
//		for(int i=0;i<n;i++){
//			scanf("%d%d",&num[i],&score[i]);
//		}
//		
//	}
//}

//机试指南上的代码
const int MAXN = 100;

struct Student{
	int number;	//学号 
	int score;	//成绩 
}; 

Student arr[MAXN];

/**
 * @brief 自定义比较函数，用于sort函数中 
 * 	法则：当比较函数返回值为True时，函数的第一个参数i就会排在函数的第二个参数j前边 
 * @param i 
 * @param j 
 * 
 * @return 
 **/
bool Compare(Student i, Student j){	
	if(i.score == j.score)	//成绩相同比较学号 
		return i.number<j.number; 	//i<j 返回1，i>=j返回0 
	else
		return i.score<j.score; 
} 

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d%d",&arr[i].number,&arr[i].score);
	sort(arr,arr+n,Compare);
	for(int i=0;i<n;i++){
		printf("%d %d\n",arr[i].number,arr[i].score);
	}
	return 0;
} 
