#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	scanf("%d",n);
	while(n--){
		string str;
		cin >> str;
		int count = 0;
		for(int i=0;i<str.size();i++){
			for(int j=0;j<count;j++)
				cout<<" ";
			char c =  str[i];
			if(c=="\\")
				cout<<endl;
			else
				cout<<str[i];
			count++;
		}
	}
} 
