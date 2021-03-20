#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

struct animal{
	int type;
	int order;
	animal(int t,int o):type(t),order(o){}
};

int main(){
	queue<animal> cats;
	queue<animal> dogs;
	int n;
	int order = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int method,type;
		scanf("%d%d",&method,&type);
		if(method==1){
			dogs.push(animal(type,order++));
		} else {
			if(type==0&&!dogs.empty()&&!cats.empty()){
				if(dogs.front().order<cats.front().order){
					printf("%d ",dogs.front().type);
					dogs.pop();
				} else {
					printf("%d ",dogs.front().type);
					cats.pop();
				}
			} else if(type==0&&dogs.empty()&&!cats.empty()){
				printf("%d ",cats.front().type);
				cats.pop();
			} else if(type==0&&!dogs.empty()&&cats.empty()){
				printf("%d ",cats.front().type);
				dogs.pop();
			} else if(type==1&&!dogs.empty()){
				printf("%d ",cats.front().type);
				dogs.pop();
			} else if(type==-1&&!cats.empty()){
				printf("%d ",cats.front().type);
				cats.pop();
			}
		}
	} 
	
	return 0£» 
} 
