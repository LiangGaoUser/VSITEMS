#include <iostream>
#include <string>
#include<fstream>//
#include "fuzhi.h"

using namespace std;
bool Puo(char *s);
void SHUZI(string s)
{
	
	char ch=s[n];//=s[n];//ch������һ���ʷ�����,��ʼֵΪ��ĸ
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
			sym="����";
			num=atoi(id);

		}
		while(ch>='0'&&ch<='9');
		break;//����while 
	}
			

}
void Shuzi(string s)//���һ���ַ������ֿ�ͷ����ʼִ�д˺������޷�������������
{
	// i,n
	int i=0;
	int n=0;
	//char ch=s[n];
	char ch=s[n];
	int N=0,P=0,j=0;
	int e=1;
	int d=0;
	char C1=' ';//C1='z'���α�����C1='s;ʵ�ͱ���
	float t;
	
	do
	{
		
		d=int(ch)-48;//��һ����0
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

	if(ch=='e')//ָ������
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
		sym="����";
		cout<<t<<endl;
	}
	else
	{
		t=N*pow(10*1.0,e*P-j);
		sym="����";
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
	
	cout<<"1.�޷�������"<<endl;
	cout<<"2.�ؼ���"<<endl;
	cout<<"3.���"<<endl;
	cout<<"4.�����"<<endl;
	cout<<"5.��ʶ��"<<endl;



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







	
	//string a;     //��Ҫ�Լ����룬ע������ģ���������
	//getline(cin,a);
	//cout<<a<<endl;
	char ch1=a[n];
	while( n<a.length()-1)//
	{
	
	

	if(ch1=='+'||ch1=='-'||ch1=='*'||ch1=='/'||ch1=='='||ch1=='<'||ch1=='>'||ch1==':')
	{
		//cout<<"��ʼ����YunFu(a)"<<endl;
		//cout<<ch1<<endl;
		
		YunFu(a);
		cout<<"( 4 ,"<<id<<")"<<endl;
	}
	else if(ch1=='('||ch1==')'||ch1==','||ch1==';'||ch1=='.')
	{
		//cout<<"��ʼ����JieFu(a)"<<endl;
		//cout<<ch1<<endl;
		cout<<"( 3,"<<ch1<<")"<<endl;
		JieFu(a);

	}
	else if(ch1==' ')
	{
		//cout<<"�ո�"<<endl;
		//cout<<ch1<<endl;
		n++;
		ch1=a[n];
	}
	else if(ch1=='1'||ch1=='2'||ch1=='3'||ch1=='4'||ch1=='5'||ch1=='6'||ch1=='7'||ch1=='8'||ch1=='9')
	{
		//cout<<"��ʼ����SHUZI(a)"<<endl;
		//cout<<"ch1"<<ch1<<endl;
		//cout<<"( 1 ,"<<num<<")"<<endl;
		SHUZI(a);
		cout<<"( 1 ,"<<num<<")"<<endl;
		//cout<<num<<endl;
		
		 
	}

	else  if('a'<=ch1<='z')
	{
		//cout<<"��ʼ����important(a)"<<endl;
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
		cout<<"�в���ʶ��ķ���"<<endl;
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
	
	
	
	
	