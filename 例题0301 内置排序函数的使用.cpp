#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

//c++�ڲ��� algorithm�����Ѿ���д�˻��ڿ��������������sort������Ŀ��Ҫ�����ʱ��ֱ�ӵ��ü��ɡ�

const int MAXN = 100;

int arr[MAXN];

int main(){
	int num;
	while(scanf("%d",&num)!=EOF){
		for(int i=0;i<num;i++){
			 scanf("%d",&arr[i]);
		}
		//Ĭ��Ϊ�������� 
		sort(arr,arr+num);
		for(int i:arr){
			printf("%d",i);
		}
		printf("\n");
	}
	
} 
