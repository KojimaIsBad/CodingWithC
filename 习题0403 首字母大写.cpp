#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main(){
	string str;
	while(getline(cin,str)){
		//如果单词的首字母不是大写字母，则将单词的首字母变为大写
		int cur = 0;
		bool needChange = true;
		while(cur<str.size()) {
			if((needChange)&&(str[cur]<'z'&&str[cur]>'a')){
				str[cur] = str[cur] + 'A' - 'a';
			}
			
			//判断是否是单词首字母
			if(str[cur]=='\n'||str[cur]=='\t'||str[cur]=='\r'||str[cur]==' ') 
				needChange = true;
			else
				needChange = false;
			cur++;
		}
		cout<<str<<endl;
	}
	return 0;
} 
