#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	string x,y;
	while(cin>>x>>y){
		int res = 0;
		for(int i=0;i<x.size();i++){
			for(int j=0;j<y.size();j++){
				res+= (x[i]-'0')*(y[j]-'0');
			}
		}
		cout<<res<<endl;
	} 
	return 0;
}
