#include<conio.h>//getch()
#include<iostream>
#include<string.h>
#include<windows.h>//sleep()
#include<time.h>//random
#include<fstream>
using namespace std;
int password();

void Main_Menu();

class Bike
{
	
    private:
        
        string Name,Vehical_name,CNIC_no;
		string Vehical_no,Phone_no;
    public:
    	
		int Innerchoice;
        int Bike_Menu()
        {
	        cout<<"\t\t\t\tYou Are In Bike Service"<<endl<<endl;
	        cout<<"* We Are Provding These Bikes For Rent "<<endl;
	        cout<<"1)Pak Hero 70 CC"<<endl;
	        cout<<"2)Road Prince 70 CC"<<endl;
			cout<<"3)Honda 70 CC"<<endl;
	        cout<<"4)Honda 125 CC"<<endl;
	        cout<<"5)Yamaha 150 CC"<<endl;
	        cout<<"6)Heavy Bike 500 CC"<<endl;
			cout<<"7)Suzuki 150 CC"<<endl;
	        cin>>Innerchoice;
	        
			while(Innerchoice>7 || Innerchoice<1)
	        {
	        	cout<<"Enter the Valid Option: ";
	        	cin>>Innerchoice;
			}
			
			return Innerchoice;
	    }
	    
	    int Write_File(const char* FileName)
	    {
	        fstream File; // create file object.
	        File.open(FileName, ios::app); // Open the file in append mode.
	        
	        // Write our gathered info to file stream just opened:
            File<<"\n-----------------------------------------------------" << endl;
            File<<"> Name           : " << Name << endl; 
            File<<"> CNIC Number    : " << CNIC_no << endl; 
            File<<"> Phone Number   : " << Phone_no << endl; 
            File<<"> Vehicle Name   : " << Vehical_name << endl; 
            File<<"> Vehicle Number : " << Vehical_no << endl; 
            File<<"-----------------------------------------------------" << endl;
            File.close(); // Close the file buffer and save.
        }
		
		void registration()
		{
		    cout<<"* Registered Yourself Please "<<endl;
		    cout<<"*Enter Your Name:"<<endl; cin>>Name;
		    cout<<"*Enter Your CNIC Number:"<<endl; cin>>CNIC_no;
		    cout<<"*Enter Your Phone Number:"<<endl; cin>>Phone_no;
		    cout<<"*Enter Your Vehical Name :"<<endl; cin>>Vehical_name;
	        cout<<"*Enter Your Vehical Number :"<<endl; cin>>Vehical_no;
	        
	        Name += ".txt"; // add file extension.
	        Write_File(Name.c_str()); // call our file handling function.
		}
		
		string price_calculate1(string vehical_name)
		{
		    float time,total_price;
	        cout<<"*Rent of Pak Hero Per Hour is Rs-150 "<<endl;
	        cout<<"*Enter Pak Hero Hours For Rent:"<<endl;
	        cin>>time;
	        total_price=(150)*(time);
	        cout<<"Total Rent of Pak Hero For "<<time<<" Hours is :"<<total_price<<endl;
	    }
    	
		void Road_prince_price()
		{
	        float time,total_price;
	        cout<<"*Rent of Road Prince Per Hour is Rs-160 "<<endl;
	        cout<<"*Enter Road Prince Hours For Rent:"<<endl;
	        cin>>time;
	        total_price=(160)*(time);
	        cout<<"Total Rent of Road Prince For "<<time<<" Hours is :"<<total_price<<endl;
	    }
	    
	    void Honda_price()
		{
	    	float time,total_price;
	        cout<<"*Rent of Honda Per Hour is Rs-170 "<<endl; 
			cout<<"*Enter Honda Hours For Rent:"<<endl;
	        cin>>time;
	        total_price=(170)*(time);
	        cout<<"Total Rent of Honda For "<<time<<" Hours is :"<<total_price<<endl;
		}
		
