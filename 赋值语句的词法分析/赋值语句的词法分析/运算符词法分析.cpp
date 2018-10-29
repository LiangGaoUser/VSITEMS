/*#include <iostream>
#include <string>
#include <math.h>
#include "fuzhi.h"
using namespace std;
bool Puo(char *s);
void YunFu(string s)
{
	        char ch=s[n];//
	
			if(ch==':')
			{
					n++;
					ch=s[n];
					if(ch=='=')
					{
						sym="becomes";				
						n++;
						return;
												
					}
					else
					{
						
						cout<<"ERROR3"<<endl;
						return;
					}
			
				
			}

			if(ch=='<')
			{
					n++;
					ch=s[n];
					if(ch=='=')
					{
						sym="leq";
						n++;
						return ;
											
					}
					else
					{
						sym="les";
						return;			
					}
			}
			if(ch=='>')
			{
					n++;
					ch=s[n];
					if(ch=='=')
					{
						sym="geq";
						n++;
						return ;				
					}
					else
					{
						sym="gtr";
						return;
						
					}
			}		
			
			
			if(ch=='+')
			{
				sym="plus";
				n++;
				
				
			}
			if(ch=='-')
			{
				sym="minus";
				n++;
				
			}
				if(ch=='*')
			{
				sym="times";
				n++;
				
			}
				if(ch=='/')
			{
				sym="slash";
				n++;
				
			}
				if(ch=='#')
			{
				sym="plus";
				n++;
				
			}
				if(ch=='(')
			{
				sym="lparen";
				n++;
				
			}
				if(ch==')')
			{
				sym="lparen";
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
			if(ch=='=')
			{
				sym="eql";
				n++;
				
			}
			if(ch==' ')
			{
				//cout<<""<<endl;
				sym="null";
				n++;
				//ch=s[n];
			
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
		 YunFu(a);
	cout<<sym<<endl;
	}
	system("pause");
}

*/