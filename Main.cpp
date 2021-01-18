#include<iostream>
#include<string.h>
#include<fstream>
#include<windows.h>

using namespace std;

void mainMenu();
void mainSwitch(int a);
void guestSummary();
void guestSummarySwitch(int n);
void printBooking();
void bookingSwitch(int n);
void bookIt();
void bookingSummary();
void bookingSummarySwitch(int n);
void bookItSwitch(int n);
void printCheckIn();
void checkInSwitch(int n);
void doCheckIn();
void doCheckInSwitch(int n);
void checkInSummary();
void checkInSummarySwitch(int n);
void printCheckOut();
void checkOutSwitch(int n);
void doCheckOut();
void doCheckOutSwitch(int n);
void checkOutSummary();
void checkOutSummarySwitch(int n);
void printBill();

struct booking{
	string id;
	string name;
	string phone;
	string fromDate;
	string toDate;
	string address;
};
int r=1;
booking book[100];
struct checkIn{
	string id;
	string name;
	string phone;
	string fromDate;
	string toDate;
	string address;
	int paymentAdvance;
};
int s=1;
checkIn checkI[100];

struct checkOut{
	string name;
	string phone;
	string checkOutDate;
	string address;
	string payment;
	string totalPayment;
	string daysStayed;
};
int t=1;
checkOut checkO[100];

int main(){
		mainMenu();
	return 0;
}

void mainMenu(){
	system("cls");
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##\t Main Menu  \t\t##"<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t1.Booking"<<endl;
	cout<<"\t\t2.Check In"<<endl;
	cout<<"\t\t3.Check Out"<<endl;
	cout<<"\t\t4.Guest Summary"<<endl;
	cout<<"\t\t5.Exit"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;	
	
		int num;
		cout<<"\t\tSelect a number from 1 to 5:\t";
		cin>>num;
		mainSwitch(num);
}

void mainSwitch(int n){
	switch(n){
			case 1:
				printBooking();
				break;
			case 2:
				printCheckIn();
				break;
			case 3:
				printCheckOut();
				break;
			case 4:
				guestSummary();
				break;
			case 5:
				exit(1);
				break;
			default:
				cout<<"\t\tSelect a number from 1 to 5:\t";
				cin>>n;
				mainSwitch(n);
		}
}

void guestSummary(){
	system("cls");
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##\t Guest Summary  \t\t##"<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t1.Booking Summary"<<endl;
	cout<<"\t\t2.Check In Summary"<<endl;
	cout<<"\t\t3.Check Out Summary"<<endl;
	cout<<"\t\t4.Main Menu"<<endl;
	cout<<"\t\t5.Exit"<<endl;
	int num;
	cout<<"\t\tSelect a number from 1 to 5:\t";
	cin>>num;
	guestSummarySwitch(num);
}

void guestSummarySwitch(int n){
	switch(n){
			case 1:
				bookingSummary();
				break;
			case 2:
				checkInSummary();
				break;
			case 3:
				checkOutSummary();
				break;
			case 4:
				mainMenu();
				break;
			case 5:
				exit(1);
				break;
			default:
				cout<<"\t\tSelect a number from 1 to 5:\t";
				cin>>n;
				guestSummarySwitch(n);
		}
}

void printBooking(){
	system("cls");
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##\t Booking \t\t##"<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t1.Book a room"<<endl;
	cout<<"\t\t2.Main Menu"<<endl;
	cout<<"\t\t3.Exit"<<endl;	
	cout<<"\t\tSelect a number from 1 to 3:\t";
		int num;
		cout<<"\t\tSelect a number from 1 to 3:\t";
		cin>>num;
		bookingSwitch(num);
}

