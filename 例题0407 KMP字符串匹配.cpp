#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

const int MAXM = 10000;

int nextTable[MAXM];


//next数组代表字符串前缀和后缀相同的最大长度 
//代码逻辑不同于笔算逻辑 
void GetNextTable(string pattern){
	//wd中序号从1开始 
	int m = pattern.size();
	int j=0;
	nextTable[j] = -1;
	int i = nextTable[j];
	while(j<m){
		if(i==-1||pattern[i] = pattern[j]){
			i++;
			j++;
			nextTable[j] = i;
		} else {
			i = nextTable[i];
		}
	}
	return;
}

int KMP(string text, string pattern){
	GetNextTable(pattern);
	int n = text.size();
	int m = pattern.size();
	int i=0;
	int j=0;
	int number =0;
	while(i<n){
		if(j==-1||text[i]==pattern[j]){
			i++;
			j++;
		} else {
			j = nextTable [j];
		}
		if(j==m){
			number++;
			j=nextTable[j];
		}
	}
	return number;
}

int main(){
	int caseNumber;
	scanf("%d",&caseNumber);
	while(caseNumber--){
		string pattern,text;
		cin>>pattern>>text;
		printf("%d\n",KMP(text,pattern));
	}
	return 0;
}
