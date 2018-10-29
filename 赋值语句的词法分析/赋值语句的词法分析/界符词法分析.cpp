/*#include <iostream>
#include <string>
#include <math.h>
#include "fuzhi.h"
using namespace std;
bool Puo(char *s);
void JieFu(string s)
{
	char ch=s[n];//
	
			
				if(ch=='(')
			{
				sym="lparen";
				n++;
				
			}
				if(ch==')')
			{
				sym="rparen";
				n++;
				
			}
			if(ch==',')
			{
				sym="comma";
				n++;
				
			}
				if(ch==';')
			{
				sym="semicolon";
				n++;
				
			}
			if(ch=='.')
			{
				sym="period";
				n++;
				
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
		JieFu(a);
	cout<<sym<<endl;
	}
	
	
	
	system("pause");
}*/
	
