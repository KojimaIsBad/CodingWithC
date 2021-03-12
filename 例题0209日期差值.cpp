#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN = 10001;
int t[MAXN];
int main(){
	int l;
	int m;
	while(scanf("%d%d",&l,&m)!=EOF){
		//	int *t = new int[l+1];
			for(int i=0;i<=l;i++)
				t[i] = 1;
			
			int trees = l+1;
			
			while(m--){
				int from,to;
				scanf("%d%d",&from,&to);
				for(int i=from;i<=to;i++){
					if(t[i]==1){
						trees--;
						t[i]=0;
					}
				}
			}
			printf("%d\n",trees);
			//如果使用动态数组，用完要记得delete 
	}
	

}
