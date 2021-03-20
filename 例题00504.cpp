#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

stack<long long> myStack;

int main(){
	
	int n;
	while(scanf("%d",&n)!=EOF){
		long long x;
		for(int i=0;i<n;i++) {
			scanf("%lld",&x);
			myStack.push(x);
		}
		while(!myStack.empty()){
			printf("%lld",myStack.top());
			if(!myStack.empty())
				printf(" ");
			myStack.pop();
		}	
		printf("\n");
	}
	
	return 0;
} 
