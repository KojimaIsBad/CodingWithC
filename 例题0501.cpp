#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> numberE;
vector<int> numberG;

int Sum(int x){
	int sum = 0;
	for(int i=1;i<x;i++){
		if(x%i==0){
			sum+=i;
		}
	}
	return sum;
} 
int main(){
	for(int i=2;i<=60;i++){
		if(i==Sum(i)){
			numberE.push_back(i);
		} else if(i<Sum(i)){
			numberG.push_back(i);
		}
	}
	printf("E:");
	for(int i:numberE)
		printf(" %d",i);
	printf("\n");
	printf("G:");
	for(int i:numberG)
		printf(" %d",i);
	printf("\n");	
	return 0;
}