	    void Honda_125_price()
		{
	        float time,total_price;
	        cout<<"*Rent of Honda 125 Per Hour is Rs-200 "<<endl; 
			cout<<"*Enter Honda 125 Hours For Rent:"<<endl;
	        cin>>time;
	        total_price=(200)*(time);
	        cout<<"Total Rent of Honda 125 For "<<time<<" Hours is :"<<total_price<<endl;
		}
		
		void Yamaha_price()
		{
		        float time,total_price;
		        cout<<"*Rent of Yamaha Per Hour is Rs-120 "<<endl; 
				cout<<"*Enter Yamaha Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(120)*(time);
		        cout<<"Total Rent of Yamaha For "<<time<<" Hours is :"<<total_price<<endl;
		}
	    
		void Heavy_Bike_price()
		{
		        float time,total_price;
		        cout<<"*Rent of Heavy Bike Per Hour is Rs-500 "<<endl;
				cout<<"*Enter Heavy Bike Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(500)*(time);
		        cout<<"Total Rent of Heavy Bike For "<<time<<" Hours is :"<<total_price<<endl;
		}
		
	    void Suzuki_price()
		{
		        float time,total_price;
		        cout<<"*Rent of Suzuki Per Hour is Rs-210 "<<endl;
				cout<<"*Enter Suzuki Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(210)*(time);
		        cout<<"Total Rent of Suzuki For "<<time<<" Hours is :"<<total_price<<endl;
		}

};

class Car:public Bike
{
    public:
        int car_Menu()
        {
	    	int Innerchoice;
	        cout<<"\t\t\t\tYou Are In Cars Service"<<endl<<endl;
	        cout<<"* We Are Provding These Cars For Rent "<<endl;
			cout<<"1)Mehran 800 CC"<<endl;
	        cout<<"2)Alto 900 CC"<<endl;
	        cout<<"3)Swift 1000 CC"<<endl;
	        cout<<"4)Civic 2018 1800 CC"<<endl;
			cout<<"5)Audi OOOO A6 CC"<<endl;
			cout<<"6)Coralla 2100 CC"<<endl;
	        cout<<"7)Suzuki Vitz 1300 CC"<<endl;
	        cout<<"8)Frari 2500 CC"<<endl;
			cin>>Innerchoice;
			
			while(Innerchoice>8 || Innerchoice<1)
	        {
	        	cout<<"Enter the Valid Option: ";
	        	cin>>Innerchoice;
			}
	    
			return Innerchoice;
		}
		
        string price_calculate2(string vehical_name)
		{
		        float time,total_price;
		        cout<<"*Rent of"<<vehical_name<<" Per Hour is Rs-500 "<<endl;
				cout<<"*Enter"<<vehical_name<<" Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(500)*(time);
		        cout<<"Total Rent of "<<vehical_name<<" For "<<time<<" Hours is:"<<total_price<<endl;
		}

	    void Alto_price()
		{
		        float time,total_price;
		        cout<<"*Rent of Alto Per Hour is Rs-700 "<<endl;
				cout<<"*Enter Alto Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(700)*(time);
		        cout<<"Total Rent of Alto For "<<time<<" Hours is :"<<total_price<<endl;
		}
		    
		void Swift_price()
		{
		        float time,total_price;
		        cout<<"*Rent of Swift Per Hour is Rs-900 "<<endl;
				cout<<"*Enter Swift Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(900)*(time);
		        cout<<"Total Rent of Swift For "<<time<<" Hours is :"<<total_price<<endl;
		}
		    
		void Civic_price()
		{
		        float time,total_price;
		        cout<<"*Rent of Civic Per Hour is Rs-1500 "<<endl;
				cout<<"*Enter Civic Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(1500)*(time);
		        cout<<"Total Rent of Civic For "<<time<<" Hours is :"<<total_price<<endl;
		}
		
