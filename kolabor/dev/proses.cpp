#include<iostream>
#include "../library/proses.h"
int main()
{
	Proses proses;
	proses.getData();
	cout<<"Anda siap menjadi developer proses\n";
  proses.toFile();
	return 0;
}
