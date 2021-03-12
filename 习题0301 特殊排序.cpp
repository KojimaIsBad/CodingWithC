#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int arr[n];
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		sort(arr,arr+n);
		printf("%d\n",arr[n-1]);
		if(n==1)
			printf("-1");
		else
			for(int i=1;i<n-1;i++)
				printf("%d ",arr[i]);
		printf("\n");
	}
	return 0;
}
