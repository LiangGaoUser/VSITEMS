/*#include <iostream>
#include <string>
#include <math.h>
#include "fuzhi.h"
using namespace std;
bool Puo(char *s);
void important(string s)//����־�����ˣ� ����ĸ��{����ĸ���������֡�}
{
	
	char ch=s[n];//=s[n];//ch������һ���ʷ�����,��ʼֵΪ��ĸ
	int i=0;//id[i]


	while(ch!='#')
	{
		do
		{
			id[i]=ch;
			id[i+1]='\0';
			if(Puo(id))//�������ɨ������У��ɹ���ɹؼ��֣��˳�ɨ��
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
		break;//����while 
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
	
