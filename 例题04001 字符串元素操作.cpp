#include <iostream>

using namespace std;

int main(){
	string str = "hello world";
	
	//1.str.insert() ������λ�ò���Ԫ��
	str.insert(str.size()," morning");
	cout<<str<<endl;
	
	//2.str.erase() ����ָ��λ�õ�Ԫ��
	str.erase(0,3);		//erase(x,y) ����[x,y)�����ڵ�Ԫ�� 
	cout<<str<<endl;
	
	str.insert(0,"hel"); 
	cout<<str<<endl;
	
	str.erase(1);		//erase(x) ɾ��[x,+��)��Ԫ�� 
	cout<<str<<endl;
	
	str = "hello world";
	int found = str.find("world");//������Ѱ���ַ������ַ���������ʼ�±�
	
	if(found==string::npos)
		cout<<"not found"<<endl; 
	
	return 0;
}
