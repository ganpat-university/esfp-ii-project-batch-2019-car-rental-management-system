#include <iostream>
#include<string>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<fstream>
#include<windows.h>
#include<iomanip>
#include <unistd.h>//i define this for using sleep function
//#include <dos.h>
using namespace std;
	//int x=srand(30);
	//int y=srand(1000);
	
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
void color(int co)
{
	SetConsoleTextAttribute(console,co);
}

	
	
class car
{
	public:
	int select;
	int num,num1,num2,num3;
	 ifstream file;
	char name[40];
	int car_type;
	char ch;
	int amt=0;
    int cmoney=10;
	int advance=30;
	
	
	int login_Entry();
	
	public:
		//color(261);
		void bill(int km,int amt)
	{
						
						 system ("CLS");
						cout << "\n\t\t\t\t                       Car Rental - Customer Invoice                  "<<endl;
    					cout << "\t\t\t\t	///////////////////////////////////////////////////////////"<<endl;
    					cout << "\t\t\t\t	| Invoice No. :"<<"------------------|"<<"#Cnb"<<rand()<<"0353"<<" |"<<endl;
    					cout << "\t\t\t\t	| Customer Name:"<<"-----------------|"<<name<<" |"<<endl;
    					cout << "\t\t\t\t	| Car No. :"<<"----------------------|"<<"GJ01-CY-"<<rand()<<" |"<<endl;
    					cout << "\t\t\t\t	| Number of Km :"<<"-----------------|"<<km<<" |"<<endl;
					    cout << "\t\t\t\t	| Your Rental Amount is :"<<"--------|"<<amt<<" |"<<endl;
					    cout << "\t\t\t\t	| Caution Money :"<<"----------------|"<<cmoney<<" |"<<endl;
					    cout << "\t\t\t\t	| Advanced :"<<"---------------------|"<<advance<<" |"<<endl;
					    cout << "\t\t\t\t	 ________________________________________________________"<<endl;
					    cout <<"\n";
					    cout << "\t\t\t\t	| Total Rental Amount is :"<<"-------|"<<amt+cmoney+advance<<" |"<<endl;
					    cout << "\t\t\t\t	 ________________________________________________________"<<endl;
					    cout << "\t\t\t\t	 # This is a computer generated invoce and it does not"<<endl;
					    cout << "\t\t\t\t	 require an authorised signture #"<<endl;
					    cout <<" "<<endl;
					    cout << "\t\t\t\t	///////////////////////////////////////////////////////////"<<endl;
					    cout << "\t\t\t\t	You are advised to pay up the amount before due date."<<endl;
					    cout << "\t\t\t\t	Otherwise penelty fee will be applied"<<endl;
					    cout << "\t\t\t\t	///////////////////////////////////////////////////////////"<<endl;
					    
						
						system("PAUSE");
			
					    system ("CLS");
						ifstream inf("thanks.txt");
						char str[1000];
						while(inf)
						{
							inf.getline(str,1000);
							if(inf)
								cout<<str<<endl;
						}
						inf.close();
	
	}
		void billh(int hourly,int amt)
	{
		
						 system ("CLS");
						cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    					cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    					cout << "\t\t	| Invoice No. :"<<"------------------|"<<"#HYb"<<rand()<<"Z75"<<" |"<<endl;
    					cout << "\t\t	| Customer Name:"<<"-----------------|"<<name<<" |"<<endl;
    					//cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    					cout << "\t\t	| Car No. :"<<"----------------------|"<<"GJ01-CY-"<<rand()<<" |"<<endl;
    					//cout << "\t\t	| Number of Km :"<<"---------------|"<<km<<" |"<<endl;
						cout << "\t\t	| Number of hours :"<<"---------------|"<<hourly<<" |"<<endl;
					    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<amt<<" |"<<endl;
					    cout << "\t\t	| Caution Money :"<<"----------------|"<<cmoney<<" |"<<endl;
					    cout << "\t\t	| Advanced :"<<"---------------------|"<<advance<<" |"<<endl;
					    cout << "\t\t	 ________________________________________________________"<<endl;
					    cout <<"\n";
					    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<amt+cmoney+advance<<" |"<<endl;
					    cout << "\t\t	 ________________________________________________________"<<endl;
					    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
					    cout << "\t\t	 require an authorised signture #"<<endl;
					    cout <<" "<<endl;
					    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
					    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
					    cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
					    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
					    system("PAUSE");
					    
					      system ("CLS");
						ifstream inf("thanks.txt");
						char str[1000];
						while(inf)
						{
							inf.getline(str,1000);
							if(inf)
								cout<<str<<endl;
						}
						inf.close();
	
	
	}
		
		
		
		
		
