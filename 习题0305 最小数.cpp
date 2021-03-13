#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Point{
	int x;
	int y;
};

bool cmp(Point a,Point b){
	if(a.x == b.x)
		return a.y<b.y;
	else
		return a.x < b.x;
} 

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		Point *p = new Point[n];
		for(int i=0;i<n;i++){
			scanf("%d%d",&p[i].x,&p[i].y);
		}	
		sort(p,p+n,cmp);
		printf("%d %d",p[0].x,p[0].y);	
	}
	return 0;
}
