#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main(){
	string str;
	while(getline(cin,str)){
		//������ʵ�����ĸ���Ǵ�д��ĸ���򽫵��ʵ�����ĸ��Ϊ��д
		int cur = 0;
		bool needChange = true;
		while(cur<str.size()) {
			if((needChange)&&(str[cur]<'z'&&str[cur]>'a')){
				str[cur] = str[cur] + 'A' - 'a';
			}
			
			//�ж��Ƿ��ǵ�������ĸ
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
