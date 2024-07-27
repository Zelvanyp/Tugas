#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	
	int luas ;
	int jari;
	cout<<"Masukkan jari-jari"<<endl;
	cin>>jari;
	luas=jari*jari*22/7;
	
	cout<<"luas lingkaran adalah"<<endl;
	cout<<luas<<endl;
	return 0;
}
