#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int arr[n];
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		int target;
		int res = -1;
		scanf("%d",&target);
		for(int i=0;i<n;i++){
			if(arr[i]==target){
				res = i; 
			}
		}
		printf("%d\n",res);
	}
	return 0;
} 
