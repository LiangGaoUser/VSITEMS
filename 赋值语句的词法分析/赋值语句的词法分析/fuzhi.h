#pragma once
extern char *id=new char[31];//能识别的最大长度为30，存储ident标识符的值
extern char *is=new char[31];//能识别的最大长度为30，存储ident标识符的值//
extern int num;//存储number无符号整数的值
extern int n=0;//s[n]
extern int i=0;//id[i]
extern int num=0;
extern char*sym=new char[31];
extern char* wsym[13]={"beginsym","callsym","constsym","dosym","endsym","ifsym","oddsym","procsym",
"readsym","thensym","varsym","whilesym","writesym"};












/*int getsym()//每次返回一个独立的单词，包括单词种别（标识符sym[ident]id[]，数字sym[number]
	//num[]，运算符sym[]，界符sym[]，保留字wsym[0-12]13个）//,char id[],int n,sym

{
	n=0;//输入字符串第n个字符
	string s="aaaaa#aaaa";
	char ch;
		ch=s[0];
	while(ch!='#')
	{
			
			
		  //ch=s[n];
			while(ch=='a')
			{
				n++;
				cout<<n<<endl;
				
				ch=s[n];
				//if(ch='#')
				//{
				//	break;
				//	return 0;

				//
		

			}
	}
	return 0;
}*/
/*int getsym(string s)//每次返回一个独立的单词，包括单词种别（标识符sym[ident]id[]，数字sym[number]
	//num[]，运算符sym[]，界符sym[]，保留字wsym[0-12]13个）//,char id[],int n,sym

{
	        n=0;//输入字符串第n个字符
			char ch;
			ch=s[n];
	i=0;
	id=" ";
	while(ch!='#')
	{
			
			if(ch==' ')
			{
	
				n++;
				ch=s[n];
			}
			if(ch>='a'&&ch<='z')
			{
						cout<<ch<<endl;
					//strcpy(id,ch);
					id[i]=ch;
					id[i+1]='\0';
					cout<<"id "<<id<<" ";
					i++;
					n++;
					ch=s[n];
					//string sh(id);
					if(Puo(id)==true)//是否为保留字
					{
						n++;
						
						break;
						return 0;
					}
					for(int j=0;j<13;j++)
					{
						if(id==wsym[j])
						{
							n++;
							//sym=wsym[j];
							cout<<s<<endl;
							break;
							return 0;
						}
					}
					if(strcmp(id,"beginsym")==0||strcmp(id,"dosym")==0)
					{
						n++;
						cout<<id<<endl;
						break;
						return 0;

					}






						
				
			}
			else
			{
			   sym="ident";//跳出循环，为标识符
				n++;
				cout<<"ident"<<endl;
				break;
			}
				
			else 
			{
				if(ch==':')
				{
					n++;
					ch=s[n];
					if(ch=='=')
					{
						sym="becomes";
						n++;
						break;
						return 0;
					}
					else
					{
						sym="nul";
					}
				}
				else
				{
					if(ch=='<')
					{
						n++;
						ch=s[n];
						if(ch=='=')
						{
							sym="leq";
							n++;
							break;
							return 0;
						}
						else
						{
							sym="les";
							n++;
							break;
							return 0;
						}
					}
					else
					{
						if(ch=='>')
						{
							n++;
							ch=s[n];
							if(ch=='=')
							{
								sym="neq";
								n++;
								break;
								return 0;
						    }
							else
							{
									sym="geq";//Plo的>号不知道怎么表示
									n++;
									break;
									return 0;
							}


					      }
						else
						{
							//单字符+，-，*，/，=，（，），[;],[,],[.],[(],[)]
							cout<<"暂未处理"<<endl;
							

						}
					}
				}
	
		 }
   }

}*/