		void Audi_price()
		{
			    float time,total_price;
		        cout<<"*Rent of Audi Per Hour is Rs-11000 "<<endl;
				cout<<"*Enter Audi Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(11000)*(time);
		        cout<<"Total Rent of Audi For "<<time<<" Hours is :"<<total_price<<endl;
		}
		    
		void Coralla_price()
		{
		        float time,total_price;
		        cout<<"*Rent of Coralla Per Hour is Rs-2000 "<<endl;
				cout<<"*Enter Coralla Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(2000)*(time);
		        cout<<"Total Rent of Coralla For "<<time<<" Hours is :"<<total_price<<endl;
		}
		
		void Suzuki_price()
		{
		        float time,total_price;
		        cout<<"*Rent of Suzuki Per Hour is Rs-1500 "<<endl;
				cout<<"*Enter Suzuki Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(1500)*(time);
		        cout<<"Total Rent of Suzuki For "<<time<<" Hours is :"<<total_price<<endl;
		}
		
		void Frari_price()
		{
		        float time,total_price;
		        cout<<"*Rent of Frari Per Hour is Rs-15000 "<<endl;
				cout<<"*Enter Frari Hours For Rent:"<<endl;
		        cin>>time;
		        total_price=(15000)*(time);
		        cout<<"Total Rent of Frari For "<<time<<" Hours is :"<<total_price<<endl;
		}
		
};

class Bus:public Bike
{
    public:
    	int Bus_menu()
		{
	    	int Innerchoice;
	        cout<<"\t\t\t\tYou Are In Bus Service"<<endl<<endl;
	        cout<<"* We Are Provding These Bus For Rent "<<endl;
			cout<<"1)Hino 32 Seater"<<endl;
	        cout<<"2)Devo 65 Seater"<<endl;
	        cout<<"3)Express 80 Seater"<<endl;
	        cout<<"4)Buraq 65 Seater"<<endl; 
			cin>>Innerchoice;
	        
	        while(Innerchoice>4 || Innerchoice<1)
	        {
	        	cout<<"Enter the Valid Option: ";
	        	cin>>Innerchoice;
			}
			
			return Innerchoice;
		}
		
		void Hino_price()
		{
		    float days,total_price;
		    cout<<"*Rent of Hino Per Day is Rs-5000 "<<endl;
			cout<<"*Enter Hino Day For Rent:"<<endl;
	        cin>>days;
	        total_price=(5000)*(days);
	        cout<<"Total Rent of Hino For "<<days<<" Hours is :"<<total_price<<endl;
		}

	    void Devo_price()
		{
		    float days,total_price;
	        cout<<"*Rent of Devo Per Day is Rs-8000 "<<endl;
			cout<<"*Enter Devo Day For Rent:"<<endl;
	        cin>>days;
	        total_price=(8000)*(days);
	        cout<<"Total Rent of Devo For "<<days<<" Hours is :"<<total_price<<endl;
		}

	    void Express_price()
		{
		    float days,total_price;
	        cout<<"*Rent of Express Per Day is Rs-10000 "<<endl;
			cout<<"*Enter Express Day For Rent:"<<endl;
	        cin>>days;
	        total_price=(10000)*(days);
	        cout<<"Total Rent of Express For "<<days<<" Hours is :"<<total_price<<endl;
		}

	    void Buraq_price()
		{
		    float days,total_price;
		    cout<<"*Rent of Buraq Per Day is Rs-8500 "<<endl;
			cout<<"*Enter Buraq Day For Rent:"<<endl;
	        cin>>days;
	        total_price=(8500)*(days);
	        cout<<"Total Rent of Buraq For "<<days<<" Hours is :"<<total_price<<endl;
		}

};