void bookingSwitch(int n){
	switch(n){
			case 1:
				bookIt();
				break;
			case 2:
				mainMenu();
				break;
			case 3:
				exit(1);
				break;
			default:
				cout<<"\t\tSelect a number from 1 to 3:\t";
				cin>>n;
				bookingSwitch(n);
		}
}
void bookIt(){
	system("cls");
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##\t Booking \t\t##"<<endl;
	cout<<"\t\t##################################"<<endl;
	ofstream write;
		write.open("Booking.txt", ios::app);
		for(int i=0;i<r;i++){
			cout<<"\t\tYour ID:\t";
			cin>>book[i].id;
			cout<<"\t\tYour First Name:\t";
			cin>>book[i].name;
			cout<<"\t\tPhone:\t";
			cin>>book[i].phone;
			cout<<"\t\tFrom Date(ddmmyyyy):\t";
			cin>>book[i].fromDate;
   			cout<<"\t\tTo Date(ddmmyyyy):\t";
			cin>>book[i].toDate;
			cout<<"\t\tAddress:\t";
			cin.ignore();
			getline(cin,book[i].address);
			if(write.is_open()){
			write<<book[i].id<<" "<<book[i].name<<" "<<book[i].phone<<" "<<book[i].fromDate<<" "<<book[i].toDate<<" "<<book[i].address<<endl;
			}
		else
		{
			cout<<"\t\tfile not created"<<endl;
		}
	}
	r++;
		write.close();
		cout<<"\t\tYour Booking Is Done."<<endl<<endl;
	
		//Option List
		
		cout<<"\t\t1.Main Menu"<<endl;
		cout<<"\t\t2.Back"<<endl;
		cout<<"\t\t3.exit"<<endl;
		int num;
		cout<<"\t\tSelect a number from 1 to 3\t";
		cin>>num;
		bookItSwitch(num);
}
void bookItSwitch(int n){
	switch(n){
			case 1:
				mainMenu();
				break;
			case 2:
				printBooking();
		 		break;
			case 3:
				exit(1);
				break;
			default:
				cout<<"\t\tSelect a number from 1 to 3:\t";
				cin>>n;
				bookItSwitch(n);
		}
}

void bookingSummary(){
	system("cls");
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
		cout<<"\t\t##################################"<<endl;
		cout<<"\t\t##\t Booking Summary \t\t##"<<endl;
		cout<<"\t\t##################################"<<endl;
		string id, name, adress, phone, fromDate, toDate;
		cout<<"\t\tID\t\t"<<"Name\t"<<"Phone\t\t"<<"fromDate\t"<<"toDate\t\t"<<" Adress\t\n";
		ifstream read;
		read.open("booking.txt");
		if(read.is_open()){
		for(int i=0;i<r;i++){
			read>>id;
			cout<<"\t\t"<<id<<"\t";
			read>>name;
			cout<<name<<"\t";
			read>>phone;
			cout<<phone<<"\t";
			read>>fromDate;
			cout<<fromDate<<"\t";
			read>>toDate;
			cout<<toDate<<"\t";
			getline(read,adress);
			cout<<adress<<"\t"<<endl;
		}
	}
		else
			cout<<"\t\tError File Opening.";
	
		cout<<"\t\t1.Main Menu"<<endl;
		cout<<"\t\t2.Back"<<endl;
		cout<<"\t\t3.exit"<<endl;
		int num;
		cout<<"\t\tSelect a number from 1 to 3:\t";
		cin>>num;
		bookingSummarySwitch(num);
}


void bookingSummarySwitch(int n){
	switch(n){
			case 1:
				mainMenu();
				break;
			case 2:
				guestSummary();
				break;
			case 3:
				exit(1);
				break;
			default:
				cout<<"\t\tSelect a number from 1 to 3:\t";
				cin>>n;
				bookingSummarySwitch(n);
		}
}

void printCheckIn(){
	system("cls");
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##\t Check In \t\t##"<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t1.Do a Check In"<<endl;
	cout<<"\t\t2.Main Menu"<<endl;
	cout<<"\t\t3.Exit"<<endl;	
		int num;
		cout<<"\t\tSelect a number from 1 to 3:\t";
		cin>>num;
		checkInSwitch(num);
		
}

void checkInSwitch(int n){
	switch(n){
			case 1:
				doCheckIn();
				break;
			case 2:
				mainMenu();
				break;
			case 3:
				exit(1);
			default:
				cout<<"\t\tSelect a number from 1 to 3:\t";
				cin>>n;
				checkInSwitch(n);
		}
}

