#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

stack<int> myStack;

int main(){
	
	printf("%d\n",myStack.size());
	for(int i=0;i<10;i++)
		myStack.push(i);
	printf("top is %d\n",myStack.top());
	int sum = 0;
	while(!myStack.empty()){
		sum += myStack.top();
		myStack.pop(); 
	}
	printf("Sum : %d\n",sum);
	if(myStack.empty())
		printf("Now empty.\n");
		
	return 0;
} 
