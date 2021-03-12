#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
//		scanf("%d",&n);
		if(n==0)
			break;
		int count = 0;
		while(n!=1){
			if(n%2==0)
				n = n/2;
			else
				n = (3*n+1)/2;
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