		void invoice()
		
		{
			int km,cost,amt,hourly;
			int cmoney=10,advance=30;
			cout<<endl<<endl<<"\n\t\t\t\t\t\tDo u want to continue with this specfication(1/0) :--";
				cin>>num2;
			if(num2==1)
			{	
				cout<<"\n\t\t\t\t\t***********************Select your rate package****************";
				cout<<endl<<"\n\t\t\t\t\t\t1)HOURLY";
				cout<<endl<<"\n\t\t\t\t\t\t2)Per Km";
				cout<<endl<<"\n\t\t\t\tenter your choice:--";
				cin>>num;
				if(num==1)
				{
					 system ("CLS");
					cout<<"\n\t\t\t\t\t\t\t\t--:The Rates Are As Follows:--";
					cout<<endl<<"\n\t\t\t\t\t\t1)1hr/10km-->200rs";
					cout<<endl<<"\n\t\t\t\t\t\t2)2hr/40Km-->400rs";
					cout<<endl<<"\n\t\t\t\t\t\t3)6hr/100Km-->900rs";
					cout<<endl<<"\n\t\t\t\t\t\t4)custmize your trip-->10rs/hr";
					cout<<endl<<"\n\t\t\t\t\t\t\t\t***********NOTE**************";
					cout<<endl<<"\n\t\t\t\t\t\textra charges applied after 30min of the selected time-->12rs/hr \n";
					cout<<endl<<"\t\t\t\t\t enter your choice:--";
					cin>>num3;
					if(num3==1)
					{
						hourly=1;
						amt=200;
						billh(hourly,amt);
						
						
						
					}
					if(num3==2)
					{
						hourly=2;
						amt=400;
						billh(hourly,amt);
						
						
						
					}
							if(num3==3)
					{
						 hourly=6;
						 amt=900;
						 billh(hourly,amt);
						
						
						
					}
							if(num3==4)
					{					
						cout<<"Enter hours for your custmize trip:--";
						cin>>hourly;
						amt=hourly*10;
						billh(hourly,amt);
					}
					}
					else if(num==2)
					{
						 system ("CLS");
						  cout<<"\n\t\t\t\t\t\t--:The Rates Are As Follows:--";
					cout<<endl<<"\n\t\t\t\t\t1)20km-->200rs";
					cout<<endl<<"\n\t\t\t\t\t2)40Km-->400rs";
					cout<<endl<<"\n\t\t\t\t\t3)100Km-->800rs";
					cout<<endl<<"\n\t\t\t\t\t4)custmize your trip-->12rs/Km";
					cout<<endl<<"\n\t\t\t\t\t***********NOTE**************";
					cout<<endl<<"\n\t\t\t\t\textra charges applied after complition  of the selected kilometer-->15rs/Km";
					cout<<endl<<"\n\t\t\t\t\tenter ur choice:--";
					cin>>num1;
					if(num1==1)
					{
						km=20;
						amt=200;
						bill(km,amt);
						
						
						
					}
							if(num1==2)
					{
						km=40;
						amt=400;
						bill(km,amt);
						
						
						
					}
							if(num1==3)
					{
						 km=100;
						 amt=900;
						 bill(km,amt);
						
						
						
					}
							if(num1==4)
					{					
						cout<<"\n\t\t\t\t\tEnter Km for your custmize trip:--";
						cin>>km;
						amt=km*12;
						bill(km,amt);
					}
					
						
						
						
						}
				else
				{
					cout<<"the entered option is not valid";
					}	
				
				
				
			}
		
			
			
			
			
		}
		
		
		
		
		
