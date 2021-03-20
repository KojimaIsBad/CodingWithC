#include <iostream>

using namespace std;

int main(){
	string str = "hello world";
	
	//1.str.insert() 在任意位置插入元素
	str.insert(str.size()," morning");
	cout<<str<<endl;
	
	//2.str.erase() 擦除指定位置的元素
	str.erase(0,3);		//erase(x,y) 擦除[x,y)区域内的元素 
	cout<<str<<endl;
	
	str.insert(0,"hel"); 
	cout<<str<<endl;
	
	str.erase(1);		//erase(x) 删除[x,+∞)的元素 
	cout<<str<<endl;
	
	str = "hello world";
	int found = str.find("world");//可用于寻找字符串或字符，返回起始下标
	
	if(found==string::npos)
		cout<<"not found"<<endl; 
	
	return 0;
}
