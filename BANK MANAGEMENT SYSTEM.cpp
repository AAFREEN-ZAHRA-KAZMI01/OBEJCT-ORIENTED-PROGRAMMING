#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;
class bank
{
	private:
		float balance;
		string id,pass,name,fname,address,phone,pin;
	public:
		void menu();
		void bank_management();
		void atm_management();
		void new_user();
		void already_user();
		void deposit();
		void withdraw();
		void transfer();
		void payment();
		void search();
		void edit();
		void del();
		void show_records();
		void show_payment();
		void user_balance();
		void withdraw_atm();
		void check_detail();
};
	void introduction()
	{
		cout<<"\n\n\n\n\n\t";
		for(int i=1;i<=60;i++)
			cout<<"*";
		cout<<"\n\t ";
		for(int i=1;i<=58;i++)
			cout<<"*";
		cout<<"\n\t  ";
		for(int i=1;i<=56;i++)
			cout<<"*";
		cout<<"\n\n\t\t\tBank & ATM Management System\n\n\t\t\t\tProject In C++\n\n\t  ";
		for(int i=1;i<=56;i++)
			cout<<"*";
		cout<<"\n\t ";
		for(int i=1;i<=58;i++)
			cout<<"*";
		cout<<"\n\t";
		for(int i=1;i<=60;i++)
			cout<<"*";
		getch();
		system("cls");
		cout<<"\n\n\n\n\n\t\t\t";
		for(int i=1;i<=30;i++)
			cout<<"*";
		cout<<"\n\t\t\t";
		for(int i=1;i<=30;i++)
			cout<<"*";
		cout<<"\n\n\t\t\t        My Best Friend";
		cout<<"\n\n\t\t\t 1. Allah Pak";
		cout<<"\n\t\t\t 2. Hazrat Muhammad (S.A.W)\n\n\t\t\t";
		for(int i=1;i<=30;i++)
			cout<<"*";
		cout<<"\n\t\t\t";
		for(int i=1;i<=30;i++)
			cout<<"*";
		getch();
		system("cls");
		cout<<"\n\n\t";
		for(int i=1;i<=60;i++)
			cout<<"*";
		cout<<"\n\t";
		for(int i=1;i<=60;i++)
			cout<<"*";
		cout<<"\n\n\t\t\tSoftware Developer Introduction";
		cout<<"\n\n\t Name:\n\t\t\t\t\tHafiz Khizar Shahal";
		cout<<"\n\t Degree:\n\t\t\t\t\tBS IT (Hons.)";
		cout<<"\n\t YouTube:\n\t\t\t\t\tKhizar Shahal Technical";
		cout<<"\n\t Facebook:\n\t\t\t\t\tKhizar Mehar";
		cout<<"\n\t Instagram:\n\t\t\t\t\tKhizarMeharOfficial";
		cout<<"\n\t Contact:\n\t\t\t\t\t0347-2506073";
		cout<<"\n\t Institute:\n\t\t\t\t\tPunjab University\n\n\t";
		for(int i=1;i<=60;i++)
			cout<<"*";
		cout<<"\n\t";
		for(int i=1;i<=60;i++)
			cout<<"*";
		getch();
	}
	void bank::menu()
	{
		p:
		system("cls");
		int choice;
		char ch;
		string pin,pass,email;
		cout<<"\n\n\t\t\tControl Panel";
		cout<<"\n\n 1. Bank Management";
		cout<<"\n 2. ATM Management";
		cout<<"\n 3. Exit";
		cout<<"\n\n Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				system("cls");
				cout<<"\n\n\t\t\tLogin Account";
				cout<<"\n\n E-mail : ";
				cin>>email;
				cout<<"\n\n\t\t Pin Code : ";
				for(int i=1;i<=5;i++)
				{
					ch = getch();
					pin += ch;
					cout<<"*";
				}
				cout<<"\n\n Password : ";
				for(int i=1;i<=5;i++)
				{
					ch = getch();
					pass += ch;
					cout<<"*";
				}
				if(email == "khizar@gmail.com" && pin == "13366" && pass == "14366")
				{
					bank_management();	
				}
				else
				{
					cout<<"\n\n Your E-mail, Pin & Password is Wrong...";
				}
				break;
			case 2:
				atm_management();
				break;
			case 3:
				exit(0);
			default:
				cout<<"\n\n Invalid Value...Please Try Again...";
		}
		getch();
		goto p;
	}
	void bank::bank_management()
	{
		p:
		system("cls");
		int choice;
		cout<<"\n\n\t\t\tBank Management System";
		cout<<"\n\n 1.  New User";
		cout<<"\n 2.  Already User";
		cout<<"\n 3.  Deposit Option";
		cout<<"\n 4.  Withdraw Option";
		cout<<"\n 5.  Transfer Option";
		cout<<"\n 6.  Payment Option";
		cout<<"\n 7.  Search User Record";
		cout<<"\n 8.  Edit User Record";
		cout<<"\n 9.  Delete User Record";
		cout<<"\n 10. Show All Records";
		cout<<"\n 11. Payment All Records";
		cout<<"\n 12. Go Back";
		cout<<"\n\n Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				new_user();
				break;
			case 2:
				already_user();
				break;
			case 3:
				deposit();
				break;
			case 4:
				withdraw();
				break;
			case 5:
				transfer();
				break;
			case 6:
				payment();
				break;
			case 7:
				search();
				break;
			case 8:
				edit();
				break;
			case 9:
				del();
				break;
			case 10:
				show_records();
				break;
			case 11:
				show_payment();
				break;
			case 12:
				menu();
			default:
				cout<<"\n\n Invalid Value...Please Try Again...";
		}
		getch();
		goto p;
	}
	void bank::atm_management()
	{
		p:
		system("cls");
		int choice;
		cout<<"\n\n\t\t\tATM Management System";
		cout<<"\n\n 1. User Login & Check Balance";
		cout<<"\n 2. Withdraw Amount";
		cout<<"\n 3. Account Detailes";
		cout<<"\n 4. Go Back";
		cout<<"\n\n Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				user_balance();
				break;
			case 2:
				withdraw_atm();
				break;
			case 3:
				check_detail();
				break;
			case 4:
				menu();
			default:
				cout<<"\n\n Invalid Value...Please Try Again...";
		}
		getch();
		goto p;
	}
	void bank::new_user()
	{
		p:
		system("cls");
		fstream file;
		int p;
		float b;
		string n,f,pa,a,ph,i;
		cout<<"\n\n\t\t\tAdd New User";
		cout<<"\n\n User ID : ";
		cin>>id;
		cout<<"\n\n\t\tName : ";
		cin>>name;
		cout<<"\n\n Father Name : ";
		cin>>fname;
		cout<<"\n\n\t\tAddress : ";
		cin>>address;
		cout<<"\n\n Pin Code (5 digit) : ";
		cin>>pin;
		cout<<"\n\n\t\tPassword (5 digit) : ";
		cin>>pass;
		cout<<"\n\n Phone No. : ";
		cin>>phone;
		cout<<"\n\n\t\tCurrent Balance : ";
		cin>>balance;
		file.open("bank.txt",ios::in);
		if(!file)
		{
			file.open("bank.txt",ios::app|ios::out);
			file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
			file.close();
		}
		else
		{
			file>>i>>n>>f>>a>>p>>pa>>ph>>b;
			while(!file.eof())
			{
				if(i == id)
				{
					cout<<"\n\n User ID Already Exist...";
					getch();
					goto p;
				}
				file>>i>>n>>f>>a>>p>>pa>>ph>>b;
			}
			file.close();
			file.open("bank.txt",ios::app|ios::out);
			file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
			file.close();
		}
		cout<<"\n\n\t\t\t New User Account Created Successfully...";
	}
	void bank::already_user()
	{
		system("cls");
		fstream file;
		string t_id;
		int found=0;
		cout<<"\n\n\t\t\tAlready User Account";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id)
				{
					system("cls");
					cout<<"\n\n\t\t\t Already User Account";
					cout<<"\n\n User ID: "<<id<<"   Pin Code: "<<pin<<"   Password: "<<pass;
					found++;
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::deposit()
	{
		fstream file,file1;
		string t_id;
		float dep;
		int found=0;
		system("cls");
		cout<<"\n\n\t\t\tDeposit Amount Option";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id)
				{
					cout<<"\n\n Amount For Deposit : ";
					cin>>dep;
					balance += dep;
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
					found++;
					cout<<"\n\n\t\t\tYour Amount "<<dep<<" Sucessfully Deposit...";
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::withdraw()
	{
		fstream file,file1;
		string t_id;
		float with;
		int found=0;
		system("cls");
		cout<<"\n\n\t\t\tWithdraw Amount Option";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id)
				{
					cout<<"\n\n Amount For Withdraw : ";
					cin>>with;
					if(with <= balance)
					{
						balance -= with;
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
						cout<<"\n\n\t\t\tYour Amount "<<with<<" Sucessfully Withdraw...";
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
						cout<<"\n\n\t\t\tYour Current Balance "<<balance<<" is Less...";
					}
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::transfer()
	{
		fstream file,file1;
		system("cls");
		string s_id,r_id;
		int found=0;
		float amount;
		cout<<"\n\n\t\t\tPayment Transfer Oprtion";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n Sender User ID For Transction : ";
			cin>>s_id;
			cout<<"\n\n Reciver User ID For Transction : ";
			cin>>r_id;
			cout<<"\n\n Enter Transction Amount : ";
			cin>>amount;
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(s_id == id && amount <= balance)
				found++;
				else if(r_id == id)
				found++;
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			if(found == 2)
			{
				file.open("bank.txt",ios::in);
				file1.open("bank1.txt",ios::app|ios::out);
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				while(!file.eof())
				{
					if(s_id == id)
					{
						balance -= amount;
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
					}
					else if(r_id == id)
					{
						balance += amount;
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
					}
					file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				}
				file.close();
				file1.close();
				remove("bank.txt");
				rename("bank1.txt","bank.txt");
				cout<<"\n\n\t\t\tTransction Sucessfully...";
			}
			else
			{
				cout<<"\n\n\t\t\tBoth Transction User ID's & Balance Invalid...";
			}
		}
	}
	void bank::payment()
	{
		system("cls");
		fstream file,file1;
		int found=0;
		float amount;
		string t_id,b_name;
		SYSTEMTIME x;
		cout<<"\n\n\t\t\tBills Payment Option";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			cout<<"\n\n Bill Name : ";
			cin>>b_name;
			cout<<"\n\n Bill Amount : ";
			cin>>amount;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id && amount <= balance)
				{
					balance -= amount;
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");
			if(found == 1)
			{
				GetSystemTime(&x);
				file.open("bill.txt",ios::app|ios::out);
				file<<t_id<<" "<<b_name<<" "<<amount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear<<"\n";
				file.close();
				cout<<"\n\n\t\t\t"<<b_name<<" Bill Pay Sucessfully...";
			}
			else
			{
				cout<<"\n\n\t\t\t User ID OR Amount Invalid...";
			}
		}
	}
	void bank::search()
	{
		system("cls");
		fstream file;
		string t_id;
		int found=0;
		cout<<"\n\n\t\t\tSearch User Record";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id)
				{
					system("cls");
					cout<<"\n\n\t\t\tSearch User Record";
					cout<<"\n\n\n User ID: "<<id<<"     Name: "<<name;
					cout<<"\n\n Father's Name: "<<fname<<"     Address: "<<address;
					cout<<"\n\n Pin: "<<pin<<"     Password: "<<pass;
					cout<<"\n\n Phone No.: "<<phone<<"     Current Balance: "<<balance;
					found++;
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::edit()
	{
		system("cls");
		fstream file,file1;
		string t_id,n,f,a,p,ph;
		int found=0,pi;
		cout<<"\n\n\t\t\tEdit User Record";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id)
				{
					cout<<"\n\n\t\tName : ";
					cin>>n;
					cout<<"\n\n Father Name : ";
					cin>>f;
					cout<<"\n\n\t\tAddress : ";
					cin>>a;
					cout<<"\n\n Pin Code (5 digit) : ";
					cin>>pi;
					cout<<"\n\n\t\tPassword : ";
					cin>>p;
					cout<<"\n\n Phone No. : ";
					cin>>ph;
					file1<<" "<<id<<" "<<n<<" "<<f<<" "<<a<<" "<<pi<<" "<<p<<" "<<ph<<" "<<balance<<"\n";
					cout<<"\n\n\n\t\t\tRecord Edit Sucessfully...";
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");			
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::del()
	{
		system("cls");
		fstream file,file1;
		string t_id;
		int found=0;
		cout<<"\n\n\t\t\tEdit User Record";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id)
				{
					cout<<"\n\n\n\t\t\tRecord Deleted Sucessfully...";
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");			
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::show_records()
	{
		system("cls");
		fstream file;
		int found=0;
		cout<<"\n\n\t\t\tShow All User's Records";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				cout<<"\n\n\n User ID : "<<id;
				cout<<"\n Name : "<<name;
				cout<<"\n Father Name : "<<fname;
				cout<<"\n Address : "<<address;
				cout<<"\n Pin : "<<pin;
				cout<<"\n Password : "<<pass;
				cout<<"\n Phone No. : "<<phone;
				cout<<"\n Current Balance : "<<balance;
				cout<<"\n\n=====================================";
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
				found++;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n Data Base is Empty...";
		}
	}
	void bank::show_payment()
	{
		system("cls");
		fstream file;
		int found=0;
		float amount;
		string c_date;
		cout<<"\n\n\t\t\tShow All Bill's Records";
		file.open("bill.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			file>>id>>name>>amount>>c_date;
			while(!file.eof())
			{
				cout<<"\n\n\n User ID : "<<id;
				cout<<"\n Bill Name : "<<name;
				cout<<"\n Bill Amount : "<<amount;
				cout<<"\n Date : "<<c_date;
				cout<<"\n\n=====================================";
				file>>id>>name>>amount>>c_date;
				found++;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n Data Base is Empty...";
		}
	}
	void bank::user_balance()
	{
		system("cls");
		fstream file;
		int found=0;
		string t_id,t_pin,t_pass;
		char ch;
		cout<<"\n\n\t\t\tUser Login & Check Balance";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			cout<<"\n\n\t\tPin Code : ";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				t_pin += ch;
				cout<<"*";
			}
			cout<<"\n\n Password : ";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				t_pass += ch;
				cout<<"*";
			}
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id && t_pin == pin && t_pass == pass)
				{
					cout<<"\n\n\t\t\tYour Current Balance is : "<<balance;
					found++;
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n\t\t\tUser ID, Pin & Password Invalid...";
		}
	}
	void bank::withdraw_atm()
	{
		fstream file,file1;
		string t_id,t_pass,t_pin;
		float with;
		char ch;
		int found=0;
		system("cls");
		cout<<"\n\n\t\t\tWithdraw Amount Option";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			cout<<"\n\n\t\tPin Code : ";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				t_pin += ch;
				cout<<"*";
			}
			cout<<"\n\n Password : ";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				t_pass += ch;
				cout<<"*";
			}
			file1.open("bank1.txt",ios::app|ios::out);
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id && t_pin == pin && t_pass == pass)
				{
					cout<<"\n\n Amount For Withdraw : ";
					cin>>with;
					if(with <= balance)
					{
						balance -= with;
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
						cout<<"\n\n\t\t\tYour Amount "<<with<<" Sucessfully Withdraw...";
						cout<<"\n\n\t\t\t     Your Current Balance "<<balance;
					}
					else
					{
						file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
						cout<<"\n\n\t\t\tYour Current Balance "<<balance<<" is Less...";
					}
					found++;
				}
				else
				{
					file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			file1.close();
			remove("bank.txt");
			rename("bank1.txt","bank.txt");
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
	void bank::check_detail()
	{
		fstream file;
		string t_id,t_pass,t_pin;
		char ch;
		int found=0;
		system("cls");
		cout<<"\n\n\t\t\tCheck Details Option";
		file.open("bank.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n User ID : ";
			cin>>t_id;
			cout<<"\n\n\t\tPin Code : ";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				t_pin += ch;
				cout<<"*";
			}
			cout<<"\n\n Password : ";
			for(int i=1;i<=5;i++)
			{
				ch = getch();
				t_pass += ch;
				cout<<"*";
			}
			file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			while(!file.eof())
			{
				if(t_id == id && t_pin == pin && t_pass == pass)
				{
					system("cls");
					cout<<"\n\n\t\t\tCheck Details Option";
					cout<<"\n\n\n User ID : "<<id;
					cout<<"\n Name : "<<name;
					cout<<"\n Father Name : "<<fname;
					cout<<"\n Address : "<<address;
					cout<<"\n Pin : "<<pin;
					cout<<"\n Password : "<<pass;
					cout<<"\n Phone No. : "<<phone;
					cout<<"\n Current Balance : "<<balance;
					found++;
				}
				file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
			}
			file.close();
			if(found == 0)
			cout<<"\n\n User ID Can't Found...";
		}
	}
main()
{
	bank obj;
	introduction();
	obj.menu();
}
