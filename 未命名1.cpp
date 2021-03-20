#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int jumpcache[100000];


int findnext(int arr[],int n,int start){
	for(int i=start+1;i<n;i++){
		if(arr[i]==arr[start])
			return i;
	}
	return -1;
}

//ÍùÇ°ÌøÒ»²½, 
int jump1(int arr[],int start,int end,int n){
	if(start==end-1)
		return 0;
	
	int type1, type2=end-start, type2Cache=end-start;
	if(jumpcache[start+1]==-1){
		type1 = jump1(arr,start+1,end,n);
		jumpcache[start+1]=type1;
	}else{
		type1=jumpcache[start+1];
	}
	
	
	int jumpIndex = findnext(arr,n,start);
	
	while(jumpIndex!=-1){
		if(jumpcache[jumpIndex]==-1){
			type2Cache = jump1(arr,jumpIndex,end,n);
			jumpcache[jumpIndex]=type2Cache;
		}else{
			type2Cache=jumpcache[jumpIndex];
		}
		type2 = min(type2Cache,type2);
		jumpIndex = findnext(arr,n,jumpIndex);
	}
	
	return 1+min(type1,type2);
}

int main(){
	int n;
	
	int arr[n];
	char str[n];
	scanf("%d %s",&n,str);
	
	memset(jumpcache,-1,sizeof(jumpcache));
//	scanf("%c",str);/
		
	for(int i=0;i<n;i++)
		arr[i] = str[i] - '0---';
			
	int res = jump1(arr,0,n,n);
	printf("%d\n",res);

	return 0;
}
