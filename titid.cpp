#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	int panjang;
	int lebar;
	int luas;
	cout<<"masukkan panjang persegi"<<endl;
	cin>>panjang;
	cout<<"masukkan lebar persegi"<<endl;
	cin>>lebar;
	luas=panjang*lebar;
	
	cout<<"luas persegi panjang adalah"<<endl;
	cout<<luas<<endl;
	
	
	
	return 0;
}
