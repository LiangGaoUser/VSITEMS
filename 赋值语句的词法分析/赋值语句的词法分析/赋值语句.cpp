/*#include <iostream>
#include <string>
#include "fuzhi.h"
using namespace std;
bool Puo(char *s);
int getsym(string s)//ÿ�η���һ�������ĵ��ʣ����������ֱ𣨱�ʶ��sym[ident]id[]������sym[number]
	//num[]�������sym[]�����sym[]��������wsym[0-12]13����//,char id[],int n,sym
{
	       // n=0;//�����ַ�����n���ַ�
			i=0;
			char ch;
			ch=s[n];
	        char cg;
			cg=ch;
	
	while(ch!='#')
	{
			
			if(ch==20)
			{
				cout<<"�ո�"<<endl;
				n++;
				ch=s[n];
				break;
			}
			if(cg>='a'&&cg<='z')
			{
				if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
				{
					 
						cout<<"-------"<<endl;
						cout<<ch<<endl;
					
						id[i]=ch;
						id[i+1]='\0';
						cout<<"id "<<id<<endl;
						cout<<"-------"<<endl;				
						
						if(Puo(id))
						{
							sym="ddd";
							n++;
							//cout<<id<<endl;
							break;
						}



						sym="ident ";
						i++;
						n++;
						ch=s[n];

				}

				else
				{
					if(ch<'a'||ch>'z')
					{
						sym="ident ";
						break;
					}
					id[i]=ch;
					cout<<ch<<endl;
					id[i+1]='\0';
					i++;
					sym="ident ";//����ѭ����Ϊ��ʶ��
					n++;
					ch=s[n];
				}


			}
			if(cg>='1'&&cg<='9')
			{
				id[i]=ch;
				id[i+1]='\0';
				//cout<<ch<<"** "<<id<<endl;
				n++;
				ch=s[n];
				i++;
				if(ch>='0'&&ch<='9')
				{
					id[i]=ch;
					id[i+1]='\0';
					//cout<<ch<<" 77"<<id<<endl;
					i++;
					n++;
					ch=s[n];
					sym="int2";
					if(ch<'0'||ch>'9')
					{
						num=atoi(id);
						cout<<num<<" ";
						break;
					}
					
				}
				else
				{
					sym="int3";
					num=atoi(id);
					cout<<num<<" ";
					break;

				}

			}
			




			if(cg==':')
			{
					n++;
					ch=s[n];
					if(ch=='=')
					{
						sym="becomes";				
						n++;
						break;						
					}
					else
					{
						sym="nul";
					}
			
				break;
			}

			if(cg=='<')
			{
					n++;
					ch=s[n];
					if(ch=='=')
					{
						sym="leq";
						n++;
						break;					
					}
					else
					{
						sym="les";
						n++;
						break;
					}
			}
			if(cg=='>')
			{
					n++;
					ch=s[n];
					if(ch=='=')
					{
						sym="geq";
						n++;
						break;					
					}
					else
					{
						sym="gtr";
						n++;
						break;
					}
			}		
			
			
			if(cg=='+')
			{
				sym="plus";
				n++;
				break;
			}
			if(cg=='-')
			{
				sym="minus";
				n++;
				break;
			}
				if(cg=='*')
			{
				sym="times";
				n++;
				break;
			}
				if(cg=='/')
			{
				sym="slash";
				n++;
				break;
			}
				if(cg=='#')
			{
				sym="plus";
				n++;
				break;
			}
				if(cg=='(')
			{
				sym="lparen";
				n++;
				break;
			}
				if(cg==')')
			{
				sym="lparen";
				n++;
				break;
			}
			if(cg==',')
			{
				sym="comma";
				n++;
				break;
			}
				if(cg==';')
			{
				sym="semicolon";
				n++;
				break;
			}
			if(cg=='.')
			{
				sym="period";
				n++;
				break;
			}
			if(cg=='=')
			{
				sym="eql";
				n++;
				break;
			}
			if(cg==' ')
			{
				//cout<<""<<endl;
				sym="null";
				n++;
				//ch=s[n];
				break;
			}
			

			
			








	}
	return 1;
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
}*/
/*int main()
{
	

	


	
	string a;//
	getline(cin,a);//
	cout<<a<<endl;
	while(n<a.length()-1)
	{
		getsym(a);
	cout<<sym<<endl;
	}
	
	system("pause");
}*/
	
	
	
	
	//cout<<%a[0]<<endl;
	//if(strcmp(a,b)==0)
	//{
	//cout<<"yes"<<endl;
	//}
	//char id[31];//��ʶ�����󳤶�Ϊ30���洢ident��ʶ����ֵ
	//int num;//�洢number�޷���������ֵ
	//char *b=new char[14];
	//b="1234";
	//cout<<b;
	//delete []b;
	//char *b={""};
	//cin>>b;
	//cout<<b[0]<<"dd";
	//char b[20];
	//cin>>b;
	//cout<<b<<"dd";//���ܶ���ո��пո񼴽���

/* char *b=new char[15];//ĩβ��'\0'
  char*d="var";
  cin>>b;
  if(strcmp(b,"var")==0)
  {
  cout<<b<<"al";
  }
  delete [] b;*/

/*char p[20];
cin>>p;
gets(p);
cout<<p<<endl;*/
	



	//string a;//
	//getline(cin,a);//
	//getsym(a);//�ǵü���#



	/*int b;
	while(true)
	{
		cin>>b;
		while(b>3)
		{
			cout<<"b>3"<<endl;
			cin>>b;
			if(b>100)
			{
				break;
			}

		}


	}*/
 // getsym("dosym#");
	//if(a[1]=='a')
	//{
	//	cout<<"a"<<endl;
	//}
	
	//cout<<a<<" "<<a[1]<<endl;
	//string a;
	//getline(cin,a);
	//cout<<a.length();

/*

	string a;//
	getline(cin,a);//
	cout<<a<<endl;
	char ch1=a[n];
	while(n<a.length()-1)
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
	}*/
	
