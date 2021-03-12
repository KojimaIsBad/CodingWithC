#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN = 10;
int arr[MAXN];
int odd[MAXN];
int dual[MAXN];

bool CompareDesc(int i,int j){
	return i>j;
}

//�������cmp������������ʹ�ö�������飬ԭ������ 
bool cmp(int x,int y){
	//�������� 
	if(x%2==1 && y%2==1)
		return x>y;
	//����ż�� 
	if(x%2==0 && y%2==0)
		return x<y;
	//��ż���� 
	if(x%2==1)
		return true;
	else
		return false;
}

int main(){
	while(scanf("%d",&arr[0])!=EOF){
		for(int i=1;i<MAXN;i++){
			scanf("%d",&arr[i]);
		}
		int oc = 0;
		int dc = 0;
		for(int i=0;i<MAXN;i++){
			if(arr[i]%2==1)
				odd[oc++] = arr[i];
			else
				dual[dc++] = arr[i];
		}
		sort(odd,odd+oc,CompareDesc);
		sort(dual,dual+dc);
		for(int i=0;i<oc;i++){
			printf("%d ",odd[i]);
		}
		printf("\n");
		for(int i=0;i<dc;i++){
			printf("%d ",dual[i]);
		}
		printf("\n");
		
	}
	return 0; 
}
