#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main()
{
     int a=1;
     int b=3;
     int c=5;
//     int *p1=&a;
//     int *p2=&b;
//     int *p=&c;
//     *p=*p1*(*p2);
//     printf("%d\n",c);
	int* p = &c;
	cout<<*p<<endl; 
     return 0;
}