	void getdata()
	{
		system("cls");
		int login_Entry();
		login_Entry();
		
		cout<<"\n\n\n\n\t\t\t\t\tplease enter costumer name:--";
		cin.getline(name,40);
		cout<<"\n\t\t\t\t\t    Costumer Name is :"<<name;
		cout<<endl<<"\n\n\n\n\t\t\t*************PLEASE CHOOSE YOUR CAR TYPE*****************";
		cout<<endl<<"\n\t\t\t\t\t1)micro";
		cout<<endl<<"\n\t\t\t\t\t2)mini";
		cout<<endl<<"\n\t\t\t\t\t3)suv";
		cout<<endl<<"\n\t\t\t\t\t4)Exit";
	    cout<<endl<<"\n\t\t\t\t\tPLEASE ENTER YOUR CHOISE:--";
		cin>>car_type;
		if(car_type==4)
		{
			exit(0);
		}
		
		
		
		if(car_type==1)
		{	system("cls");
		x:	cout<<"\n\n\n\n\t\t********************PLEASE CHOOSE YOUR CAR**********************************";
			cout<<endl<<"\n\t\t\t\t\t1)ALTO";
			cout<<endl<<"\n\t\t\t\t\t2)datason go";
			cout<<endl<<"\n\t\t\t\t\t3)nano";
			cout<<endl<<"\n\t\t\t\t\t4)polo";
			cout<<endl<<"\n\t\t\t\t\tPLEASE ENTER YOUR CHOISE:--";
			cin>>select;
			if(select==1)
			{
			system("cls");	
			ifstream file("1.txt");
			char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				
				invoice();
			}
			
		if(select==2)
			{
				system("cls");
					ifstream file("2.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
			}
			
			if(select==3)
			{
				system("cls");
					ifstream file("3.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
			}
			if(select==4)
			{
				system("cls");
					ifstream file("4.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
			}
			
	}
		
			
				
		 if(car_type==2)
		{	system("cls");
	
			cout<<"\n\n\n\n\t\t\t********************PLEASE CHOOSE YOUR CAR**********************************";
			cout<<endl<<"\n\t\t\t\t\t1)swift";
			cout<<endl<<"\n\t\t\t\t\t2)i10/i20";
			cout<<endl<<"\n\t\t\t\t\t3)wagner";
			cout<<endl<<"\n\t\t\t\t\t4)random";
			cout<<endl<<"\n\t\t\t\t\tPLEASE ENTER YOUR CHOISE:--";
			cin>>select;
		
		if(select==1)
		{
				system("cls");
					ifstream file("2_1.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
			invoice();
			
		}
		if(select==2)
		{
				system("cls");
					ifstream file("2_2.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
		}
		if(select==3)
		{
				system("cls");
					ifstream file("2_3.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
		}
		if(select==4)
		{
				system("cls");
					ifstream file("2_4.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
		}
		else 
		{
			goto x;
			cout<<"*****the option is invalid*****";
		}
			
		}
		
		else if(car_type==3)
		{	system("cls");
			cout<<"\n\n\n\n\t\t\t********************PLEASE CHOOSE YOUR CAR**********************************";
			cout<<endl<<"\n\t\t\t\t\t1)XUV500";
			cout<<endl<<"\n\t\t\t\t\t2)scropio";
			cout<<endl<<"\n\t\t\t\t\t3)fortuner";
			cout<<endl<<"\n\t\t\t\t\t4)endever";
			cout<<endl<<"\n\t\t\t\t\tPLEASE ENTER YOUR CHOISE:--";
			cin>>select;
		
		if(select==1)
		{
				system("cls");
					ifstream file("3_1.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
		}
		
		
		
		if(select==2)
		{
				system("cls");
					ifstream file("3_2.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
		}
		if(select==3)
		{
				system("cls");
					ifstream file("3_3.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
		}
		if(select==4)
			{
				system("cls");
					ifstream file("3_4.txt");
					char ch[8000];
			while(file) 
			{
				
         		file.getline(ch, 8000);  
         			if(file) cout << ch << endl;
			}
				invoice();
			}
			
		}
	}		
};

class welcome
{
	public:
	int welcom()
	{
		ifstream inp("welcome.txt");
		if(!inp)
		{
			cout<<"cant open file";//if file not open then it show 
		}
		char str[300];
		while(inp)
		{
			inp.getline(str,300);//default '/n'
			if(inp)
				cout<<str<<endl;
		}
		inp.close();
		sleep(2);//it can wait for 2 second after below print
		cout<<"\n starting the program please wait ..."<<endl;
		sleep(2);//means like start game that give loading section
		cout<<"\n start program few second ...";
		sleep(2);
		system("cls");
		
	}
	
};



int main()
{	int i,j;
	welcome obj[50];
for(i=0;i<50;i++)
	{
	
	obj[i].welcom();
	car ob[i];
    ob[i].getdata();
	}
}
	int login_Entry()
	{
		string pwd ="";
		char ch;
		//line_end(10);
		color(257);
		{
		
		cout<<"\n\n\n\n\n\n\n\n\t\t\t       PRESSENTING TO CAR RENTAL MANAGEMENT SERIVECE \n\n";
		cout<<"\t\t\t\t\t------------------------------";
		cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
		cout<<"\t\t\t\t\t------------------------------\n\n";	
		cout << "\t\t\t\t\tEnter Password: ";
		//line_end(5);
		ch = _getch();
	    }
   while(ch != 13){//character 13 is enter
      pwd.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pwd == "jakash")//ja for jagir //ka for karan //sh for shreya
   {
      cout << "\n\n\n\t\t\t\t\t\tSUCCESS ENTRY \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\t ABORTED...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login_Entry();
   }
	}
