#include <iostream>

using namespace std;

bool run = true;
bool islogin = false;

int choice1, choice2;
int balance = 0;
int withdraw = 1,add = 1;

string svusername, svpassword, username, password;

int main(){
	while (run){
		cout<<"1. Thoat"<<endl;
		cout<<"2. Dang nhap"<<endl;
		cout<<"3. Dang ky"<<endl;
		cout<<"Nhap lua chon:";cin>>choice1;
		switch (choice1){
			case 1:
				run = false;
				break;
			case 2:
				cout<<"Nhap tai khoan:";cin>>username;
				cout<<"Nhap mat khau:";cin>>password;
				if (username == svusername && password == svpassword){
					cout<<"Ban da dang nhap"<<endl;
					islogin = true;
				}
				else{
					cout<<"Tai khoan hoac mat khau khong chinh xac"<<endl;
				}
				break;
			case 3:
				cout<<"Nhap tai khoan:";cin>>svusername;
				cout<<"Nhap mat khau:";cin>>svpassword;
				cout<<"Ban da dang ky thanh cong!!!"<<endl;
				break;
			default:
				cout<<"Khong dung lua chon"<<endl;
		}
		while (islogin){
			cout<<"1. Kiem tra so du"<<endl;
			cout<<"2. Rut tien"<<endl;
			cout<<"3. Nap tien"<<endl;
			cout<<"4. Dang xuat"<<endl;
			cout<<"Nhap lua chon cua ban:";cin>>choice2;
			switch (choice2){
				case 1:
					cout<<"So du cua ban la "<< balance << endl;
					break;
				case 2:
					while (withdraw % 10 != 0){
						cout<<"Nhap so tien muon rut la boi so cua 10:";cin>>withdraw;
					}
					if (balance >= withdraw){
						balance -= withdraw;
						cout<<"Ban vua rut "<< withdraw <<" khoi tai khoan"<<endl;
					}
					else{
						cout<<"So du cua ban khong du"<<endl;
					}
					break;
				case 3:
					while (add % 10 != 0){
						cout<<"Nhap so tien muon nap la boi so cua 10:";cin>>add;
					}
					balance += add;
					cout<<"Ban vua nap "<< add <<" vao tai khoan"<<endl;
					break;
				case 4:
					cout<<"Da dang xuat"<<endl;
					islogin = false;
					break;
				default:
					cout<<"Khong dung lua chon"<<endl;
			}
		}
	}
}
