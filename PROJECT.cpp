#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<random>
#include<cstdio>
#include<stdint.h>
using namespace std;
int shoulder;
char acquire[30];
int ex;
class quiz
{
	int Qno,Ano;
	char question[500];
	char option1[100],option2[100],option3[100],option4[100],answer[100];
	public:
	void input()
	{
		cout<<"Enter the question no:";
		cin>>Qno;
		cout<<"Enter the question:";
		gets(question);
		cout<<"Enter option 1:";
		gets(option1);
		cout<<"Enter option 2:";
		gets(option2);
		cout<<"Enter option 3:";
		gets(option3);
		cout<<"Enter option 4:";
		gets(option4);
		cout<<"Enter the answer no:";
		cin>>Ano;
	}
	void output()
	{
		cout.setf(ios::left);
		cout<<"Q."<<question<<"\n";
		cout<<setw(2)<<"1)"<<setw(21)<<option1<<"\t"<<setw(2)<<"2)"<<setw(21)<<option2<<"\n";
		cout<<setw(2)<<"3)"<<setw(21)<<option3<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
	}
	void eliminator(int holder)
	{
		cout<<"Q."<<question<<"\n";
		if(Ano==1)
		{
			int flag=0;
			cout<<setw(2)<<"1)"<<setw(21)<<option1;
			if(holder==0)
			{
				cout<<"\t"<<setw(2)<<"2)"<<setw(21)<<option2;
				shoulder=2;
				flag=1;
			}
			if(holder==1&&flag==0)
			{
				cout<<"\n"<<setw(2)<<"3)"<<setw(21)<<option3;
				shoulder=3;
				flag=1;
			}
			if(holder==2&&flag==0)
			{
				cout<<"\n"<<setw(23)<<" "<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
				shoulder=4;
				flag=1;
			}
		}
		if(Ano==2)
		{
			int flag=0;
			if(holder==0)
			{
				cout<<setw(2)<<"1)"<<setw(21)<<option1<<"\t"<<setw(2)<<"2)"<<setw(21)<<option2;;
				shoulder=1;
				flag=1;
			}
			if(holder==1&&flag==0)
			{
				cout<<setw(23)<<" "<<"\t"<<setw(2)<<"2)"<<setw(21)<<option2<<"\n"<<setw(2)<<"3)"<<setw(21)<<option3;
				shoulder=3;
				flag=1;
			}
			if(holder==2&&flag==0)
			{
				cout<<setw(23)<<" "<<"/t"<<setw(2)<<"2)"<<setw(21)<<option2<<"\n"<<setw(23)<<" "<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
				shoulder=4;
				flag=1;
			}
		}
		if(Ano==3)
		{
			int flag=0;
			if(holder==0)
			{
				cout<<setw(2)<<"1)"<<setw(21)<<option1<<"\t"<<setw(23)<<" "<<"\n"<<setw(2)<<"3)"<<setw(21)<<option3;
				shoulder=1;
				flag=1;
			}
			if(holder==1&&flag==0)
			{
				cout<<setw(23)<<" "<<"\t"<<setw(2)<<"2)"<<setw(21)<<option2<<"\n"<<setw(2)<<"3)"<<setw(21)<<option3;
				shoulder=2;
				flag=1;
			}
			if(holder==2&&flag==0)
			{
				cout<<setw(23)<<" "<<"/t"<<setw(23)<<" "<<"\n"<<setw(2)<<"3)"<<setw(21)<<option3<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
				shoulder=4;
				flag=1;
			}

		}
		if(Ano==4)
		{
			int flag=0;
			int holder=random(3);
			if(holder==0)
			{
				cout<<setw(2)<<"1)"<<setw(21)<<option1<<"\t"<<setw(23)<<" "<<"\n"<<setw(23)<<" "<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
				shoulder=1;
				flag=1;
			}
			if(holder==1&&flag==0)
			{
				cout<<setw(23)<<" "<<"\t"<<setw(2)<<"2)"<<setw(21)<<option2<<"\n"<<setw(23)<<" "<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
				shoulder=2;
				flag=1;
			}
			if(holder==2&&flag==0)
			{
				cout<<setw(23)<<" "<<"/t"<<setw(23)<<"\n"<<setw(23)<<" "<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
				shoulder=3;
				flag=1;
			}
		}
	}
	void tchance(int pick)
	{
		cout<<"Q."<<question<<"\n";
		if(pick==1)
		{
			cout<<setw(23)<<" "<<"\t"<<setw(2)<<"2)"<<setw(21)<<option2;
			cout<<"\n"<<setw(2)<<"3)"<<setw(21)<<option3;
			cout<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
		}
		if(pick==2)
		{
			cout<<setw(2)<<"1)"<<setw(21)<<option1;
			cout<<"\n"<<setw(2)<<"3)"<<setw(21)<<option3;
			cout<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
		}
		if(pick==3)
		{
			cout<<setw(2)<<"1)"<<setw(21)<<option1;
			cout<<"\t"<<setw(2)<<"2)"<<setw(21)<<option2;
			cout<<"\n"<<setw(23)<<" "<<"\t"<<setw(2)<<"4)"<<setw(21)<<option4;
		}
		if(pick==4)
		{
			cout<<setw(2)<<"1)"<<setw(21)<<option1;
			cout<<"\t"<<setw(2)<<"2)"<<setw(21)<<option2;
			cout<<"\n"<<setw(2)<<"3)"<<setw(21)<<option3;
		}
	}
	int getQno()
	{
		return Qno;
	}
	int getAno()
	{
		return Ano;
	}
}q;
class chemical
{
	int group,period,atno;
	float mp,bp,van,atmass;
	char name[50],symb[15],config[180],block,phase[10],dod[15];
	public:
	void input()
	{
		cout<<"\nEnter the name of the element:";
		gets(name);
		cout<<"\nEnter the chemical symbol of the element:";
		gets(symb);
		cout<<"\nEnter the electronic configuration of the element:";
		gets(config);
		cout<<"\nEnter the group of the element:";
		cin>>group;
		cout<<"\nEnter the period number of the element:";
		cin>>period;
		cout<<"\nEnter the block of the element:";
		cin>>block;
		cout<<"\nEnter the phase at STP:";
		gets(phase);
		cout<<"\nEnter the melting point(K):";
		cin>>mp;
		cout<<"\nEnter the boiling point(K):";
		cin>>bp;
		cout<<"\nEnter the van der waals radius(pm):";
		cin>>van;
		cout<<"\nEnter the atomic mass of the element:";
		cin>>atmass;
		cout<<"\nEnter the atomic number of the element:";
		cin>>atno;
		cout<<"\nEnter the date of discovery of the element:";
		cin>>dod;
	}
	void show()
	{
		cout<<"\nthe name of the element:";
		cout<<name;
		cout<<"\nthe chemical symbol of the element:";
		cout<<symb;
		cout<<"\nthe electronic configuration of the element:";
		cout<<config;
		cout<<"\nthe group of the element:";
		cout<<group;
		cout<<"\nthe period number of the element:";
		cout<<period;
		cout<<"\nthe block of the element:";
		cout<<block;
		cout<<"\nthe phase at STP:";
		cout<<phase;
		cout<<"\nthe melting point(K):";
		cout<<mp;
		cout<<"\nthe boiling point(K):";
		cout<<bp;
		cout<<"\nthe van der waals radius(pm):";
		cout<<van;
		cout<<"\nthe atomic mass of the element:";
		cout<<atmass;
		cout<<"\nthe atomic number of the element:";
		cout<<atno;
		cout<<"\nthe date of discovery of the element:";
		cout<<dod;
		cout<<"\n"<<"\n";
	}
	int getatno()
	{
		return atno;
	}
	char*getname()
	{
		return name;
	}
	char*getsymb()
	{
		return symb;
	}
}c;
void encrypt(char password[20])
{
	char a;
	cout<<"\nEnter password:";
	for(int i=0;;)
	{
		a=getch();
		if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
		{
			password[i]=a;
			i++;
			cout<<"*";
		}
		if(a=='\b'&&i>=1)
		{
			cout<<"\b \b";
			--i;
		}
		if(a=='\r')
		{
			password[i]='\0';
			break;
		}
	}
}
class acc
{
	char username[30];
	char pass[30];
	public:
	void input()
	{
		cout<<"enter username : ";
		gets(username);
		cout<<"\n________________________________________________________________________________";
		encrypt(pass);
	}
	void output()
	{
		cout<<"username : "<<username;
		cout<<"\n";
		cout<<"password : "<<pass<<"\n\n";

	}
	char*get_username()
	{
		return username;
	}
	char*get_pass()
	{
		return pass;
	}
}adm,user;
class feed
{
	char name[30];
	char comment[500];
	public:
	void input()
	{
		cout<<"Enter a name:";
		gets(name);
		cout<<"Enter the feedback:";
		gets(comment);
		cout<<"\n\nThankyou for your feedback!";
		getch();
	}
	void output()
	{
		cout<<"\n\nName:";
		cout<<name;
		cout<<"\nFeedback:";
		cout<<comment;
	}
}fd;
struct highs
{
	char name[30];
	int score;
}hs;
void about()
{
	L:
	clrscr();
	char ch;
	int choose;
	cout<<"\t\t\t    ABOUT THE PERIODIC TABLE";
	cout<<"\n________________________________________________________________________________\n";
	ifstream fin;
	fin.open("iypt.txt");
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
	cout<<"\n________________________________________________________________________________\n";
	fin.close();
	cout<<"\n1.What is the periodic table?";
	cout<<"\n2.Will the periodic table ever be complete?";
	cout<<"\n3.Structure of the periodic table";
	cout<<"\n4.Classification in the periodic table";
	cout<<"\n5.Some chemistry jokes";
	cout<<"\n6.Return to Main menu";
	cout<<"\nEnter your choice:";
	cin>>choose;
	if(choose==1)
	{
		clrscr();
		cout<<"\t\t\t   What is the periodic table?";
		cout<<"\n________________________________________________________________________________\n";
		ifstream fin;
		fin.open("intro.txt");
		while(!fin.eof())
		{
			fin.get(ch);
			cout<<ch;
		}
		cout<<"\n________________________________________________________________________________\n";
		fin.close();
		cout<<"\n\n-------------------------------------------------------------------\n";
		cout<<"\nPress any key to continue";
		cout<<"\n\n-------------------------------------------------------------------\n";
		getch();
		goto L;
	}
	if(choose==2)
	{
		clrscr();
		cout<<"\t\t    Will the periodic table ever be complete?";
		cout<<"\n________________________________________________________________________________\n";
		ifstream fin;
		fin.open("will.txt");
		while(!fin.eof())
		{
			fin.get(ch);
			cout<<ch;
		}
		cout<<"\n________________________________________________________________________________\n";
		fin.close();
		cout<<"\n\n-------------------------------------------------------------------\n";
		cout<<"\nPress any key to continue";
		cout<<"\n\n-------------------------------------------------------------------\n";
		getch();
		goto L;
	}
	if(choose==3)
	{
		clrscr();
		cout<<"\t\t\t  Structure of the periodic table";
		cout<<"\n________________________________________________________________________________\n";
		ifstream fin;
		fin.open("struc.txt");
		if(!fin)
		{
			cout<<"Error";
			getch();
			exit(0);
		}
		while(!fin.eof())
		{
			fin.get(ch);
			cout<<ch;
		}
		cout<<"\n________________________________________________________________________________";
		fin.close();
		cout<<"\n-------------------------------------------------------------------\n";
		cout<<"\nPress any key to continue";
		cout<<"\n\n-------------------------------------------------------------------";
		getch();
		goto L;
	}
	if(choose==4)
	{
		clrscr();
		cout<<"\t\t\tClassification in the periodic table";
		cout<<"\n________________________________________________________________________________\n";
		ifstream fin;
		fin.open("chem.txt");
		while(!fin.eof())
		{
			fin.get(ch);
			cout<<ch;
		}
		cout<<"\n________________________________________________________________________________\n";
		fin.close();
		cout<<"\n-------------------------------------------------------------------\n";
		cout<<"\nPress any key to continue";
		cout<<"\n\n-------------------------------------------------------------------";
		getch();
		goto L;
	}
	if(choose==5)
	{
		clrscr();
		cout<<"\t\t\t    Some chemistry jokes";
		cout<<"\n________________________________________________________________________________";
		ifstream fin;
		fin.open("joke.txt");
		while(!fin.eof())
		{
			fin.get(ch);
			cout<<ch;
		}
		fin.close();
		cout<<"\n\n-------------------------------------------------------------------\n";
		cout<<"\nPress any key to continue";
		cout<<"\n\n-------------------------------------------------------------------\n";
		getch();
		goto L;
	}
	if(choose==6)
	{
	}
}
void addE1()
{
	fstream f1;
	f1.open("EQuiz.dat",ios::app|ios::binary);
	q.input();
	f1.write((char*)&q,sizeof(q));
	cout<<"Question successfully added!";
	f1.close();
}
void deleteE1()
{
	fstream f;
	int did;
	cout<<"Enter the Question no of the question to be deleted:";
	cin>>did;
	ofstream fout;
	fout.open("new1.dat",ios::out|ios::binary);
	f.open("EQUIZ.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&q,sizeof(q)))
		{
			if(did!=q.getQno())
			{
				fout.write((char*)&q,sizeof(q));
			}
			if(did==q.getQno())
			{
				cout<<"Question found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("EQUIZ.dat");
	rename("new1.dat","EQUIZ.dat");
}
void modifyE1()
{
	fstream f;
	int flag=0;
	int did;
	cout<<"Enter the question no of the question to be modified:";
	cin>>did;
	f.open("EQUIZ.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&q,sizeof(q));
		while(!f.eof())
		{
			if(did==q.getQno())
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Question found\nEnter the new Question:"<<endl;
				q.input();
				f.seekp(f.tellg() - sizeof(q));
				f.write((char*)&q, sizeof(q));
			}
			f.read((char*)&q,sizeof(q));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void addE2()
{
	fstream f1;
	f1.open("EQuiz1.dat",ios::app|ios::binary);
	q.input();
	f1.write((char*)&q,sizeof(q));
	cout<<"Question successfully added!";
	f1.close();
}
void deleteE2()
{
	fstream f;
	int did;
	cout<<"Enter the Question no of the question to be deleted:";
	cin>>did;
	ofstream fout;
	fout.open("new1.dat",ios::out|ios::binary);
	f.open("EQUIZ1.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&q,sizeof(q)))
		{
			if(did!=q.getQno())
			{
				fout.write((char*)&q,sizeof(q));
			}
			if(did==q.getQno())
			{
				cout<<"Question found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("EQUIZ1.dat");
	rename("new1.dat","EQUIZ1.dat");
}
void modifyE2()
{
	fstream f;
	int flag=0;
	int did;
	cout<<"Enter the question no of the question to be modified:";
	cin>>did;
	f.open("EQUIZ1.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&q,sizeof(q));
		while(!f.eof())
		{
			if(did==q.getQno())
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Question found\nEnter the new Question:"<<endl;
				q.input();
				f.seekp(f.tellg() - sizeof(q));
				f.write((char*)&q, sizeof(q));
			}
			f.read((char*)&q,sizeof(q));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void addE3()
{
	fstream f1;
	f1.open("EQuiz2.dat",ios::app|ios::binary);
	q.input();
	f1.write((char*)&q,sizeof(q));
	cout<<"Question succesfully added!";
	f1.close();
}
void modifyE3()
{
	fstream f;
	int flag=0;
	int did;
	cout<<"Enter the question no of the question to be modified:";
	cin>>did;
	f.open("EQUIZ2.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&q,sizeof(q));
		while(!f.eof())
		{
			if(did==q.getQno())
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Question found\nEnter the new Question:"<<endl;
				q.input();
				f.seekp(f.tellg() - sizeof(q));
				f.write((char*)&q, sizeof(q));
			}
			f.read((char*)&q,sizeof(q));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void deleteE3()
{
	fstream f;
	int did;
	cout<<"Enter the Question no of the question to be deleted:";
	cin>>did;
	ofstream fout;
	fout.open("new1.dat",ios::out|ios::binary);
	f.open("EQUIZ2.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&q,sizeof(q)))
		{
			if(did!=q.getQno())
			{
				fout.write((char*)&q,sizeof(q));
			}
			if(did==q.getQno())
			{
				cout<<"Question found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("EQUIZ2.dat");
	rename("new1.dat","EQUIZ2.dat");
}

void addM1()
{
	fstream f1;
	f1.open("MQuiz.dat",ios::app|ios::binary);
	q.input();
	f1.write((char*)&q,sizeof(q));
	cout<<"Question successfully added!";
	f1.close();
}
void deleteM1()
{
	fstream f;
	int did;
	cout<<"Enter the Question no of the question to be deleted:";
	cin>>did;
	ofstream fout;
	fout.open("new1.dat",ios::out|ios::binary);
	f.open("MQUIZ.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&q,sizeof(q)))
		{
			if(did!=q.getQno())
			{
				fout.write((char*)&q,sizeof(q));
			}
			if(did==q.getQno())
			{
				cout<<"Question found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("MQUIZ.dat");
	rename("new1.dat","MQUIZ.dat");
}
void modifyM1()
{
	fstream f;
	int flag=0;
	int did;
	cout<<"Enter the question no of the question to be modified:";
	cin>>did;
	f.open("MQUIZ.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&q,sizeof(q));
		while(!f.eof())
		{
			if(did==q.getQno())
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Question found\nEnter the new Question:"<<endl;
				q.input();
				f.seekp(f.tellg() - sizeof(q));
				f.write((char*)&q, sizeof(q));
			}
			f.read((char*)&q,sizeof(q));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void addM2()
{
	fstream f1;
	f1.open("MQuiz1.dat",ios::app|ios::binary);
	q.input();
	f1.write((char*)&q,sizeof(q));
	cout<<"Question successfully added!";
	f1.close();
}
void deleteM2()
{
	fstream f;
	int did;
	cout<<"Enter the Question no of the question to be deleted:";
	cin>>did;
	ofstream fout;
	fout.open("new1.dat",ios::out|ios::binary);
	f.open("MQUIZ1.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&q,sizeof(q)))
		{
			if(did!=q.getQno())
			{
				fout.write((char*)&q,sizeof(q));
			}
			if(did==q.getQno())
			{
				cout<<"Question found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("MQUIZ1.dat");
	rename("new1.dat","MQUIZ1.dat");
}
void modifyM2()
{
	fstream f;
	int flag=0;
	int did;
	cout<<"Enter the question no of the question to be modified:";
	cin>>did;
	f.open("MQUIZ1.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&q,sizeof(q));
		while(!f.eof())
		{
			if(did==q.getQno())
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Question found\nEnter the new Question:"<<endl;
				q.input();
				f.seekp(f.tellg() - sizeof(q));
				f.write((char*)&q, sizeof(q));
			}
			f.read((char*)&q,sizeof(q));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void addM3()
{
	fstream f1;
	f1.open("MQuiz2.dat",ios::app|ios::binary);
	q.input();
	f1.write((char*)&q,sizeof(q));
	cout<<"Question succesfully added!";
	f1.close();
}
void deleteM3()
{
	fstream f;
	int did;
	cout<<"Enter the Question no of the question to be deleted:";
	cin>>did;
	ofstream fout;
	fout.open("new1.dat",ios::out|ios::binary);
	f.open("MQUIZ2.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&q,sizeof(q)))
		{
			if(did!=q.getQno())
			{
				fout.write((char*)&q,sizeof(q));
			}
			if(did==q.getQno())
			{
				cout<<"Question found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("MQUIZ2.dat");
	rename("new1.dat","MQUIZ.dat");
}
void modifyM3()
{
	fstream f;
	int flag=0;
	int did;
	cout<<"Enter the question no of the question to be modified:";
	cin>>did;
	f.open("MQUIZ2.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&q,sizeof(q));
		while(!f.eof())
		{
			if(did==q.getQno())
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Question found\nEnter the new Question:"<<endl;
				q.input();
				f.seekp(f.tellg() - sizeof(q));
				f.write((char*)&q, sizeof(q));
			}
			f.read((char*)&q,sizeof(q));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void addH1()
{
	fstream f1;
	f1.open("HQuiz.dat",ios::app|ios::binary);
	q.input();
	f1.write((char*)&q,sizeof(q));
	cout<<"Question successfully added!";
	f1.close();
}
void deleteH1()
{
	fstream f;
	int did;
	cout<<"Enter the Question no of the question to be deleted:";
	cin>>did;
	ofstream fout;
	fout.open("new1.dat",ios::out|ios::binary);
	f.open("HQUIZ.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&q,sizeof(q)))
		{
			if(did!=q.getQno())
			{
				fout.write((char*)&q,sizeof(q));
			}
			if(did==q.getQno())
			{
				cout<<"Question found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("HQUIZ.dat");
	rename("new1.dat","HQUIZ.dat");
}
void modifyH1()
{
	fstream f;
	int flag=0;
	int did;
	cout<<"Enter the question no of the question to be modified:";
	cin>>did;
	f.open("HQUIZ.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&q,sizeof(q));
		while(!f.eof())
		{
			if(did==q.getQno())
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Question found\nEnter the new Question:"<<endl;
				q.input();
				f.seekp(f.tellg() - sizeof(q));
				f.write((char*)&q, sizeof(q));
			}
			f.read((char*)&q,sizeof(q));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void addH2()
{
	fstream f1;
	f1.open("HQuiz1.dat",ios::app|ios::binary);
	q.input();
	f1.write((char*)&q,sizeof(q));
	cout<<"Question succesfully added!";
	f1.close();
}
void deleteH2()
{
	fstream f;
	int did;
	cout<<"Enter the Question no of the question to be deleted:";
	cin>>did;
	ofstream fout;
	fout.open("new1.dat",ios::out|ios::binary);
	f.open("HQUIZ1.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&q,sizeof(q)))
		{
			if(did!=q.getQno())
			{
				fout.write((char*)&q,sizeof(q));
			}
			if(did==q.getQno())
			{
				cout<<"Question found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("HQUIZ1.dat");
	rename("new1.dat","HQUIZ1.dat");
}
void modifyH2()
{
	fstream f;
	int flag=0;
	int did;
	cout<<"Enter the question no of the question to be modified:";
	cin>>did;
	f.open("HQUIZ1.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&q,sizeof(q));
		while(!f.eof())
		{
			if(did==q.getQno())
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Question found\nEnter the new Question:"<<endl;
				q.input();
				f.seekp(f.tellg() - sizeof(q));
				f.write((char*)&q, sizeof(q));
			}
			f.read((char*)&q,sizeof(q));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void addH3()
{
	fstream f1;
	f1.open("HQuiz2.dat",ios::app|ios::binary);
	q.input();
	f1.write((char*)&q,sizeof(q));
	cout<<"Question succesfully added!";
	f1.close();
}
void deleteH3()
{
	fstream f;
	int did;
	cout<<"Enter the Question no of the question to be deleted:";
	cin>>did;
	ofstream fout;
	fout.open("new1.dat",ios::out|ios::binary);
	f.open("HQUIZ2.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&q,sizeof(q)))
		{
			if(did!=q.getQno())
			{
				fout.write((char*)&q,sizeof(q));
			}
			if(did==q.getQno())
			{
				cout<<"Record found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("HQUIZ2.dat");
	rename("new1.dat","HQUIZ2.dat");
}
void modifyH3()
{
	fstream f;
	int flag=0;
	int did;
	cout<<"Enter the question no of the question to be modified:";
	cin>>did;
	f.open("HQUIZ2.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&q,sizeof(q));
		while(!f.eof())
		{
			if(did==q.getQno())
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Question found\nEnter the new Question:"<<endl;
				q.input();
				f.seekp(f.tellg() - sizeof(q));
				f.write((char*)&q, sizeof(q));
			}
			f.read((char*)&q,sizeof(q));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void all(int correct)
{
	if(correct==10)
	{
		cout<<"\n\n\t\t\tYou answered all questions correctly!";
	}
	else
	{
		cout<<"\n\n\t\t\tYou answered "<<correct<<"/10 questions correctly";
	}
}
int num;
int o=0;
int g[30];
void highscoreE()
{
	int n=0;
	fstream f;
	f.open("highE.dat",ios::app|ios::binary);
	f.write((char*)&hs,sizeof(hs));
	f.close();
	fstream fin;
	fin.open("highE.dat",ios::in|ios::binary);
	while(fin.read((char*)&hs,sizeof(hs)))
	{
		n++;
	}
	int i=0;
	fin.close();
	fstream fin1;
	fin1.open("highE.dat",ios::in|ios::binary);
	while(fin1.read((char*)&hs,sizeof(hs)))
	{
		g[i]=hs.score;
		i++;
	}
	int temp;
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(g[i]<g[j])
			{
				temp=g[i];
				g[i]=g[j];
				g[j]=temp;
			}
		}
	}
	i=0;
	num=n;
	o=1;
	fin1.close();
}
void displayHE()
{
	int a=1;
	int n=0;
	clrscr();
	cout<<"\t\t\t\tHIGHSCORES - EASY\n";
	cout<<"\n________________________________________________________________________________";
	if(o==1)
	{
		fstream fin2;
		for(int i=0;i<num;i++)
		{
			fin2.open("highE.dat",ios::in|ios::binary);
			while(fin2.read((char*)&hs,sizeof(hs)))
			{
				if(g[i]==hs.score)
				{
					cout<<a<<")Name:"<<hs.name<<"\n";
					cout<<"  Score:"<<hs.score<<"\n";
					a++;
					break;
				}
			}
			fin2.close();
		}
	}
	else
	{
		fstream fin;
		fin.open("highE.dat",ios::in|ios::binary);
		while(fin.read((char*)&hs,sizeof(hs)))
		{
			n++;
		}
		int i=0;
		fin.close();
		fstream fin1;
		fin1.open("highE.dat",ios::in|ios::binary);
		while(fin1.read((char*)&hs,sizeof(hs)))
		{
			g[i]=hs.score;
			i++;
		}
		fin1.close();
		int temp;
		for(i=0;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(g[i]<g[j])
				{
					temp=g[i];
					g[i]=g[j];
					g[j]=temp;
				}
			}
		}
		fstream fin2;
		for(i=0;i<n;i++)
		{
			fin2.open("highE.dat",ios::in|ios::binary);
			while(fin2.read((char*)&hs,sizeof(hs)))
			{
				if(g[i]==hs.score)
				{
					cout<<a<<")Name:"<<hs.name<<"\n";
					cout<<"  Score:"<<hs.score<<"\n";
					a++;
					break;
				}
			}
			fin2.close();
		}
	}
	if(n==0&&o!=1)
	{
		cout<<"\n\n\t\t\tNo highscores to display!";
	}
	cout<<"\n\n-------------------------------------------------------------------\n";
	cout<<"\nPress any key to continue";
	cout<<"\n\n-------------------------------------------------------------------\n";
}
int t=0;
void highscoreM()
{
	int n=0;
	fstream f;
	f.open("highM.dat",ios::app|ios::binary);
	f.write((char*)&hs,sizeof(hs));
	f.close();
	fstream fin;
	fin.open("highscoreM.dat",ios::in|ios::binary);
	while(fin.read((char*)&hs,sizeof(hs)))
	{
		n++;
	}
	int i=0;
	fin.close();
	fstream fin1;
	fin1.open("highM.dat",ios::in|ios::binary);
	while(fin1.read((char*)&hs,sizeof(hs)))
	{
		g[i]=hs.score;
		i++;
	}
	int temp;
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(g[i]<g[j])
			{
				temp=g[i];
				g[i]=g[j];
				g[j]=temp;
			}
		}
	}
	i=0;
	num=n;
	t=1;
	fin1.close();
}
void displayHM()
{
	int a=1;
	int n=0;
	clrscr();
	cout<<"\t\t\t\tHIGHSCORES - MEDIUM\n";
	cout<<"\n________________________________________________________________________________";
	if(o==1)
	{
		fstream fin2;
		for(int i=0;i<num;i++)
		{
			fin2.open("highM.dat",ios::in|ios::binary);
			while(fin2.read((char*)&hs,sizeof(hs)))
			{
				if(g[i]==hs.score)
				{
					cout<<a<<")Name:"<<hs.name<<"\n";
					cout<<"  Score:"<<hs.score<<"\n";
					a++;
					break;
				}
			}
			fin2.close();
		}
	}
	else
	{
		fstream fin;
		fin.open("highM.dat",ios::in|ios::binary);
		while(fin.read((char*)&hs,sizeof(hs)))
		{
			n++;
		}
		int i=0;
		fin.close();
		fstream fin1;
		fin1.open("highM.dat",ios::in|ios::binary);
		while(fin1.read((char*)&hs,sizeof(hs)))
		{
			g[i]=hs.score;
			i++;
		}
		fin1.close();
		int temp;
		for(i=0;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(g[i]<g[j])
				{
					temp=g[i];
					g[i]=g[j];
					g[j]=temp;
				}
			}
		}
		fstream fin2;
		for(i=0;i<n;i++)
		{
			fin2.open("highM.dat",ios::in|ios::binary);
			while(fin2.read((char*)&hs,sizeof(hs)))
			{
				if(g[i]==hs.score)
				{
					cout<<a<<")Name:"<<hs.name<<"\n";
					cout<<"  Score:"<<hs.score<<"\n";
					a++;
					break;
				}
			}
			fin2.close();
		}
	}
	if(n==0&&t!=1)
	{
		cout<<"\n\n\t\t\tNo highscores to display!";
	}
	cout<<"\n\n-------------------------------------------------------------------\n";
	cout<<"\nPress any key to continue";
	cout<<"\n\n-------------------------------------------------------------------\n";

}
int r=0;
void highscoreH()
{
	int n=0;
	fstream f;
	f.open("highH.dat",ios::app|ios::binary);
	f.write((char*)&hs,sizeof(hs));
	f.close();
	fstream fin;
	fin.open("highH.dat",ios::in|ios::binary);
	while(fin.read((char*)&hs,sizeof(hs)))
	{
		n++;
	}
	int i=0;
	fin.close();
	fstream fin1;
	fin1.open("highH.dat",ios::in|ios::binary);
	while(fin1.read((char*)&hs,sizeof(hs)))
	{
		g[i]=hs.score;
		i++;
	}
	int temp;
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(g[i]<g[j])
			{
				temp=g[i];
				g[i]=g[j];
				g[j]=temp;
			}
		}
	}
	i=0;
	num=n;
	r=1;
	fin1.close();
}
void displayHH()
{
	int a=1;
	int n=0;
	clrscr();
	cout<<"\t\t\t\tHIGHSCORES - HARD\n";
	cout<<"\n________________________________________________________________________________";
	if(r==1)
	{
		fstream fin2;
		for(int i=0;i<num;i++)
		{
			fin2.open("highH.dat",ios::in|ios::binary);
			while(fin2.read((char*)&hs,sizeof(hs)))
			{
				if(g[i]==hs.score)
				{
					cout<<a<<")Name:"<<hs.name<<"\n";
					cout<<"  Score:"<<hs.score<<"\n";
					a++;
					break;
				}
			}
			fin2.close();
		}
	}
	else
	{
		fstream fin;
		fin.open("highH.dat",ios::in|ios::binary);
		while(fin.read((char*)&hs,sizeof(hs)))
		{
			n++;
		}
		int i=0;
		fin.close();
		fstream fin1;
		fin1.open("highH.dat",ios::in|ios::binary);
		while(fin1.read((char*)&hs,sizeof(hs)))
		{
			g[i]=hs.score;
			i++;
		}
		fin1.close();
		int temp;
		for(i=0;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(g[i]<g[j])
				{
					temp=g[i];
					g[i]=g[j];
					g[j]=temp;
				}
			}
		}
		fstream fin2;
		for(i=0;i<n;i++)
		{
			fin2.open("highH.dat",ios::in|ios::binary);
			while(fin2.read((char*)&hs,sizeof(hs)))
			{
				if(g[i]==hs.score)
				{
					cout<<a<<")Name:"<<hs.name<<"\n";
					cout<<"  Score:"<<hs.score<<"\n";
					a++;
					break;
				}
			}
			fin2.close();
		}
	}
	if(n==0&&r!=1)
	{
		cout<<"\n\n\t\t\tNo highscores to display!";
	}
	cout<<"\n\n-------------------------------------------------------------------\n";
	cout<<"\nPress any key to continue";
	cout<<"\n\n-------------------------------------------------------------------\n";

}
void analyze(int score)
{
	if(score>=35)
	{
		cout<<"\n\n\t\t\tGREAT!";
	}
	if(score>=20&&score<35)
	{
		cout<<"\n\n\t\t\tGOOD!";
	}
	if(score>=0&&score<20)
	{
		cout<<"\n\n\t\t\tPOOR!";
	}
}
void display1()
{
	P:
	int no;
	ex=0;
	int elno=2;
	int cno=1;
	int tno=2;
	int correct=0;
	char file[30];
	ifstream fin;
	ofstream fout;
	fin.open("text.txt");
	fin>>no;
	cout<<no;
	fin.close();
	if(no==1)
	{
		fout.open("text.txt");
		strcpy(file,"MQUIZ.DAT");
		fout<<"2";
		fout.close();
	}
	if(no==2)
	{
		fout.open("text.txt");
		strcpy(file,"MQUIZ1.DAT");
		fout<<"3";
		fout.close();
	}
	if(no==3)
	{
		fout.open("text.txt");
		strcpy(file,"MQUIZ2.DAT");
		fout<<"1";
		fout.close();
	}
	int score=0;
	int n=1;

	//for(int i=1;i<=3;i++)
	//{
	fstream f;
	f.open(file,ios::in|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	while(f.read((char*)&q,sizeof(q)))
	{
		int flag=0;
		if(n==q.getQno())
		{
			n++;
			H:
			clrscr();
			cout<<"\t\t\t\t    QUIZ - MEDIUM";
			cout<<"\nQuestion "<<n-1;
			cout<<"\n______________________________________________________________________\n";
			q.output();
			cout<<"\n______________________________________________________________________\n";
			cout<<"\n5)Eliminator("<<elno<<" left)  6)Computer answer("<<cno<<" left)  7)Two chances("<<tno<<" left)\n";
			cout<<"\n8)Exit quiz";
			int pick;
			cout<<"\nEnter the correct option:";
			cin>>pick;
			if(pick>=1&&pick<=4)
			{
				flag=1;
				if(pick==q.getAno())
				{
					score=score+5;
					correct++;
					cout<<"\nCorrect answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
				}
				else
				{
					cout<<"\nWrong answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
				}
			}
			if(pick==5)
			{
				if(elno!=0)
				{
					elno--;
					randomize;
					int holder=random(3);
					O:
					clrscr();
					cout<<"\t\t\t\t    QUIZ";
					cout<<"\nQuestion "<<n-1;
					cout<<"\n______________________________________________________________________\n";
					q.eliminator(holder);
					cout<<"\n______________________________________________________________________\n";
					int pick;
					cout<<"\nEnter the correct option:";
					cin>>pick;
					if(pick>=1&&pick<=4)
					{
						flag=1;
						if(pick==q.getAno())
						{
							score=score+5;
							correct++;
							cout<<"\nCorrect answer!!";
							cout<<"\n\n-------------------------------------------------------------------\n";
							cout<<"\nPress any key to continue";
							cout<<"\n\n-------------------------------------------------------------------\n";
						}
						else
						{
							if(pick!=shoulder||pick>4)
							{
								cout<<"Enter from the given options!";
								cout<<"\n\n-------------------------------------------------------------------\n";
								cout<<"\nPress any key to continue";
								cout<<"\n\n-------------------------------------------------------------------\n";
								getch();
								goto O;
							}
							else if(pick==shoulder)
							{
								cout<<"\nWrong answer!!";
								cout<<"\n\n-------------------------------------------------------------------\n";
								cout<<"\nPress any key to continue";
								cout<<"\n\n-------------------------------------------------------------------\n";
							}
						}
					}
				}
				else if(elno==0)
				{
					cout<<"\n\t\t\tSorry!! You used up all your eliminators!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					getch();
					goto H;
				}
			}
			if(pick==6)
			{
				flag=1;
				if(cno!=0)
				{
					cno--;
					clrscr();
					cout<<"\t\t\t\t    QUIZ";
					cout<<"\nQuestion "<<n-1;
					cout<<"\n______________________________________________________________________\n";
					q.output();
					cout<<"\n______________________________________________________________________\n";
					cout<<"\nEnter the correct option:"<<q.getAno();
					cout<<"\n\nCorrect answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					score=score+5;
					correct++;
				}
				else if(cno==0)
				{
					cout<<"\n\t\tSorry!! You used up Computer answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					getch();
					goto H;
				}
			}
			if(pick==7)
			{
				flag=1;
				if(tno!=0)
				{
					tno--;
					clrscr();
					cout<<"\t\t\t\t    QUIZ";
					cout<<"\nQuestion "<<n-1;
					cout<<"\n______________________________________________________________________\n";
					q.output();
					cout<<"\n______________________________________________________________________\n";
					int pick;
					cout<<"\nEnter the correct option:";
					cin>>pick;
					if(pick>=1&&pick<=4)
					{
						flag=1;
						if(pick==q.getAno())
						{
							score=score+5;
							correct++;
							cout<<"\nCorrect answer!!";
							cout<<"\n\n-------------------------------------------------------------------\n";
							cout<<"\nPress any key to continue";
							cout<<"\n\n-------------------------------------------------------------------\n";
						}
						if(pick!=q.getAno())
						{
							clrscr();
							int pice=0;
							F:
							if(pice==1)
							{
								clrscr();
							}
							cout<<"\t\t\t\t    QUIZ";
							cout<<"\nQuestion "<<n-1;
							cout<<"\n______________________________________________________________________\n";
							q.tchance(pick);
							cout<<"\n______________________________________________________________________\n";
							cout<<"\nEnter the correct option:";
							int choose;
							cin>>choose;
							if(pick>=1&&pick<=4)
							{
								if(choose==q.getAno())
								{
									score=score+5;
									correct++;
									cout<<"\nCorrect answer!!";
									cout<<"\n\n-------------------------------------------------------------------\n";
									cout<<"\nPress any key to continue";
									cout<<"\n\n-------------------------------------------------------------------\n";
								}
								else
								{
									if(choose==pick||choose>4)
									{
										cout<<"Enter from the given options!";
										pice=1;
										cout<<"\n\n-------------------------------------------------------------------\n";
										cout<<"\nPress any key to continue";
										cout<<"\n\n-------------------------------------------------------------------\n";
										getch();
										goto F;
									}
									else
									{
										cout<<"\nWrong answer!!";
										cout<<"\n\n-------------------------------------------------------------------\n";
										cout<<"\nPress any key to continue";
										cout<<"\n\n-------------------------------------------------------------------\n";
									}
								}
							}
						}
					}
				}
				else if(tno==0)
				{
					cout<<"Sorry!! You used up your Two chances";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					getch();
					goto H;
				}
			}
			if(pick==8)
			{
				flag=1;
				char ch;
				cout<<"\nAre you sure you want to exit the Quiz?(y/n):";
				cin>>ch;
				if(ch=='y')
				{
					ex=1;
					goto e;
				}
				if(ch=='n')
				{
					goto H;
				}
			}
			if(flag==0)
			{
				cout<<"\nEnter value from 1 to 8!!";
				cout<<"\n\n-------------------------------------------------------------------\n";
				cout<<"\nPress any key to continue";
				cout<<"\n\n-------------------------------------------------------------------\n";
				getch();
				goto H;
			}
			getch();
		}

	}
	f.close();
	//}
	strcpy(hs.name,acquire);
	hs.score=score;
	highscoreM();
	I:
	clrscr();
	int ch;
	cout<<"\t\t\t\t    QUIZ";
	cout<<"\n\n\n______________________________________________________________________________";
	analyze(score);
	cout<<"\n\n\t\t\tYour score is:"<<score<<"/50";
	all(correct);
	cout<<"\n\n______________________________________________________________________________";
	cout<<"\n\n\t\t\t1.Play Again";
	cout<<"\n\t\t\t2.Return to Main Menu";
	cout<<"\n\t\t\tEnter your choice:";
	cin>>ch;
	if(ch==1)
	{
		goto P;
	}
	if(ch==2)
	{
	}
	if(ch!=1&&ch!=2)
	{
		cout<<"\n\n\t\t\tEnter from the given options!!";
		getch();
		goto I;
	}
	e:
}
void display2()
{
	P:
	int no;
	ex=0;
	int elno=2;
	int cno=1;
	int tno=2;
	int correct=0;
	char file[30];
	ifstream fin;
	ofstream fout;
	fin.open("text.txt");
	fin>>no;
	cout<<no;
	fin.close();
	if(no==1)
	{
		fout.open("text.txt");
		strcpy(file,"HQUIZ.DAT");
		fout<<"2";
		fout.close();
	}
	if(no==2)
	{
		fout.open("text.txt");
		strcpy(file,"HQUIZ1.DAT");
		fout<<"3";
		fout.close();
	}
	if(no==3)
	{
		fout.open("text.txt");
		strcpy(file,"HQUIZ2.DAT");
		fout<<"1";
		fout.close();
	}
	int score=0;
	int n=1;

	//for(int i=1;i<=3;i++)
	//{
	fstream f;
	f.open(file,ios::in|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	while(f.read((char*)&q,sizeof(q)))
	{
		int flag=0;
		if(n==q.getQno())
		{
			n++;
			H:
			clrscr();
			cout<<"\t\t\t\t    QUIZ - HARD";
			cout<<"\nQuestion "<<n-1;
			cout<<"\n______________________________________________________________________\n";
			q.output();
			cout<<"\n______________________________________________________________________\n";
			cout<<"\n5)Eliminator("<<elno<<" left)  6)Computer answer("<<cno<<" left)  7)Two chances("<<tno<<" left)\n";
			cout<<"\n8)Exit quiz";
			int pick;
			cout<<"\nEnter the correct option:";
			cin>>pick;
			if(pick>=1&&pick<=4)
			{
				flag=1;
				if(pick==q.getAno())
				{
					score=score+5;
					correct++;
					cout<<"\nCorrect answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
				}
				else
				{
					cout<<"\nWrong answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
				}
			}
			if(pick==5)
			{
				if(elno!=0)
				{
					elno--;
					randomize;
					int holder=random(3);
					O:
					clrscr();
					cout<<"\t\t\t\t    QUIZ";
					cout<<"\nQuestion "<<n-1;
					cout<<"\n______________________________________________________________________\n";
					q.eliminator(holder);
					cout<<"\n______________________________________________________________________\n";
					int pick;
					cout<<"\nEnter the correct option:";
					cin>>pick;
					if(pick>=1&&pick<=4)
					{
						flag=1;
						if(pick==q.getAno())
						{
							score=score+5;
							correct++;
							cout<<"\nCorrect answer!!";
							cout<<"\n\n-------------------------------------------------------------------\n";
							cout<<"\nPress any key to continue";
							cout<<"\n\n-------------------------------------------------------------------\n";
						}
						else
						{
							if(pick!=shoulder||pick>4)
							{
								cout<<"Enter from the given options!";
								cout<<"\n\n-------------------------------------------------------------------\n";
								cout<<"\nPress any key to continue";
								cout<<"\n\n-------------------------------------------------------------------\n";
								getch();
								goto O;
							}
							else if(pick==shoulder)
							{
								cout<<"\nWrong answer!!";
								cout<<"\n\n-------------------------------------------------------------------\n";
								cout<<"\nPress any key to continue";
								cout<<"\n\n-------------------------------------------------------------------\n";
							}
						}
					}
				}
				else if(elno==0)
				{
					cout<<"\n\t\t\tSorry!! You used up all your eliminators!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					getch();
					goto H;
				}
			}
			if(pick==6)
			{
				flag=1;
				if(cno!=0)
				{
					cno--;
					clrscr();
					cout<<"\t\t\t\t    QUIZ";
					cout<<"\nQuestion "<<n-1;
					cout<<"\n______________________________________________________________________\n";
					q.output();
					cout<<"\n______________________________________________________________________\n";
					cout<<"\nEnter the correct option:"<<q.getAno();
					cout<<"\n\nCorrect answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					score=score+5;
					correct++;
				}
				else if(cno==0)
				{
					cout<<"\n\t\tSorry!! You used up Computer answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					getch();
					goto H;
				}
			}
			if(pick==7)
			{
				flag=1;
				if(tno!=0)
				{
					tno--;
					clrscr();
					cout<<"\t\t\t\t    QUIZ";
					cout<<"\nQuestion "<<n-1;
					cout<<"\n______________________________________________________________________\n";
					q.output();
					cout<<"\n______________________________________________________________________\n";
					int pick;
					cout<<"\nEnter the correct option:";
					cin>>pick;
					if(pick>=1&&pick<=4)
					{
						flag=1;
						if(pick==q.getAno())
						{
							score=score+5;
							correct++;
							cout<<"\nCorrect answer!!";
							cout<<"\n\n-------------------------------------------------------------------\n";
							cout<<"\nPress any key to continue";
							cout<<"\n\n-------------------------------------------------------------------\n";
						}
						if(pick!=q.getAno())
						{
							clrscr();
							int pice=0;
							F:
							if(pice==1)
							{
								clrscr();
							}
							cout<<"\t\t\t\t    QUIZ";
							cout<<"\nQuestion "<<n-1;
							cout<<"\n______________________________________________________________________\n";
							q.tchance(pick);
							cout<<"\n______________________________________________________________________\n";
							cout<<"\nEnter the correct option:";
							int choose;
							cin>>choose;
							if(pick>=1&&pick<=4)
							{
								if(choose==q.getAno())
								{
									score=score+5;
									correct++;
									cout<<"\nCorrect answer!!";
									cout<<"\n\n-------------------------------------------------------------------\n";
									cout<<"\nPress any key to continue";
									cout<<"\n\n-------------------------------------------------------------------\n";
								}
								else
								{
									if(choose==pick||choose>4)
									{
										cout<<"Enter from the given options!";
										pice=1;
										cout<<"\n\n-------------------------------------------------------------------\n";
										cout<<"\nPress any key to continue";
										cout<<"\n\n-------------------------------------------------------------------\n";
										getch();
										goto F;
									}
									else
									{
										cout<<"\nWrong answer!!";
										cout<<"\n\n-------------------------------------------------------------------\n";
										cout<<"\nPress any key to continue";
										cout<<"\n\n-------------------------------------------------------------------\n";
									}
								}
							}
						}
					}
				}
				else if(tno==0)
				{
					cout<<"Sorry!! You used up your Two chances";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					getch();
					goto H;
				}
			}
			if(pick==8)
			{
				flag=1;
				char ch;
				cout<<"\nAre you sure you want to exit the Quiz?(y/n):";
				cin>>ch;
				if(ch=='y')
				{
					ex=1;
					goto e;
				}
				if(ch=='n')
				{
					goto H;
				}
			}
			if(flag==0)
			{
				cout<<"\nEnter value from 1 to 8!!";
				cout<<"\n\n-------------------------------------------------------------------\n";
				cout<<"\nPress any key to continue";
				cout<<"\n\n-------------------------------------------------------------------\n";
				getch();
				goto H;
			}
			getch();
		}

	}
	f.close();
	//}
	strcpy(hs.name,acquire);
	hs.score=score;
	highscoreH();
	I:
	clrscr();
	int ch;
	cout<<"\t\t\t\t    QUIZ";
	cout<<"\n\n\n______________________________________________________________________________";
	analyze(score);
	cout<<"\n\n\t\t\tYour score is:"<<score<<"/50";
	all(correct);
	cout<<"\n\n______________________________________________________________________________";
	cout<<"\n\n\t\t\t1.Play Again";
	cout<<"\n\t\t\t2.Return to Main Menu";
	cout<<"\n\t\t\tEnter your choice:";
	cin>>ch;
	if(ch==1)
	{
		goto P;
	}
	if(ch==2)
	{
	}
	if(ch!=2&&ch!=1)
	{
		cout<<"\n\n\t\t\tEnter from the given options!!";
		getch();
		goto I;
	}
	e:
}
void display()		//Function to Display particular Record from Data File
{
	P:
	int no;
	ex=0;
	int elno=2;
	int cno=1;
	int tno=2;
	int correct=0;
	char file[30];
	ifstream fin;
	ofstream fout;
	fin.open("text.txt");
	fin>>no;
	cout<<no;
	fin.close();
	if(no==1)
	{
		fout.open("text.txt");
		strcpy(file,"EQUIZ.DAT");
		fout<<"2";
		fout.close();
	}
	if(no==2)
	{
		fout.open("text.txt");
		strcpy(file,"EQUIZ1.DAT");
		fout<<"3";
		fout.close();
	}
	if(no==3)
	{
		fout.open("text.txt");
		strcpy(file,"EQUIZ2.DAT");
		fout<<"1";
		fout.close();
	}
	int score=0;
	int n=1;

	//for(int i=1;i<=3;i++)
	//{
	fstream f;
	f.open(file,ios::in|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	while(f.read((char*)&q,sizeof(q)))
	{
		int flag=0;
		if(n==q.getQno())
		{
			n++;
			H:
			clrscr();
			cout<<"\t\t\t\t    QUIZ - EASY";
			cout<<"\nQuestion "<<n-1;
			cout<<"\n______________________________________________________________________\n";
			q.output();
			cout<<"\n______________________________________________________________________\n";
			cout<<"\n5)Eliminator("<<elno<<" left)  6)Computer answer("<<cno<<" left)  7)Two chances("<<tno<<" left)\n";
			cout<<"\n8)Exit quiz";
			int pick;
			cout<<"\nEnter the correct option:";
			cin>>pick;
			if(pick>=1&&pick<=4)
			{
				flag=1;
				if(pick==q.getAno())
				{
					score=score+5;
					correct++;
					cout<<"\nCorrect answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
				}
				else
				{
					cout<<"\nWrong answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
				}
			}
			if(pick==5)
			{
				if(elno!=0)
				{
					elno--;
					randomize;
					int holder=random(3);
					O:
					clrscr();
					cout<<"\t\t\t\t    QUIZ";
					cout<<"\nQuestion "<<n-1;
					cout<<"\n______________________________________________________________________\n";
					q.eliminator(holder);
					cout<<"\n______________________________________________________________________\n";
					int pick;
					cout<<"\nEnter the correct option:";
					cin>>pick;
					if(pick>=1&&pick<=4)
					{
						flag=1;
						if(pick==q.getAno())
						{
							score=score+5;
							correct++;
							cout<<"\nCorrect answer!!";
							cout<<"\n\n-------------------------------------------------------------------\n";
							cout<<"\nPress any key to continue";
							cout<<"\n\n-------------------------------------------------------------------\n";
						}
						else
						{
							if(pick!=shoulder)
							{
								cout<<"Enter from the given options!";
								cout<<"\n\n-------------------------------------------------------------------\n";
								cout<<"\nPress any key to continue";
								cout<<"\n\n-------------------------------------------------------------------\n";
								getch();
								goto O;
							}
							else if(pick==shoulder)
							{
								cout<<"\nWrong answer!!";
								cout<<"\n\n-------------------------------------------------------------------\n";
								cout<<"\nPress any key to continue";
								cout<<"\n\n-------------------------------------------------------------------\n";
							}
						}
					}
					else
					{
						cout<<"Enter from the given options!";
						cout<<"\n\n-------------------------------------------------------------------\n";
						cout<<"\nPress any key to continue";
						cout<<"\n\n-------------------------------------------------------------------\n";
						getch();
						goto O;
					}

				}
				else if(elno==0)
				{
					cout<<"\n\t\t\tSorry!! You used up all your eliminators!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					getch();
					goto H;
				}
			}
			if(pick==6)
			{
				flag=1;
				if(cno!=0)
				{
					cno--;
					clrscr();
					cout<<"\t\t\t\t    QUIZ";
					cout<<"\nQuestion "<<n-1;
					cout<<"\n______________________________________________________________________\n";
					q.output();
					cout<<"\n______________________________________________________________________\n";
					cout<<"\nEnter the correct option:"<<q.getAno();
					cout<<"\n\nCorrect answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					score=score+5;
					correct++;
				}
				else if(cno==0)
				{
					cout<<"\n\t\tSorry!! You used up Computer answer!!";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					getch();
					goto H;
				}
			}
			if(pick==7)
			{
				flag=1;
				if(tno!=0)
				{
					tno--;
					clrscr();
					cout<<"\t\t\t\t    QUIZ";
					cout<<"\nQuestion "<<n-1;
					cout<<"\n______________________________________________________________________\n";
					q.output();
					cout<<"\n______________________________________________________________________\n";
					int pick;
					cout<<"\nEnter the correct option:";
					cin>>pick;
					if(pick>=1&&pick<=4)
					{
						flag=1;
						if(pick==q.getAno())
						{
							score=score+5;
							correct++;
							cout<<"\nCorrect answer!!";
							cout<<"\n\n-------------------------------------------------------------------\n";
							cout<<"\nPress any key to continue";
							cout<<"\n\n-------------------------------------------------------------------\n";
						}
						if(pick!=q.getAno())
						{
							clrscr();
							int pice=0;
							F:
							if(pice==1)
							{
								clrscr();
							}
							cout<<"\t\t\t\t    QUIZ";
							cout<<"\nQuestion "<<n-1;
							cout<<"\n______________________________________________________________________\n";
							q.tchance(pick);
							cout<<"\n______________________________________________________________________\n";
							cout<<"\nEnter the correct option:";
							int choose;
							cin>>choose;
							if(pick>=1&&pick<=4)
							{
								if(choose==q.getAno())
								{
									score=score+5;
									correct++;
									cout<<"\nCorrect answer!!";
									cout<<"\n\n-------------------------------------------------------------------\n";
									cout<<"\nPress any key to continue";
									cout<<"\n\n-------------------------------------------------------------------\n";
								}
								else
								{
									if(choose==pick||choose>4)
									{
										cout<<"Enter from the given options!";
										pice=1;
										cout<<"\n\n-------------------------------------------------------------------\n";
										cout<<"\nPress any key to continue";
										cout<<"\n\n-------------------------------------------------------------------\n";
										getch();
										goto F;
									}
									else
									{
										cout<<"\nWrong answer!!";
										cout<<"\n\n-------------------------------------------------------------------\n";
										cout<<"\nPress any key to continue";
										cout<<"\n\n-------------------------------------------------------------------\n";
									}
								}
							}
						}
					}
				}
				else if(tno==0)
				{
					cout<<"Sorry!! You used up your Two chances";
					cout<<"\n\n-------------------------------------------------------------------\n";
					cout<<"\nPress any key to continue";
					cout<<"\n\n-------------------------------------------------------------------\n";
					getch();
					goto H;
				}
			}
			if(pick==8)
			{
				flag=1;
				char ch;
				cout<<"\nAre you sure you want to exit the Quiz?(y/n):";
				cin>>ch;
				if(ch=='y')
				{
					ex=1;
					goto e;
				}
				if(ch=='n')
				{
					goto H;
				}
			}
			if(flag==0)
			{
				cout<<"\nEnter value from 1 to 8!!";
				cout<<"\n\n-------------------------------------------------------------------\n";
				cout<<"\nPress any key to continue";
				cout<<"\n\n-------------------------------------------------------------------\n";
				getch();
				goto H;
			}
			getch();
		}

	}
	f.close();
	//}
	strcpy(hs.name,acquire);
	hs.score=score;
	highscoreE();
	I:
	clrscr();
	int ch;
	cout<<"\t\t\t\t    QUIZ";
	cout<<"\n\n\n______________________________________________________________________________";
	analyze(score);
	cout<<"\n\n\t\t\tYour score is:"<<score<<"/50";
	all(correct);
	cout<<"\n\n______________________________________________________________________________";
	cout<<"\n\n\t\t\t1.Play Again";
	cout<<"\n\t\t\t2.Return to Quiz Menu";
	cout<<"\n\t\t\tEnter your choice:";
	cin>>ch;
	if(ch==1)
	{
		goto P;
	}
	if(ch==2)
	{
	}
	if(ch!=1&&ch!=2)
	{
		cout<<"\n\n\t\t\tEnter from the given options!!";
		getch();
		goto I;
	}
	e:
}
void Add()	      //Function to Add New Record in Data File
{
	clrscr();
	ofstream fout;
	fout.open("chemical.dat",ios::app|ios::binary);
	c.input();
	fout.write((char*)&c,sizeof(c));
	fout.close();
}
void Modify()		//Function to Modify Particular Record from Data File
{
	fstream f;
	int flag=0;
	char did[30];
	cout<<"Enter the rollno of the record to be modified:";
	gets(did);
	f.open("chemical.dat",ios::in|ios::out|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{
		f.read((char*)&c,sizeof(c));
		while(!f.eof())
		{
			if(strcmp(did,c.getname())==0)
			{
				flag=1;
				f.seekg(0,ios::cur);
				cout<<"Record found\nEnter the new Record:"<<endl;
				c.input();
				f.seekp(f.tellg() - sizeof(c));
				f.write((char*)&c, sizeof(c));
			}
			f.read((char*)&c,sizeof(c));
		}
		if(flag==0)
		{
			cout<<"record not found";
		}
	}
	f.close();
}
void Delete()		//Function to Delete Particular Record from Data File
{
	fstream f;
	//int flag=0;
	char did[30];
	cout<<"Enter the name of the element to be deleted:";
	gets(did);
	ofstream fout;
	fout.open("new.dat",ios::out|ios::binary);
	f.open("chemical.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening!";
		exit(0);
	}
	else
	{
		while(f.read((char*)&c,sizeof(c)))
		{
			if(strcmp(did,c.getname())!=0)
			{
				fout.write((char*)&c,sizeof(c));
			}
			if(strcmp(did,c.getname())==0)
			{
				cout<<"Record found and deleted\n";
			}
		}
	}
	fout.close();
	f.close();
	remove("chemical.dat");
	rename("new.dat","chemical.dat");
}
void DisplayAt()
{
	fstream f;
	int did;
	int flag=0;
	cout<<"\nEnter the Atomic number of the element to be searched:";
	cin>>did;
	f.open("chemical.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else

	{
		f.read((char*)&c,sizeof(c));
		while(!f.eof())
		{
			if(did==c.getatno())
			{
				c.show();
				flag=1;
			}
			f.read((char*)&c,sizeof(c));
		}
		if(flag==0)
		{
			cout<<"Element not found!";
		}
	}
	f.close();
}
void DisplayS()
{
	fstream f;
	char did[30];
	int flag=0;
	cout<<"\nEnter the chemical symbol of the element to be searched:";
	gets(did);
	f.open("chemical.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else

	{
		f.read((char*)&c,sizeof(c));
		while(!f.eof())
		{
			if(strcmp(did,c.getsymb())==0)
			{
				c.show();
				flag=1;
			}
			f.read((char*)&c,sizeof(c));
		}
		if(flag==0)
		{
			cout<<"Element not found!";
		}
	}
	f.close();
}
void DisplayN()		//Function to Display particular Record from Data File
{
	fstream f;
	char did[30];
	int flag=0;
	cout<<"\nEnter name of the element to be searched:";
	gets(did);
	f.open("chemical.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"File not Found";
		exit(0);
	}
	else

	{
		f.read((char*)&c,sizeof(c));
		while(!f.eof())
		{
			if(strcmp(did,c.getname())==0)
			{
				c.show();
				flag=1;
			}
			f.read((char*)&c,sizeof(c));
		}
		if(flag==0)
		{
			cout<<"Element not found!";
		}
	}
	f.close();
}
void Display()
{
	clrscr();
	fstream f;
	f.open("chemical.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening the file!";
		exit(0);
	}
	else
	{
		f.read((char*)&c, sizeof(c));
		while(!f.eof())
		{
			c.show();
			f.read((char*)&c,sizeof(c));
		}
	}
	f.close();
}
void Display_user()
{
	fstream f;
	f.open("userinfo.dat",ios::in|ios::binary);
	if(!f)
	{
		cout<<"Error in opening the file!";
		exit(0);
	}
	else
	{

		while(f.read((char*)&user, sizeof(user)))
		{
			user.output();
		}
	}
	f.close();
}
void editq(int&edit)
{
			S:
			clrscr();
			int decide;
			cout<<"\t\t\t\t    Manage Quiz";
			cout<<"\n________________________________________________________________________________\n";
			cout<<"1.Easy";
			cout<<"\n2.Medium";
			cout<<"\n3.Hard";
			cout<<"\n4.Return to admin menu";
			cout<<"\nEnter your choice:";
			cin>>decide;
			if(decide==1)
			{
				int enter;
				clrscr();
				cout<<"\t\t\t\t   Manage Easy Quiz";
				cout<<"\n________________________________________________________________________________\n";
				cout<<"1.Add question";
				cout<<"\n2.Delete question";
				cout<<"\n3.Modify qestion";
				cout<<"\n4.Return to Level menu";
				cout<<"\nEnter your choice:";
				cin>>enter;
				{
					if(enter==1)
					{
						int hail;
						cout<<"Enter the quiz number:";
						cin>>hail;
						if(hail==1)
						{
							addE1();
						}
						if(hail==2)
						{
							addE2();
						}
						if(hail==3)
						{
							addE3();
						}
						getch();
					}
					if(enter==2)
					{
						int hail;
						cout<<"Enter the quiz number:";
						cin>>hail;
						if(hail==1)
						{
							deleteE1();
						}
						if(hail==2)
						{
							deleteE2();
						}
						if(hail==3)
						{
							deleteE3();
						}
						getch();
					}
					if(enter==3)
					{
						int hail;
						cout<<"Enter the quiz number:";
						cin>>hail;
						if(hail==1)
						{
							modifyE1();
						}
						if(hail==2)
						{
							modifyE2();
						}
						if(hail==3)
						{
							modifyE3();
						}
						getch();

					}
					if(enter==4)
					{
						goto S;
					}
				}
				goto S;
			}
			if(decide==2)
			{
				int enter;
				clrscr();
				cout<<"\t\t\t\t    Manage Medium Quiz";
				cout<<"\n________________________________________________________________________________\n";
				cout<<"1.Add question";
				cout<<"\n2.Delete question";
				cout<<"\n3.Modify qestion";
				cout<<"\n4.Return to Level menu";
				cout<<"\nEnter your choice:";
				cin>>enter;
				{
					if(enter==1)
					{
						int hail;
						cout<<"Enter the quiz number:";
						cin>>hail;
						if(hail==1)
						{
							addM1();
						}
						if(hail==2)
						{
							addM2();
						}
						if(hail==3)
						{
							addM3();
						}
						getch();
					}
					if(enter==2)
					{
						int hail;
						cout<<"Enter the quiz number:";
						cin>>hail;
						if(hail==1)
						{
							deleteM1();
						}
						if(hail==2)
						{
							deleteM2();
						}
						if(hail==3)
						{
							deleteM3();
						}
						getch();
					}
					if(enter==3)
					{
						int hail;
						cout<<"Enter the quiz number:";
						cin>>hail;
						if(hail==1)
						{
							modifyM1();
						}
						if(hail==2)
						{
							modifyM2();
						}
						if(hail==3)
						{
							modifyM3();
						}
						getch();
					}
					if(enter==4)
					{
						goto S;
					}
				}
				goto S;

			}
			if(decide==3)
			{
				int enter;
				clrscr();
				cout<<"\t\t\t\t    Manage Hard Quiz";
				cout<<"\n________________________________________________________________________________\n";
				cout<<"1.Add question";
				cout<<"\n2.Delete question";
				cout<<"\n3.Modify qestion";
				cout<<"\n4.Return to Level menu";
				cout<<"\nEnter your choice:";
				cin>>enter;
				{
					if(enter==1)
					{
						int hail;
						cout<<"Enter the quiz number:";
						cin>>hail;
						if(hail==1)
						{
							addH1();
						}
						if(hail==2)
						{
							addH2();
						}
						if(hail==3)
						{
							addH3();
						}
						getch();
					}
					if(enter==2)
					{
						int hail;
						cout<<"Enter the quiz number:";
						cin>>hail;
						if(hail==1)
						{
							deleteH1();
						}
						if(hail==2)
						{
							deleteH2();
						}
						if(hail==3)
						{
							deleteH2();
						}
						getch();
					}
					if(enter==3)
					{
						int hail;
						cout<<"Enter the quiz number:";
						cin>>hail;
						if(hail==1)
						{
							modifyH1();
						}
						if(hail==2)
						{
							modifyH2();
						}
						if(hail==3)
						{
							modifyH3();
						}
						getch();
					}
					if(enter==4)
					{
						goto S;
					}
				}
				goto S;
			}
			if(decide==4)
			{
				edit++;
			}
}
void lag(int w)
{
	int i=0;
	Q:
	clrscr();
	if(w==1)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tLogging in";
	}
	if(w==2)
	{
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\tLogging out";
	}
	delay(200);
	cout<<".";
	delay(200);
	cout<<".";
	delay(200);
	cout<<".";
	delay(200);
	i++;
	if(i!=4)
	{
		goto Q;
	}
}
void instruction()
{
	clrscr();
	cout<<"\t\t\t\tINSTRUCTIONS";
	cout<<"\n________________________________________________________________________________";
	ifstream fin;
	fin.open("instr.txt");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
	cout<<"\n-------------------------------------------------------------------\n";
	cout<<"\nPress any key to continue";
	cout<<"\n\n-------------------------------------------------------------------\n";
	getch();
	fin.close();
}
void userq(int&user)
{
		W:
		clrscr();
		int opt;
		cout<<"\t\t\t\t    QUIZ";
		cout<<"\n________________________________________________________________________________";
		cout<<"\n1.Select level";
		cout<<"\n2.Return to Main menu";
		cout<<"\nEnter your choice:";
		cin>>opt;
		if(opt==1)
		{
			A:
			clrscr();
			int select;
			cout<<"\t\t\t\t    QUIZ";
			cout<<"\n________________________________________________________________________________";
			cout<<"\n1.Easy";
			cout<<"\n2.Medium";
			cout<<"\n3.Hard";
			cout<<"\n4.Return to Quiz menu";
			cout<<"\nEnter your choice:";
			cin>>select;
			if(select==1)
			{
				G:
				clrscr();
				cout<<"\t\t\t\t    QUIZ - EASY";
				cout<<"\n________________________________________________________________________________";
				cout<<"\n1.Play the Quiz";
				cout<<"\n2.Highscores";
				cout<<"\n3.Return to Level Menu";
				cout<<"\nEnter your choice:";
				int chose;
				cin>>chose;
				if(chose==1)
				{
					instruction();
					display();
					if(ex==1)
					{
						goto G;
					}
					else
					{
						goto G;
					}
				}
				if(chose==2)
				{
					displayHE();
					getch();
					goto G;
				}
				if(chose==3)
				{
					goto A;
				}
				if(chose!=1&&chose!=2&&chose!=3)
				{
					cout<<"Enter from the given options!!";
					getch();
					goto G;
				}
			}
			if(select==2)
			{
				R:
				clrscr();
				cout<<"\t\t\t\t    QUIZ - MEDIUM";
				cout<<"\n________________________________________________________________________________";
				cout<<"\n1.Play the Quiz";
				cout<<"\n2.Highscores";
				cout<<"\n3.Return to Level Menu";
				cout<<"\nEnter your choice:";
				int chose;
				cin>>chose;
				if(chose==1)
				{
					instruction();
					display1();
					if(ex==1)
					{
						goto R;
					}
					else
					{
						goto R;
					}
				}
				if(chose==2)
				{
					displayHM();
					getch();
					goto R;
				}
				if(chose==3)
				{
					goto A;
				}
				if(chose!=1&&chose!=2&&chose!=3)
				{
					cout<<"Enter from the given options!!";
					getch();
					goto R;
				}
			}
			if(select==3)
			{
				B:
				clrscr();
				cout<<"\t\t\t\t    QUIZ - HARD";
				cout<<"\n________________________________________________________________________________";
				cout<<"\n1.Play the Quiz";
				cout<<"\n2.Highscores";
				cout<<"\n3.Return to Level Menu";
				cout<<"\nEnter your choice:";
				int chose;
				cin>>chose;
				if(chose==1)
				{
					instruction();
					display2();
					if(ex==1)
					{
						goto B;
					}
					else
					{
						goto B;
					}
				}
				if(chose==2)
				{
					displayHH();
					getch();
					goto B;
				}
				if(chose==3)
				{
					goto A;
				}
				if(chose!=1&&chose!=2&&chose!=3)
				{
					cout<<"\nEnter from the given options!!";
					getch();
					goto B;
				}
			}
			if(select==4)
			{
				goto W;
			}
			if(select!=1&&select!=2&&select!=3&&select!=4)
			{
				cout<<"\nEnter from the given options!!";
				getch();
				goto A;
			}
		}
		if(opt==2)
		{
			user++;
		}
		if(opt!=1&&opt!=2)
		{
			cout<<"\nEnter from the given options!!";
			getch();
			goto W;
		}


}
void feedback()
{
	U:
	clrscr();
	char fe;
	cout<<"Would you like to give a feedback?(y/n):";
	cin>>fe;
	if(fe=='y')
	{
		fd.input();
		fstream f;
		f.open("feedback.dat",ios::app|ios::binary);
		f.write((char*)&fd,sizeof(fd));
		f.close();

	}
	if(fe=='n')
	{
	}
	if(fe!='y'&&fe!='n')
	{
		cout<<"\n\nEnter from the given options!!";
		getch();
		goto U;
	}
}
void main()
{
	clrscr();
	char password[30];
	char username[10];
	cout<<endl<<endl;
	cout<<"\t\t\t     WELCOME TO PERIODIC TABLE"<<endl;
	cout<<"________________________________________________________________________________";
	cout<<endl;
	int z,ch;
	cout<<"\t\t\t       THE PERIODIC TABLE\n";
	cout<<"________________________________________________________________________________\n";
	cout<<"\n\t\t   1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18";
	cout<<"\n\n\t\t1  H                                                  He";
	cout<<"\n\t\t2  Li Be                               B  C  N  O  F  Ne";
	cout<<"\n\t\t3  Na Mg                               Al Si P  S  Cl Ar";
	cout<<"\n\t\t4  K  Ca Sc Ti V  Cr Mn Fe Co Ni Cu Zn Ga Ge As Se Br Kr";
	cout<<"\n\t\t5  Rb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag Cd In Sn Sb Te I  Xe";
	cout<<"\n\t\t6  Cs Ba La Hf Ta W  Re Os Ir Pt Au Hg Tl Pb Bi Po At Rn";
	cout<<"\n\t\t7  Fr Ra Ac Rf Db Sg Bh Hs Mt Ds Rg Cn Nh Fl Mc Lv Ts Og\n";
	cout<<"\n\t\t         Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu      ";
	cout<<"\n\t\t  	 Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr      ";
	cout<<endl;
	cout<<"________________________________________________________________________________";
	cout<<endl<<endl;
	cout<<"\t\t\t\tPRESS ENTER KEY TO CONTINUE."<<endl;
	cout<<"________________________________________________________________________________";
	while(1)
	{
		z=fgetc(stdin);
		if(z==10)
		{
			break;
		}
	}

	//password and username code
	start:
	clrscr();
	cout<<"\t\t\t\t\tHOMEPAGE"<<endl;
	cout<<"________________________________________________________________________________";
	cout<<endl<<endl;
	cout<<"\t\t1.ADMIN"<<"\t\t\t"<<"2.USER"<<"\t\t\t"<<"3.EXIT"<<endl<<endl;
	cout<<endl<<endl;
	cout<<"________________________________________________________________________________";
	cout<<"Enter your choice: ";
	cin>>ch;
	cout<<endl<<endl;
	cout<<"________________________________________________________________________________";




	switch(ch)
	{
		case 1 :clrscr();
			cout<<"\t\t\t\t\t1.ADMIN"<<endl;
			cout<<"________________________________________________________________________________";
			int ch1;
			cout<<endl<<endl;
			cout<<"1.LOGIN"<<endl;
			cout<<"2.RETURN TO HOMEPAGE"<<endl;
			cout<<"________________________________________________________________________________";
			cout<<endl;
			cout<<"Enter your choice => ";
			cin>>ch1;
			switch(ch1)
			{

				case 1:clrscr();
					   ifstream fin_admin("admin.dat",ios::binary|ios::in);
					   cout<<"\t\t\t1.LOGIN AS ADMIN"<<endl;
					   cout<<"________________________________________________________________________________";
					   char name[10],password[20];
					   cout<<"Enter username : ";
					   cin>>name;
					   cout<<endl<<"________________________________________________________________________________";
					   encrypt(password);
					   cout<<endl<<"________________________________________________________________________________";
					   if(!fin_admin)
					   {
						cout<<"Error";
						cout<<endl;
						cout<<"________________________________________________________________________________";
						return;
					   }
					   int check=0;
					   while(fin_admin.read((char*)&adm,sizeof(adm)))
					   {

						if(((strcmp(name,adm.get_username())==0) && (strcmp(password,adm.get_pass())==0)))
						{
							lag(1);
							check=1;
							int choice,choice1;

								D:
								clrscr();
								cout<<"\t\t\t\tWELCOME ADMINISTRATOR "<<endl;
								cout<<"\t\t\t\t\t\t\t\t\t"<<name;
								cout<<endl<<"________________________________________________________________________________";
								cout<<"1.Manage user accounts"<<endl;
								cout<<"2.Manage periodic table"<<endl;
								cout<<"3.Manage Quiz"<<endl;
								cout<<"4.Manage feedbacks"<<endl;
								cout<<"5.Log out"<<endl;
								cout<<"Enter your choice : ";
								cin>>choice1;
								if(choice1==1)
								{
									E:
									clrscr();
									cout<<"\t\t\t\t  Manage user accounts "<<endl;
									cout<<endl<<"________________________________________________________________________________";
									int choices;
									cout<<"1.View user accounts"<<endl;
									cout<<"2.Return to Admin menu"<<endl;
									cout<<"Enter your choice : ";
									cin>>choices;
									if(choices>=1&&choices<=2)
									{
										if(choices==1)
										{
											cout<<"________________________________________________________________________________\n";
											Display_user();
											cout<<"\n________________________________________________________________________________\n";
											cout<<"\n\n-------------------------------------------------------------------\n";
											cout<<"\nPress any key to continue";
											cout<<"\n\n-------------------------------------------------------------------\n";
											getch();
											goto E;
										}
										if(choices==2)
										{
											goto D;
										}
									}
									else
									{
										cout<<"\nEnter value from 1 or 2!";
										getch();
										goto E;
									}
								}
								if(choice1==2)
								{
										K:
										clrscr();
										cout<<"\t\t\t\t Manage periodic table"<<endl;
										cout<<endl<<"________________________________________________________________________________";
										cout<<"\n1.Enter the elements";
										cout<<"\n2.Display elements";
										cout<<"\n3.Search for element";
										cout<<"\n4.Delete elements";
										cout<<"\n5.Modify elements";
										cout<<"\n6.Return to Admin menu";
										cout<<"\nEnter your choice:";
										cin>>choice;
										if(choice>=1&&choice<=6)
										{

											if(choice==1)
											{
												Add();
												getch();
												goto K;
											}
											if(choice==2)
											{
												Display();
												getch();
												goto K;
											}
											if(choice==3)
											{
												DisplayN();
												getch();
												goto K;
											}
											if(choice==4)
											{
												Delete();
												getch();
												goto K;
											}
											if(choice==5)
											{
												Modify();
												getch();
												goto K;
											}
											if(choice==6)
											{
												goto D;
											}
										}
										else
										{
											cout<<"\nEnter value from 1 to 6!";
											getch();
											goto K;
										}

								}
								if(choice1==3)
								{
									int edit=0;
									editq(edit);
									if(edit==1)
									{
										goto D;
									}
								}
								if(choice1==4)
								{
									X:
									clrscr();
									cout<<"\t\t\t      Manage Feedbacks";
									cout<<"\n________________________________________________________________________________\n";
									cout<<"1.View feedbacks";
									cout<<"\n2.Return to admin menu";
									cout<<"\nEnter your choice:";
									int enter;
									cin>>enter;
									if(enter==1)
									{
										fstream f;
										f.open("feedback.dat",ios::in|ios::binary);
										cout<<"________________________________________________________________________________\n";
										while(f.read((char*)&fd,sizeof(fd)))
										{

											fd.output();
										}
										cout<<"\n________________________________________________________________________________\n";
										cout<<"\n\n-------------------------------------------------------------------\n";
										cout<<"\nPress any key to continue";
										cout<<"\n\n-------------------------------------------------------------------\n";
										getch();
										f.close();
										goto X;
									}
									if(enter==2)
									{
										goto D;
									}
									if(enter!=1&&enter!=2)
									{
										cout<<"Enter value 1 or 2!";
										getch();
										goto D;
									}
								}
								if(choice1==5)
								{
									lag(2);
									goto start;
								}
								if(choice!=1&&choice1!=2&&choice1!=3&&choice1!=4&&choice1!=5)
								{
									cout<<"Enter from the given options!!";
									getch();
									goto D;
								}


						}

					   }
					if(check==0)
					{
						cout<<"Error ! Your account has not been found !";
						cout<<endl<<"________________________________________________________________________________";
					}
					fin_admin.close();
					   break;
				case 2:goto start;
				}
			break;
		case 2 :J:
			clrscr();
			cout<<"\t\t\t\t\t2.USER"<<endl;
			cout<<"________________________________________________________________________________";
			int ch2;
			cout<<"1.SIGNUP"<<endl;
			cout<<"2.LOGIN"<<endl;
			cout<<"3.RETURN TO MAIN MENU"<<endl;
			cout<<"________________________________________________________________________________";
			cout<<endl;
			cout<<"Enter your choice => ";
			cin>>ch2;
			switch(ch2)
			{
				case 1:clrscr();
					   ofstream fout_user("userinfo.dat",ios::app|ios::binary);
					   cout<<"\t\t\t\t1.SIGNUP AS USER"<<endl;
					   cout<<"________________________________________________________________________________";
					   if(!fout_user)
					   {
						cout<<"Error";
						cout<<endl;
						cout<<"________________________________________________________________________________";
					   }
					   user.input();
					   fout_user.write((char*)&user,sizeof(user));
					   cout<<"\n\n\nAccount successfully created!!";
					   fout_user.close();
					   break;
				case 2:clrscr();
					   int point=0;
					   ifstream fin_user;
					   fin_user.open("userinfo.dat",ios::in|ios::binary);
					   cout<<"\t\t\t\t2.LOGIN AS USER"<<endl;
					   cout<<"________________________________________________________________________________";
					   char name[10],password[20];
					   cout<<"Enter username : ";
					   cin>>name;
					   cout<<endl;
					   cout<<"________________________________________________________________________________";
					   encrypt(password);
					   cout<<endl;
					   cout<<"________________________________________________________________________________";
					   while(fin_user.read((char*)&user,sizeof(user)))
					   {

						if(((strcmp(name,user.get_username())==0) && (strcmp(password,user.get_pass())==0)))
						{
							lag(1);
							point=1;
							strcpy(acquire,name);
							M:
							clrscr();
							cout<<"\t\t\t       THE PERIODIC TABLE\n";
							cout<<"________________________________________________________________________________\n";
							cout<<"\n\t\t   1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18";
							cout<<"\n\n\t\t1  H                                                  He";
							cout<<"\n\t\t2  Li Be                               B  C  N  O  F  Ne";
							cout<<"\n\t\t3  Na Mg                               Al Si P  S  Cl Ar";
							cout<<"\n\t\t4  K  Ca Sc Ti V  Cr Mn Fe Co Ni Cu Zn Ga Ge As Se Br Kr";
							cout<<"\n\t\t5  Rb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag Cd In Sn Sb Te I  Xe";
							cout<<"\n\t\t6  Cs Ba La Hf Ta W  Re Os Ir Pt Au Hg Tl Pb Bi Po At Rn";
							cout<<"\n\t\t7  Fr Ra Ac Rf Db Sg Bh Hs Mt Ds Rg Cn Nh Fl Mc Lv Ts Og\n";
							cout<<"\n\t\t         Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu      ";
							cout<<"\n\t\t	 Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr      ";
							cout<<"\n________________________________________________________________________________";
							cout<<"\n1.About the periodic table";
							cout<<"\n2.Quiz";
							cout<<"\n3.Search for elements";
							cout<<"\n4.Log out";
							int ch;
							cout<<"\n________________________________________________________________________________\n";
							cout<<"Enter your choice: ";
							cin>>ch;
							if(ch>=1&&ch<=4)
							{
								if(ch==1)
								{
									about();
									goto M;
								}
								if(ch==2)
								{
									int user=0;
									userq(user);
									if(user==1)
									{
										goto M;
									}
								}
								if(ch==3)
								{
									T:
									clrscr();
									cout<<"\t\t\t     SEARCH FOR ELEMENTS";
									cout<<"\n________________________________________________________________________________\n";
									cout<<"1.Search by Name";
									cout<<"\n2.Search by Atomic number";
									cout<<"\n3.Search by chemical symbol";
									cout<<"\n4.Return to Main menu";
									cout<<"\nEnter your choice:";
									int evaluate;
									cin>>evaluate;
									if(evaluate==1)
									{
										cout<<"\n________________________________________________________________________________";
										DisplayN();
										cout<<"\n________________________________________________________________________________";
										getch();
										goto T;
									}
									if(evaluate==2)
									{
										cout<<"\n________________________________________________________________________________";
										DisplayAt();
										cout<<"\n________________________________________________________________________________";
										getch();
										goto T;
									}
									if(evaluate==3)
									{
										cout<<"\n________________________________________________________________________________";
										DisplayS();
										cout<<"\n________________________________________________________________________________";
										getch();
										goto T;
									}
									if(evaluate==4)
									{
										goto M;
									}
									if(evaluate>4||evaluate<1)
									{
										cout<<"Enter value from 1 to 4!";
										getch();
										goto T;
									}


								}
								if(ch==4)
								{
									feedback();
									lag(2);
									goto start;
								}
							}
							else
							{
								cout<<"\nEnter value from 1 to 4!";
								getch();
								goto M;
							}

						}
					   }
					   if(point==0)
					   {
						cout<<"Error ! Your account has not been found !";
						cout<<endl;
						cout<<"________________________________________________________________________________";
						getch();
						goto start;
					   }
					   fin_user.close();

					   break;
				case 3:goto start;
				default:cout<<"\nEnter value from 1 to 3!";
					getch();
					goto J;
				}
			break;
		case 3 :exit(0);
		default:cout<<"\nEnter value from 1 to 3!";
			getch();
			goto start;

		}//end of switch
	getch();
	goto start;
}
