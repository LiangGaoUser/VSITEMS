/*#include <iostream>
#include <string>
#include <math.h>
#include "fuzhi.h"
using namespace std;
//bool Puo(char *s);
void Shuzi(string s)//如果一个字符是数字开头，开始执行此函数，无符号数分析程序
{
	
	char ch=s[n];//=s[n];//ch来自上一个词法分析,初始值为字母
	int i=0;//id[i]


	while(ch!='#')
	{
		do
		{
			id[i]=ch;
			id[i+1]='\0';
			i++;
			n++;
			ch=s[n];
			sym="整数";
			num=atoi(id);

		}
		while(ch>='0'&&ch<='9');
		break;//跳出while 
	}
			




}


int main()
{

	string a;//
	getline(cin,a);//
	cout<<a<<endl;
	//while(n<a.length()-1)
	//{
		 Shuzi(a);
		 cout<<sym<<endl;
		 cout<<id<<endl;
	//cout<<sym<<endl;
	//cout<<id<<endl;
	//}	
	
	system("pause");
}
*/