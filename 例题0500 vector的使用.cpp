#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> myVector;

int main(){
	
	for(int i=0;i<5;i++)
		myVector.push_back(i);
	//在队列头部插入3个15 
	myVector.insert(myVector.begin(),3,15);
	myVector.pop_back();
	for(int i=0;i<myVector.size();i++)
		printf("%d ",myVector[i]);
	printf("\n");
	printf("5th element is %d\n",myVector[4]);
	
	//删除第五个之后的元素（不包括第五个）.0. 
	myVector.erase(myVector.begin()+5,myVector.end());
	
	vector<int>::iterator it;
	for(it=myVector.begin();it!=myVector.end();it++){
		printf("%d ",*it);
	}
	printf("\n");
	myVector.clear();
	return 0;
} 
