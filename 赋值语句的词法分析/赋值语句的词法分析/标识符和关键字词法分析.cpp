/*#include <iostream>
#include <string>
#include <math.h>
#include "fuzhi.h"
using namespace std;
bool Puo(char *s);
void important(string s)//〈标志符〉∷＝ 〈字母〉{〈字母〉｜〈数字〉}
{
	
	char ch=s[n];//=s[n];//ch来自上一个词法分析,初始值为字母
	int i=0;//id[i]


	while(ch!='#')
	{
		do
		{
			id[i]=ch;
			id[i+1]='\0';
			if(Puo(id))//如果分析扫描过程中，成功组成关键字，退出扫描
			{
				//sym="important word";
				n++;
				break;
			}
			i++;
			n++;
			ch=s[n];
			sym="ident ";

		}
		while((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'));
		break;//跳出while 
	}
}

	

bool Puo(char *s)
{
	for(int j=0;j<13;j++)
	{
		if(strcmp(s,wsym[j])==0)
		{
			sym=wsym[j];
			cout<<s<<endl;
			return true;
		}

	}

	return false;
}
int main()
{
	string a;//
	getline(cin,a);//
	cout<<a<<endl;
	while(n<a.length()-1)
	{
		 important(a);
	cout<<sym<<endl;
	cout<<id<<endl;
	}
	system("pause");
	
	
	
}*/
	
