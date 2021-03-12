#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Student{
	string name;
	int score; 
	//记录录入顺序 
	int id;
};

bool compareAscend(Student x, Student y){
	if(x.score==y.score)	//成绩相同时比较录入顺序 
		return x.id < y.id;
	else 					//成绩不同的时候比较成绩 
		return x.score < y.score; 
}

bool compareDescend(Student x,Student y){
	if(x.score == y.score)
		return x.id < y.id;
	else
		return x.score > y.score;
}


int main(){
	//输入人数不确定，需要分配动态数组
	int n;
	//排序方式，0降序，1升序
	int type;
	while(scanf("%d%d",&n,&type)!=EOF){
		Student *list = new Student[n];
		//王道上的方法
//		Student list[n]; 
		for(int i=0;i<n;i++){
			cin>>list[i].name>>list[i].score;
			list[i].id = i; 
		}
		if(type==0)
			sort(list,list+n,compareDescend);
		else
			sort(list,list+n,compareAscend);
		for(int i=0;i<n;i++){
			cout<<list[i].name<<" "<<list[i].score<<endl;
		}
		//如果用王道方法，应该时不用delete的 
		delete[] list;
	} 
	return 0;
}
