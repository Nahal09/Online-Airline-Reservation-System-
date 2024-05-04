#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string fnumber,fname,flightname;
string name,email,passnumber,dep,arr,date;
int sno,price;
char gender,c;
int pnumber,cnic;
void flight_details(){
	system("cls");
	ofstream flightFile;
	char ch;

	string flight[]={"Maldives","Turkey","Europe","Canada","UK","Australia"};
	cout<<"*FLIGHT DETAILS*"<<endl;
	cout<<"MALDIVES"<<endl;
	cout<<"TURKEY"<<endl;
	cout<<"EUROPE"<<endl;
	cout<<"CANADA"<<endl;
	cout<<"UK"<<endl;
	cout<<"AUSTRAILIA"<<endl;

	cout<<"**Welcome to SN Airline**"<<endl;
	cout<<"Press first letter of country of which you want  to book the flight:";
	string Maldives,Turkey,Europe,Canada,UK,Australia;
	char choice;
		cin>>choice; 
	switch(choice){
		case 'M':
			cout<<"*Enjoy your journey!"<<endl;
			cout<<"Following are the flight details"<<endl;
			
			cout<<"MAL-797"<<endl;
			cout<<"27-08-2022 \t 11 am \t 10hrs \t  Rs=90000"<<endl;
			break;
			
			case 'T':
		
			cout<<"*Enjoy your journey!"<<endl;
			cout<<"Following are the flight details"<<endl;
			
			cout<<"TUR-498"<<endl;
			cout<<"7-07-2022 \t 6pm \t 7hrs \t  Rs=50000"<<endl;
			break;
			
			case 'E':
			
			cout<<"*Enjoy your journey!"<<endl;
			cout<<"Following are the flight details"<<endl;
			
			cout<<"BRI-498"<<endl;
			cout<<"12-05-2022 \t 4 am \t 15hrs \t  Rs=150000"<<endl;
			break;
			
			case 'C':
		
			cout<<"*Enjoy your journey!"<<endl;
			cout<<"Following are the flight details"<<endl;
			
			cout<<"CAN-498"<<endl;
			cout<<"27-08-2022 \t 6 am \t 18hrs \t  Rs=250000"<<endl;
			break;
			
			case 'U':

			cout<<"*Enjoy your journey!"<<endl;
			cout<<"Following are the flight details"<<endl;
			
			cout<<"UK-498"<<endl;
			cout<<"18-12-2022 \t 7 pm \t 8hrs \t  Rs=90000"<<endl;
			break;
			
			case 'A':
	
			cout<<"*Enjoy your journey!"<<endl;
			cout<<"Following are the flight details"<<endl;
			
			cout<<"AUS-498"<<endl;
			cout<<"06-06-2022 \t 11 am \t 11hrs \t  Rs=60000"<<endl;
			break;
	}
	
	
	flightFile.open("flightinformation.txt",ios::app|ios::out);
	cout<<"FLIGHT NAME WHICH THEY SELECT: ";
	cin>>fname;
	cout<<"PRICE: ";
	cin>>price; 
		
		flightFile<<"fname: "<<fname<<endl<<"fprice:"<<price<<endl;
			flightFile.close();
			cout<<"**RECORD ENETERED SUCCESSFULLY**"<<endl;
			cout<<endl<<"Return to main menu(y/n)"<<endl;
		cin>>ch;
		if(ch=='y'|| ch=='Y'){
	    	system("cls");
	    	flight_details();
		}
    	else{
    		flightFile.open("flightinformation.txt", ios::app|ios::out);
	 	   			flightFile<<"fname: "<<fname<<endl<<"fprice:"<<price<<endl;
			flightFile.close();
		
		}
		
	
}
void customer(){
	system("cls");
	m:
	int choice;
		ofstream myFile;
	char ch;
	 cout<<"\t        ABC Airline        \t"<<endl;
	 cout<<"               __Passenger mainmenu__  "<<endl;
	 cout<<"\t ____________________________________"<<endl;
 	 cout<<"\t|\t\t\t\t\t\t                |" <<endl;
	 cout<<"\t|\tpress 1 for customer details    \t|\t"<<endl;
	 cout<<"\t|\tpress 2 for flight registration \t|\t"<<endl;
	 cout<<"\t|\tpress 3 for ticket and charges \t    |\t"<<endl;
	 cout<<"\t|\tpress 4 for exit                 \t|\t"<<endl;
	cout<<"\t|\t\t\t\t\t\t                |" <<endl;
	cout<<"\t|______________________________________ |"<<endl;
	cout<<"enter choice:";
	cin>>choice;
	cout<<endl;
	
	switch(choice){
		case 1:
			
			cout<<"***COSTUMER DETAILS***"<<endl;
				myFile.open("information.txt",ios::app|ios::out);
			cout<<"ENTER YOUR NAME: "<<endl;
			cin>>name;
			cout<<"ENTER YOUR CINC: "<<endl;
			cin>>cnic;
			cout<<"ENTER YOUR EMAIL: "<<endl;
			cin>>email;
			cout<<"ENTER YOUR PASSPORT NUMBER: "<<endl;
			cin>>passnumber;
			cout<<"ENTER YOUR GENDER: "<<endl;
			cin>>gender;
			cout<<"ENTER YOUR CONTACT NUMBER: "<<endl;
			cin>>pnumber;
			

		
			myFile<<"Name: "<<name<<endl<<"CNIC: "<<cnic<<endl<<"Passport Number: "<<passnumber<<endl<<"Gender: "<<gender<<endl<<"Contact Nummber: "<<pnumber<<endl;
			myFile.close();
			cout<<"**RECORD ENETERED SUCCESSFULLY**"<<endl;
			cout<<endl<<"Return to main menu(y/n)"<<endl;
		cin>>ch;
		if(ch=='y'|| ch=='Y'){
	    	system("cls");
	    	customer();
		}
    	else{
    		myFile.open("database.txt", ios::app|ios::out);
	 	   		myFile<<"Name: "<<name<<endl<<"CNIC: "<<cnic<<endl<<"Passport Number: "<<passnumber<<endl<<"Gender: "<<gender<<endl<<"Contact Nummber: "<<pnumber<<endl;
			myFile.close();
			cout<<"**RECORD ENETERED SUCCESSFULLY**"<<endl;
			cout<<endl<<"Return to main menu(y/n)"<<endl;
		}
			
		case 2:
		flight_details();
	    	
	      default:
	   cout<<"THANK YOU!";
	   break; 
	
	
	   
	   
	 }  	
          	
	   cout<<endl<<"Do you want to cancel the Flight?(y/n)"<<endl;
		cin>>c;
		if(c=='y'|| c=='Y'){
			cout<<"Your Flight has been cancelled"<<endl;
	    	exit(0);
		}
           	
}