int main()
{
	     int k=3;
     int num_vac;
    cout<<"\n\n\t\t\xB3\xB2=\xB2=\xB2-\xB3 SUPERIOR VEHICLE RENT SYSTEM  \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<"\t\t\t\t\t\t Powered By:- HUSTLERS "<<endl;
    cout<<"\n\n\t\t\t\xB3\xB2=\xB2=\xB2-\xB3  MEMBERS ARE \xB3\xB2=\xB2=\xB2-\xB3\n\n"<<endl;
    cout<<"\t\t\t\t Awais Ali "<<endl;
    cout<<"\t\t\t\t Hanzala Salfii "<<endl;
     cout<<"\t\n\n Press any key to continue.............  "<<endl;
    getch();
    B:
    system("cls");
    cout<<"\n\n\t\t\t\t*********************************************";
    cout<<"\n\t\t\t\t\tEnter User name and Password\n";
    cout<<"\t\t\t\t*********************************************\n";
    cout<<"\n\t\t\t\t\tHINT: Favourite Sir\n";
	while(k>=1)
    {
    int c = password();
    if(c==1)
        break;
    else
        cout<<"\n\n\t\t Wrong Password Or User Name \n\n\t\t You Can try Only "<<k-1<<" times more";
    k--;
    if(k<1)
        {
            for(int i=59; i>=0; i--)
            {
              system("cls");
              cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\tYOU ARE BLOCKED FOR 1 MINUTE!!";
              cout<<"\n\n\n\n\n\n\t\t\t\t\tTRY AFTER "<<i<<" SECONDS.....";
              Sleep(1000);
            }
              k=3;
              goto B;
        }
    }
	
	system("cls"); 
	
    int choice1;
    char reaccure;
    cout<<endl<<endl;
    cout<<"\t\t\xB3\xB2=\xB2=\xB2-\xB3 WELCOME IN Superior VEHICAL RENT SYSTEM \xB3\xB2=\xB2=\xB2-\xB3"<<endl<<endl<<endl;
    cout<<"\t\xB3\xB2=\xB2=\xB2-\xB3 We Are Serving Three Types Of Vehicals For Rent \xB3\xB2=\xB2=\xB2-\xB3"<<endl<<endl;
    cout<<"\t\t\t\xB3\xB2=\xB2=\xB2-\xB3 1)Bike \xB3\xB2=\xB2=\xB2-\xB3"<<endl;
    cout<<"\t\t\t\xB3\xB2=\xB2=\xB2-\xB3 2)Car  \xB3\xB2=\xB2=\xB2-\xB3"<<endl;
    cout<<"\t\t\t\xB3\xB2=\xB2=\xB2-\xB3 3)Bus  \xB3\xB2=\xB2=\xB2-\xB3"<<endl;
    
	do
	{
	    Main_Menu();
	    cin>>choice1;
	    
		while(choice1>3 || choice1<1)
	        {
	        	cout<<"Please enter the valid number: ";
	        	cin>>choice1;
			}
		switch(choice1)
	{	
		case 1:
		{
		        cout<<"\t\t\t\tYou Are In Bike Service"<<endl;
		        Bike b1,b2,b3,b4,b5,b6,b7;
		        b1.Innerchoice=b2.Bike_Menu();
		    switch(b1.Innerchoice)
		{
		case 1:
		{
		        string bikename1="Pak Hero";
				b2.registration();
		        b2.price_calculate1(bikename1);
		    break;
		}
		case 2:
		{
		    b2.registration();
			b2.Road_prince_price();
		    break;
		}
		case 3:
		{
		    b3.registration();
			b3.Honda_price();
		    break;
		}
	    case 4:
		{
		    b4.registration();
			b4.Honda_125_price();
		    break;
		}
		case 5:
		{
		    b5.registration();
			b5.Yamaha_price();
		    break;
		}
		case 6:
		{
		    b6.registration();
			b6.Heavy_Bike_price();
		    break;
		}
		case 7:
		{
		    b7.registration();
			b7.Suzuki_price();
		    break;
		}
		    default:
		{
		        cout<<"Please enter valid input...!"<<endl;
		
		}
		}
		    break;
		}
	
	case 2:
	{
	        cout<<"\t\t\t\tYou Are In Car Service"<<endl;
	        Car c1,c2,c3,c4,c5,c6,c7,c8;
 	    	c1.Innerchoice=c2.car_Menu();
	    	if(c1.Innerchoice==1)
	{
	        string carname1="Mehran";
			c2.registration();
	        c2.price_calculate2(carname1);
	}
	    if(c1.Innerchoice==2)
	{
	        string carname2="Alto";
			c2.registration();
	        c2.Alto_price();
	}
	    if(c1.Innerchoice==3)
	{
	        string carname3="Swift";
			c3.registration();
	        c3.Swift_price();
	}
	    if(c1.Innerchoice==4)
	{
	        string carname4="Civic";
			c4.registration();
	        c4.Civic_price();
	}
	    if(c1.Innerchoice==5)
	{
	        string carname5="Audi A6";
			c5.registration();
	        c5.Audi_price();
	}
	    if(c1.Innerchoice==6)
	{
	        string carname6="Corolla";
			c6.registration();
	        c6.Coralla_price();
	}
	    if(c1.Innerchoice==7)
	{
	        string carname7="Suzuki Vitz";
			c7.registration();
	        c7.Suzuki_price();
	}
	    if(c1.Innerchoice==8)
	{
	        string carname8="Ferrari";
			c8.registration();
	        c8.Frari_price();
	}
	}
	    break;
	}
	if(choice1==3)
		{
		        cout<<"\t\t\t\tYou Are In BUS Service"<<endl;
		        Bus bus1,bus2,bus3,bus4;
	 	    	bus1.Innerchoice=bus2.Bus_menu();
		    	
			if(bus1.Innerchoice==1)
		{
		        string busname1="Hino 32";
				bus2.registration();
		        bus2.Hino_price();
		}
		    if(bus1.Innerchoice==2)
		{
		        string busname2="Devo 65";
				bus2.registration();
		        bus2.Devo_price();
		}
		    if(bus1.Innerchoice==3)
		{
		        string busname3="Express 80";
				bus3.registration();
		        bus3.Express_price();
		}
		    if(bus1.Innerchoice==4)
		{
		        string busname4="Buraq 32";
				bus4.registration();
		        bus4.Buraq_price();
		}
		    if(bus1.Innerchoice>4 || bus1.Innerchoice<1)
		{
		    	cout<<"Please enter valid input...!"<<endl;
		}
	    
		}
	    

	        cout<<endl<<endl;
			cout<<"Press M for Main Menu "<<endl;
			cout<<"Press Q for quit "<<endl;
	        cin>>reaccure;
	
	}
	    while(reaccure=='M' || reaccure=='m');
	    if(reaccure=='Q' || reaccure=='q')
	{
	        cout<<"THANKS FOR VISITING.	!"<<endl;
	}
return 0;

}

void Main_Menu()
{
        cout<<"* Press 1 for Bike:"<<endl;
        cout<<"* Press 2 for Car:"<<endl;
        cout<<"* Press 3 for Bus:"<<endl;
        cout<<"* Press Any Key For Exit:"<<endl;
}
int password()
{
    char cname[30],pass[20];
    int ch, i=0,cap=0,capt=0;
    cout<<"\n\n\n\n\n\t\t\t\t\t USER NAME:  ";
    fflush(stdin);
    gets(cname);
    cout<<"\n\t\t\t\t\t PASSWORD:    ";
    while((ch=getch()) != 13)
    {
        cout<<"*";
        pass[i]=ch;
        i++;
    }
    pass[i] = '\0';
    srand(time(0));
    cap=rand();
    cout<<"\n\t\t\t\t\t CAPTURE:->  "<<cap<<endl;
    cout<<" Please enter the valid capture :-   ";
    cin>>capt;
    if( (strcmp(cname,"nagesh")==0) && (strcmp(pass,"nagesh")==0) && cap==capt)
        return 1;
    else
        return 0;
}
