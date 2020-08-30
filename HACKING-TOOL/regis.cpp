#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

void header(){
	for(int x = 0; x < 80; x++){
		cout << "+";
	}
	
	cout << "			M A S U K A N  D A T A  M E M B E R " << endl;
	
	for(int x = 0; x < 80; x++){
		cout << "+";
	}
	
	cout << endl;
}

void loading(){
	for(int i = 0; i < 80; i++){
		cout << ">";
		Sleep(100);
	}
}

void login(){
	
	failed:
	string user;
	string token;
	
	for(int u = 0; u < 80; u++){
		cout << "+";
	}
	cout << "				M O H O N    L O G I N" << endl;
	for(int u = 0; u < 80; u++){
		cout << "+";
	}
	
	
	cout << endl;
	cout << "Username : ";
	cin >> user;
	cout << "Token : ";
	cin >> token;
	
	if(user == "Admin" | user == "admin" | user == "ADMIN"){
		if(token == "CrySqL"){
			system("cls");
			header();
		} else {
			system("cls");
			cout << "Token Failed!!!" << endl;
			system("timeout 10");
			system("cls");
			goto failed;
		}
	} else {
		system("cls");
		cout << "User Failed!!!" << endl;
		system("timeout 10");
		system("cls");
		goto failed;
	}
	
	
}



int main(){
	
	
	
	ulang:
	
	login();
	
	
	string nama;
	string nomor;
	string email;
	string pass;
	
	cout << "Masukan Nama : ";
	cin >> nama;
	cout << "Masukan Nomor : ";
	cin >> nomor;
	cout << "Masukan Email : ";
	cin >> email;
	cout << "Masukan Password : ";
	cin >> pass;
	
	
	cout << "\n\nMenyimpan Data..." << endl;
	loading();
	
	ofstream File;
	
	File.open("Database/DBase.txt", ios::app);
	File << "==============================\nD A T A  M E M B E R \n============================== \nNama		: " << nama << "\nNomor		: " << nomor << "\nEmail		: " << email << "\nPass		: " << pass << "\n==============================\n\n\n";
	File.close();
	
	system("cls");
	cout << "				Data Berhasil Disimpan ";
	cout << "\n\n\n" << endl;
	
	string ulng;
	cout << "Apakah Anda Ingin Menambahkan Lagi [Y/n] : ";
	cin >> ulng;
	
	if(ulng == "Y" | ulng == "y"){
	system("cls"); goto ulang;} 
	else if(ulng == "N" | ulng == "n") system("cls"); cout << "					Terima Kasih! "; system("pause>null");
	
	cin.get();
	return 0;
}
