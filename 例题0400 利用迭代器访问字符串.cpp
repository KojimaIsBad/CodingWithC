#include <iostream>
#include <cstdio>

using namespace std;
// ���õ����������ַ���Ԫ�� 
int main(){
	string str = "hello world";
	for(string::iterator it = str.begin();it != str.end();++it){
		printf("%c ",*it);
	}
	printf("\n");
	return 0;
} 