void admin(){
	system("cls");
	n:
	int a;
	 cout<<"\t        ABC Airline        \t"<<endl;
	 cout<<"               _Admin mainmenu__  "<<endl;
	 cout<<"\t ___________________________________"<<endl;
 	 cout<<"\t|\t\t\t\t\t\t|" <<endl;
	 cout<<"\t|\tpress 1 for passengar data     \t|\t"<<endl;
	 cout<<"\t|\tpress 2 passengar travel data  \t|\t"<<endl;
	 cout<<"\t|\tpress 3 ticket calculation     \t|\t"<<endl;
	 cout<<"\t|\t press 4 to go back to menu    \t|\t"<<endl;
	cout<<"\t|\t\t\t\t\t\t                        |" <<endl;
	cout<<"\t| ___________________________________|"<<endl;
	cout<<"enter choice:";
	cin>>a;
	
	
	switch(a){
		//system("cls");
		case 1:
			
			cout<<"******"<<endl;
			cout<<"***PASSENGAR DATA***"<<endl;
			cout<<"******"<<endl;
	cout<<"\n------------------------------------------------------------------------------";
	cout<<"\n\tName:"<<name<<endl<<"\tCnic:"<<cnic<<endl<<"\tEmail:"<<email<<endl<<"\tPassport Number:"<<passnumber<<endl<<"\tGender:"<<gender<<endl<<"\tPhone Number:"<<pnumber;
	cout<<"\n------------------------------------------------------------------------------"<<endl;
		   	
	break;
	
	case 2:
	        cout<<"******"<<endl;
			cout<<"***PASSENGAR TRAVEL  DATA***"<<endl;
			cout<<"******"<<endl; 
            cout<<"\n------------------------------------------------------------------------------";
	cout<<"\n\tFlight Name:"<<fname<<endl<<"Price: "<<price<<endl;
	cout<<"\n------------------------------------------------------------------------------"<<endl;
			break;

	
	
	case 3:
	cout<<"******"<<endl;
	cout<<"****TCKET CALCULATION****"<<endl;
	cout<<"******"<<endl;	
	cout<<"\n\tName:"<<name<<endl<<"\tPassport Number:"<<passnumber<<endl<<"\tPhone Number:"<<pnumber;
	cout<<"\n\tFlight Name:"<<fname<<endl;
	cout<<"\n\tPrice: "<<price<<endl;
	
	}
	cout<<"THANK YOU :)";

}		

int main(){
	system("cls");
	m:
	int b;
	cout<<endl;
	cout<<"___SN TRAVELLERS___"<<endl;
	cout<<"*******"<<endl;
	cout<<"**PRESS 1 FOR ADMIN**"<<endl;
	cout<<"**PRESS 2 FOR CUSTOMERS**"<<endl;
	cout<<"*******"<<endl;
	cout<<"ENTER CHOICE:";
	cin>>b;
	switch(b){
		case 1:
			admin();
		break;
	
	case 2:
	   customer();
	   break;
	
}
	goto m;
}
