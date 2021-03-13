#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool binarySearch(int n,int arr[],int target){
	int low = 0;
	int high = n-1;

	while(low<=high){

		int mid = (low+high)/2;
		if(arr[mid]<target){
			low = mid + 1;
		} else if(arr[mid]>target){
			high = mid - 1;
		} else {
			return true;
		}
	}
	
	return false;
}

int main(){
	int n,m;
	while(scanf("%d",&n)!=EOF){
		int arr[n];
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+n);
		scanf("%d",&m);
		int target[m];
		for(int i=0;i<m;i++){
			scanf("%d",&target[i]);
		}
//		for(int i:target)
//			printf("%d\n",i);
		for(int i=0;i<m;i++){
			if(binarySearch(n,arr,target[i]))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
