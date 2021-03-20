#include <iostream>
#include <cstdio>

using namespace std;
// 利用迭代器访问字符串元素 
int main(){
	string str = "hello world";
	for(string::iterator it = str.begin();it != str.end();++it){
		printf("%c ",*it);
	}
	printf("\n");
	return 0;
} 
