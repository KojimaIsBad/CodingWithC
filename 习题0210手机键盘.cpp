#include <iostream>
#include <cstdio>

using namespace std;

int keytab[26] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};

int main(){
	string str;
	while(cin>>str){
		int time = 0;
		for(int i=0;i<str.size();i++){
			time+=keytab[str[i]-'a'];
			//如果两个字母本身属于同一个按键，那么字母本身的间距等于它们按键次数的差 
			if(i!=0&&str[i]-str[i-1]==keytab[str[i]-'a']-keytab[str[i-1]-'a'])	//等待时间 
				 time+=2;
		}
		printf("%d\n",time);
	}
	return 0;
}
