#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char kalimat[100];
	int jum_huruf;
	
	cout<<"masukkan kalimat : ";
	cin.getline(kalimat,sizeof(kalimat));
	
	jum_huruf=0;
	for(int x=0; kalimat [x]; x++)
	jum_huruf++;
	
	cout<<cin.gcount()-1;
}
