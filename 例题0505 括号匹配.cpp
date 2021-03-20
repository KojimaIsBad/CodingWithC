#include <iostream>
#include <cstdio>
#include <stack>
#include <string>

using namespace std;

stack<int> s;

int main(){
	string str;
	std::ios::sync_with_stdio(false);
	cin>>str;
	
	char res[str.size()];
	
	for(int i=0;i<str.size();i++){
		if(str[i]=='('){
			s.push(i);
			res[i] = ' ';
		} else if(str[i]==')'){
			if(s.empty())
				res[i] = '?';
			else{
				res[i] = ' ';
				int li = s.top();
				res[li] = ' ';
				s.pop();
			}
			
		} else
			res[i] = ' ';
	}
	while(!s.empty()){
		int x = s.top();
		res[x] = '$';
		s.pop();
	}
	
	cout<<str<<endl; 
	
	for(char i:res)
		cout<<i;
	cout<<endl;
	
	
	return 0;
}
