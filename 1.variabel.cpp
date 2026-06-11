#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int i = 15;
	int j = 11;
	int k = i+j;
	string yapping="My Favorit Car is ";
	string favCar="bmwE28";
	cout << yapping + favCar << endl;
	
	cout << "Jumlah dari i dan j adalah " << i+j << endl;
	cout << "Pengurangan dari " << i << " dan " << j << " adalah " << i-j << endl;
	cout << "Perkalian dari " << i << " dan " << j << " adalah " << i*j << endl;
	cout << "Pembagian dari " << i << " dan " << j << " adalah " << i/j << endl;
	cout << "Sisa bagi dari " << i << " dan " << j << " adalah " << i%j << endl;
	return 0;
}
