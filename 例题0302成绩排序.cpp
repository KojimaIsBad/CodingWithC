#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
//ԭ���ҵĴ��� 
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

//����ָ���ϵĴ���
const int MAXN = 100;

struct Student{
	int number;	//ѧ�� 
	int score;	//�ɼ� 
}; 

Student arr[MAXN];

/**
 * @brief �Զ���ȽϺ���������sort������ 
 * 	���򣺵��ȽϺ�������ֵΪTrueʱ�������ĵ�һ������i�ͻ����ں����ĵڶ�������jǰ�� 
 * @param i 
 * @param j 
 * 
 * @return 
 **/
bool Compare(Student i, Student j){	
	if(i.score == j.score)	//�ɼ���ͬ�Ƚ�ѧ�� 
		return i.number<j.number; 	//i<j ����1��i>=j����0 
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
