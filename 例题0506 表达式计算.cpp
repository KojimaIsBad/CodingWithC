#include <iostream>
#include <cstdio>
#include <string>
#include <stack>

using namespace std;



int getPrioriry(char c){
	if(c=='#')
		return 0;
	else if(c=='$')
		return 1;
	else if(c=='+'||c=='-')
		return 2;
	else 
		return 3;
}

double calculate(double arg1,double arg2,char op){
	double result = 0;
	//一定要注意x和y的顺序 
	switch (op) {
		case '+':
			result = arg1+arg2;
			break;
		case '-':
			result = arg2-arg1;
			break;
		case '*':
			result = arg1 * arg2;
			break;
		case '/':
			result = arg2 / arg1;
			break;
	}
	return result;
}

double getNum(string str,int &index){
	double res = 0;
	while(isdigit(str[index])){
		res  = res * 10 + str[index] - '0';
		index++;
	}
	return res;
} 


int main(){
	string str;
//	std::ios::sync_with_stdio(false);
	
	while(getline(cin,str)){	//输入中可能含有空格，需要使用getLine函数 
		if(str=="0")
			break;
		stack<char> ops;
		//计算除法时可能会出现小数，应该用浮点类型 
		stack<double> num; 
		ops.push('#'); 
		str+="$";
		//不能直接用for循环，因为如果运算符没有入栈，还要重新进行一次当前操作 
		int i = 0;
		while(i<str.size()){
			if(str[i]==' ')
				i++;
			else if(isdigit(str[i])){
				//注意数字可能有多位，需要单独处理 
//				num.push(str[i] - '0');
//				i++;
				num.push(getNum(str,i)); 
			} else {
				int curp = getPrioriry(str[i]);
				int topp = getPrioriry(ops.top());
				if(curp>topp){
					ops.push(str[i]);
					i++;
				}
				else{//弹出运算符和两个操作数 
					double arg1 = num.top();num.pop();
					double arg2 = num.top();num.pop();
					char op = ops.top();ops.pop();
					double res = calculate(arg1,arg2,op);
//					cout<<res<<endl;
					num.push(res);
				}
			}
		}		
		printf("%.2f\n",num.top());
	}	 
	return 	0;
	
}
