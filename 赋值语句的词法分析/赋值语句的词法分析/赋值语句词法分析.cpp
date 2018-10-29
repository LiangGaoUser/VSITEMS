#include <iostream>
#include <string>
#include<fstream>//
#include "fuzhi.h"

using namespace std;
bool Puo(char *s);
void SHUZI(string s)
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
void Shuzi(string s)//如果一个字符是数字开头，开始执行此函数，无符号数分析程序
{
	// i,n
	int i=0;
	int n=0;
	//char ch=s[n];
	char ch=s[n];
	int N=0,P=0,j=0;
	int e=1;
	int d=0;
	char C1=' ';//C1='z'整形变量，C1='s;实型变量
	float t;
	
	do
	{
		
		d=int(ch)-48;//第一次是0
		cout<<"d"<<d<<endl;
		N=N*10+d;
		n++;
		ch=s[n];


	}
	while('0'<=ch<='9'&&ch!='#');
	cout<<"N"<<N<<endl;//

	
	if(ch=='.')
	{
		n++;
		ch=s[n];
		if('0'<=ch<='9')
		{
			do{
				d=int(ch)-48;
				N=N*10+d;
				j++;
				n++;
				ch=s[n];
			  }
			while('0'<=ch<='9');

		}
		else
		{
			cout<<"ERROR1"<<endl;
			return ;
		}
		C1='s';

	}
	else
	{
		C1='z';
	}

	if(ch=='e')//指数部分
	{
		n++;
		ch=s[n];
		if(ch=='-')
		{
			e=-1;
			n++;
			ch=s[n];
		}
		else
		{
			if(ch=='-')//
			{
				n++;
				ch=s[n];
			}
			else
			{

			}
		}
		if('0'<=ch<='9')
		{
			do
			{
				d=int(ch)-48;
				P=P*10+d;
				n++;
				ch=s[n];
			}
			while('0'<=ch<='9');

		}
		else
		{
			cout<<"ERROR2"<<endl;
			return ;

		}
		C1='s';
		t=N*pow(10*1.0,e*P-j);
		sym="数字";
		cout<<t<<endl;
	}
	else
	{
		t=N*pow(10*1.0,e*P-j);
		sym="数字";
		cout<<t<<endl;
	}	
}

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

void YunFu(string s)
{
	        char ch=s[n];//
			int i=0;
			//id="";
			id[i]=ch;
			id[i+1]='\0';
			//cout<<"id"<<id<<endl;
			if(ch==':')
			{
					
					n++;
					i++;
					ch=s[n];
					if(ch=='=')
					{
						id[i]=ch;
						id[i+1]='\0';
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
					i++;
					ch=s[n];
					if(ch=='=')
					{
						id[i]=ch;//
						id[i+1]='\0';//
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
					i++;
					ch=s[n];
					if(ch=='=')
					{
						id[i]=ch;//
						id[i+1]='\0';//
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
			//cout<<s<<endl;
			return true;
		}

	}

	return false;
}



bool Puo1(char *s)
{
	for(int j=0;j<13;j++)
	{
		if(strcmp(s,wsym[j])==0)
		{
			//sym=wsym[j];
			//cout<<s<<endl;
			return true;
		}

	}

	return false;
}




int main()
{
	
	cout<<"1.无符号整数"<<endl;
	cout<<"2.关键字"<<endl;
	cout<<"3.界符"<<endl;
	cout<<"4.运算符"<<endl;
	cout<<"5.标识符"<<endl;



	char hy;
	string a;
	ifstream fin("D:\\test.txt");
	if(!fin)
	{
		cout<<"cannot open input file"<<endl;
	}
	
	
	while(fin.get(hy))
	{
		a=a+hy;
	}
	
	cout<<a<<endl;







	
	//string a;     //需要自己输入，注释上面的，打开这三行
	//getline(cin,a);
	//cout<<a<<endl;
	char ch1=a[n];
	while( n<a.length()-1)//
	{
	
	

	if(ch1=='+'||ch1=='-'||ch1=='*'||ch1=='/'||ch1=='='||ch1=='<'||ch1=='>'||ch1==':')
	{
		//cout<<"开始调用YunFu(a)"<<endl;
		//cout<<ch1<<endl;
		
		YunFu(a);
		cout<<"( 4 ,"<<id<<")"<<endl;
	}
	else if(ch1=='('||ch1==')'||ch1==','||ch1==';'||ch1=='.')
	{
		//cout<<"开始调用JieFu(a)"<<endl;
		//cout<<ch1<<endl;
		cout<<"( 3,"<<ch1<<")"<<endl;
		JieFu(a);

	}
	else if(ch1==' ')
	{
		//cout<<"空格"<<endl;
		//cout<<ch1<<endl;
		n++;
		ch1=a[n];
	}
	else if(ch1=='1'||ch1=='2'||ch1=='3'||ch1=='4'||ch1=='5'||ch1=='6'||ch1=='7'||ch1=='8'||ch1=='9')
	{
		//cout<<"开始调用SHUZI(a)"<<endl;
		//cout<<"ch1"<<ch1<<endl;
		//cout<<"( 1 ,"<<num<<")"<<endl;
		SHUZI(a);
		cout<<"( 1 ,"<<num<<")"<<endl;
		//cout<<num<<endl;
		
		 
	}

	else  if('a'<=ch1<='z')
	{
		//cout<<"开始调用important(a)"<<endl;
		//cout<<"ch1"<<ch1<<endl;
		important(a);
		//cout<<id<<endl;
		if(Puo1(sym))
		{
		cout<<"( 2 ,"<<id<<")"<<endl;
		}
		else
		{
			cout<<"( 5 ,"<<id<<")"<<endl;
		}

	}
	else 
	{
		cout<<"有不可识别的符号"<<endl;
		cout<<ch1<<endl;
		break;
	}
	ch1=a[n];
	}
	//while(n<a.length()-1)
	//{
	//	getsym(a);
	//cout<<sym<<endl;
	//}
	
	




	system("pause");
}
	
	
	
	
	