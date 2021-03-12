#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Student{
	string name;
	int score; 
	//��¼¼��˳�� 
	int id;
};

bool compareAscend(Student x, Student y){
	if(x.score==y.score)	//�ɼ���ͬʱ�Ƚ�¼��˳�� 
		return x.id < y.id;
	else 					//�ɼ���ͬ��ʱ��Ƚϳɼ� 
		return x.score < y.score; 
}

bool compareDescend(Student x,Student y){
	if(x.score == y.score)
		return x.id < y.id;
	else
		return x.score > y.score;
}


int main(){
	//����������ȷ������Ҫ���䶯̬����
	int n;
	//����ʽ��0����1����
	int type;
	while(scanf("%d%d",&n,&type)!=EOF){
		Student *list = new Student[n];
		//�����ϵķ���
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
		//���������������Ӧ��ʱ����delete�� 
		delete[] list;
	} 
	return 0;
}