void doCheckIn(){
	system("cls");
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##\t Check In \t\t##"<<endl;
	cout<<"\t\t##################################"<<endl;
		ofstream write;
		write.open("checkIn.txt", ios::app);
		for(int i=0;i<s;i++){
			cout<<"\t\tYour ID:\t";
			cin>>checkI[i].id;
			cout<<"\t\tYour First Name:\t";
			cin>>checkI[i].name;
			cout<<"\t\tPhone:\t";
			cin>>checkI[i].phone;
			cout<<"\t\tFrom Date(ddmmyyyy):\t";
			cin>>checkI[i].toDate;
			cout<<"\t\tTo Date(ddmmyyyy):\t";
			cin>>checkI[i].fromDate;
			cout<<"\t\tAddress:\t";
			cin.ignore();
			getline(cin,checkI[i].address);
			if(write.is_open()){
			write<<checkI[i].id<<" "<<checkI[i].name<<" "<<checkI[i].phone<<" "<<checkI[i].address<<endl;
			}
		else
		{
			cout<<"\t\tfile not created"<<endl;
		}
	}
	s++;
		write.close();
		cout<<"\t\tYour CheckIn Is Done."<<endl<<endl;
	
		//Option List
		
		cout<<"\t\t1.Main Menu"<<endl;
		cout<<"\t\t2.Back"<<endl;
		cout<<"\t\t3.exit"<<endl;
		int num;
		cout<<"\t\tSelect a number from 1 to 3:\t";
		cin>>num;
		doCheckInSwitch(num);
}

void doCheckInSwitch(int n){
	switch(n){
			case 1:
				mainMenu();
				break;
			case 2:
				printCheckIn();
				break;
			case 3:
				exit(1);
				break;
			default:
				cout<<"\t\tSelect a number from 1 to 3:\t";
				cin>>n;
				doCheckInSwitch(n);
		}
}

void checkInSummary(){
		system("cls");
		cout<<"\t\t##################################"<<endl;
		cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
		cout<<"\t\t##################################"<<endl<<endl;
		cout<<"\t\t##################################"<<endl;
		cout<<"\t\t##\t Check In Summary \t\t##"<<endl;
		cout<<"\t\t##################################"<<endl;
		string id, name, adress, phone, fromDate, toDate;
		cout<<"\t\tID\t\t"<<"Name\t"<<"Phone\t\t"<<"fromDate\t"<<"toDate\t\t"<<" Adress\t\n";
		ifstream read;
		read.open("checkIn.txt",ios::app);
		if(read.is_open()){
		for(int i=0;i<s;i++){
			read>>id;
			cout<<"\t\t"<<id<<"\t";
			read>>name;
			cout<<name<<"\t";
			read>>phone;
			cout<<phone<<"\t";
			read>>fromDate;
			cout<<fromDate<<"\t";
			read>>toDate;
			cout<<toDate<<"\t";
			getline(read,adress);
			cout<<adress<<"\t"<<endl;
		}
	}
		else
			cout<<"\t\tError File Opening.";
	
		cout<<"\t\t1.Main Menu"<<endl;
		cout<<"\t\t2.Back"<<endl;
		cout<<"\t\t3.exit"<<endl;
		int num;
		cout<<"\t\tSelect a number from 1 to 3:\t";
		cin>>num;
		checkInSummarySwitch(num);
}


void checkInSummarySwitch(int n){
	switch(n){
			case 1:
				mainMenu();
				break;
			case 2:
				checkInSummary();
				break;
			case 3:
				exit(1);
				break;
			default:
				cout<<"\t\tSelect a number from 1 to 3:\t";
				cin>>n;
				checkInSummarySwitch(n);
		}
}

void printCheckOut(){
	system("cls");
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
	
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##\t Check Out \t\t##"<<endl;	
	cout<<"\t\t##################################"<<endl;
		
		cout<<"\t\t1.Do a Check Out"<<endl;
		cout<<"\t\t2.Main Menu"<<endl;
		cout<<"\t\t3.Exit"<<endl;
		cout<<"\t\tSelect a number from 1 to 3:\t";
		int num;
		cin>>num;
		checkOutSwitch(num);
}

void checkOutSwitch(int n){
	switch(n){
			case 1:
				doCheckOut();
				break;
			case 2:
				mainMenu();
				break;
			case 3:
				exit(1);
				break;
			default:
				cout<<"\t\tSelect a number from 1 to 3:\t";
				cin>>n;
				checkOutSwitch(n);
		}
}

