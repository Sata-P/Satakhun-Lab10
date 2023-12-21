#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");

    string cheer;
	dest << "-------------------- BOOM ---------------------\n";
	
	while(getline(source,cheer)){
	
	cout << cheer << '\n';
	
	}
	
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
