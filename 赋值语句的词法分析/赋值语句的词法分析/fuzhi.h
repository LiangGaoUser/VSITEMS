#pragma once
extern char *id=new char[31];//��ʶ�����󳤶�Ϊ30���洢ident��ʶ����ֵ
extern char *is=new char[31];//��ʶ�����󳤶�Ϊ30���洢ident��ʶ����ֵ//
extern int num;//�洢number�޷���������ֵ
extern int n=0;//s[n]
extern int i=0;//id[i]
extern int num=0;
extern char*sym=new char[31];
extern char* wsym[13]={"beginsym","callsym","constsym","dosym","endsym","ifsym","oddsym","procsym",
"readsym","thensym","varsym","whilesym","writesym"};












/*int getsym()//ÿ�η���һ�������ĵ��ʣ����������ֱ𣨱�ʶ��sym[ident]id[]������sym[number]
	//num[]�������sym[]�����sym[]��������wsym[0-12]13����//,char id[],int n,sym

{
	n=0;//�����ַ�����n���ַ�
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
/*int getsym(string s)//ÿ�η���һ�������ĵ��ʣ����������ֱ𣨱�ʶ��sym[ident]id[]������sym[number]
	//num[]�������sym[]�����sym[]��������wsym[0-12]13����//,char id[],int n,sym

{
	        n=0;//�����ַ�����n���ַ�
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
					if(Puo(id)==true)//�Ƿ�Ϊ������
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
			   sym="ident";//����ѭ����Ϊ��ʶ��
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
									sym="geq";//Plo��>�Ų�֪����ô��ʾ
									n++;
									break;
									return 0;
							}


					      }
						else
						{
							//���ַ�+��-��*��/��=����������[;],[,],[.],[(],[)]
							cout<<"��δ����"<<endl;
							

						}
					}
				}
	
		 }
   }

}*/