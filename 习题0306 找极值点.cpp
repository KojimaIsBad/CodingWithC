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
		for(int i=0;i<n;i++){
			bool fit = false;
			if(((i==0||arr[i]<arr[i-1])&&(i==n-1||arr[i]<arr[i+1]))||((i==0||arr[i]>arr[i-1])&&(i==n-1||arr[i]>arr[i+1])))
				fit = true;

			if(fit)
				printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
