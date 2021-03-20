#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

queue<int> myQueue;

int main(){
	for(int i=0;i<10;i++)
		myQueue.push(i);
	printf("front :%d",myQueue.front()); 
	printf("back :%d",myQueue.back()); 
	printf("size :%d",myQueue.size()); 
	int sum = 0;
	while(!myQueue.empty()){
		sum += myQueue.front();
		myQueue.pop();
	}
	printf("sum: %d\n",sum);
	if(myQueue.empty()){
		printf("myQueue is empty");
	}
	printf("size: %d",myQueue.size());
	return 0;
}