void doCheckOut(){
	system("cls");
	cout<<"\t\t##################################"<<endl;	
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##\t Check Out \t\t##"<<endl;
	cout<<"\t\t##################################"<<endl;
		ofstream write;
		write.open("checkIn.txt", ios::app);
		for(int i=0;i<s;i++){
			cout<<"\t\tYour First Name:\t";
			cin>>check[i].name;
			cout<<"\t\tPhone:\t";
			cin>>checkI[i].phone;
			SYSTEMTIME time;
			GetLocalTime(&time);
			cout<<"\t\tCheck Out Date(ddmmyyyy):\t"<<time.wDay<<time.wMonth<<time.wYear;		
			cin>>checkI[i].toDate;
			cout<<"Address:\t";
			cin.ignore();
			getline(cin,checkI[i].address);
			if(write.is_open()){
			write<<checkI[i].id<<" "<<checkI[i].name<<" "<<checkI[i].phone<<" "<<checkI[i].Date<<" "<<checkI[i].address<<endl;
			}
		else
		{
			cout<<"\t\tfile not created"<<endl;
		}
	}
	s++;
		write.close();
		cout<<"\t\tYour CheckOut Is Done."<<endl<<endl;
	
		//Option List
		
		cout<<"\t\t1.Main Menu"<<endl;
		cout<<"\t\t2.Back"<<endl;
		cout<<"\t\t3.exit"<<endl;
		int num;
		cout<<"\t\tSelect a number from 1 to 3:\t";
		cin>>num;
		doCheckOutSwitch(num);

}

void doCheckOutSwitch(int n){
	switch(n){
			case 1:
				mainMenu();
				break;
			case 2:
				printCheckOut();
				break;
			case 3:
				exit(1);
				break;
			default:
				cout<<"\t\tSelect a number from 1 to 3:\t";
				cin>>n;
				doCheckOutSwitch(n);
		}
}

void checkOutSummary(){
		system("
		cout<<"\t\t##################################"<<endl;
		cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
		cout<<"\t\t##################################"<<endl<<endl;
		cout<<"\t\t##################################"<<endl;
		cout<<"\t\t##\t Check In Summary \t\t##"<<endl;
		cout<<"\t\t##################################"<<endl;
		string id, name, adress, phone, fromDate, toDate;
		cout<<"\t\tID\t\t"<<"Name\t"<<"Phone\t\t"<<"fromDate\t"<<"toDate\t\t"<<" Adress\t\n";
		ifstream read;
		read.open("checkOut.txt",ios::app);
		if(read.is_open()){
		for(int i=0;i<2;i++){
			read>>id;
			cout<<"\t\t"<<id<<"\t";
			read>>name;
			cout<<name<<"\t";
			read>>phone;
			cout<<phone<<"\t";
			read>>fromDate;
			cout<<fromDate<<"\t";
			read>>toDate;
			cout<<toDate<<"\t";
			getline(read,adress);
			cout<<adress<<"\t"<<endl;
		}
	}
		else
			cout<<"\t\tError File Opening.";
		
		cout<<"\t\t1.Main Menu"<<endl;
		cout<<"\t\t2.Back"<<endl;
		cout<<"\t\t3.Print Bill"<<endl;
		cout<<"\t\t4.Exit"<<endl;
		int num;
		cout<<"\t\tSelect a number from 1 to 4.\t";
		cin>>num;
		checkOutSummarySwitch(num);
}


void checkOutSummarySwitch(int n){
	switch(n){
			case 1:
				mainMenu();
				break;
			case 2:
				checkOutSummary();
				break;
			case 3:
				printBill();
			break;	
			case 4:
				exit(1);
			default:
				cout<<"\t\tSelect a number from 1 to 4:\t";
				cin>>n;
				checkOutSummarySwitch(n);
		}
}



void printBill(){
	system("cls");
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##   Hotel Management Systeem\t##"<<endl;
	cout<<"\t\t##################################"<<endl<<endl;
	cout<<"\t\t##################################"<<endl;
	cout<<"\t\t##\t Bill \t\t##"<<endl;
	cout<<"\t\t##################################"<<endl;
	
	
	
}
