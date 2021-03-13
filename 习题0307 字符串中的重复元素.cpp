#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	
	std::ios::sync_with_stdio(false);
	
	string str;
	while(cin>>str){
        int done[str.length()];
        for(unsigned int i=0;i<str.length();i++)
            done[i] = 0;
		for(unsigned int i=0;i<str.length();i++){
			unsigned int p = i+1;          
			bool first = true;
            if(done[i]==1)
                continue;
			while(p<str.length()){
				if(str.at(i)==str.at(p)){
					if(first){
                        done[i] = 1;
						cout<<str.at(i)<<":"<<i<<",";
						first = false;
					} else
						cout<<",";
                    done[p] = 1;
					cout<<str.at(i)<<":"<<p;
				}
				p++;
			}
            if(!first)
			    cout<<""<<endl;
		}
	}
	return 0;
}
