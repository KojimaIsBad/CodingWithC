#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

//c++内部在 algorithm库中已经编写了基于快速排序的排序函数sort，当题目需要排序的时候直接调用即可。

const int MAXN = 100;

int arr[MAXN];

int main(){
	int num;
	while(scanf("%d",&num)!=EOF){
		for(int i=0;i<num;i++){
			 scanf("%d",&arr[i]);
		}
		//默认为升序排序 
		sort(arr,arr+num);
		for(int i:arr){
			printf("%d",i);
		}
		printf("\n");
	}
	
} 
