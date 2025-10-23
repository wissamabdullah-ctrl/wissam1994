#include <iostream>
#include <string>
using namespace std;

class Car{
	public:
		int id;
		string name;
		string type;
		int price;
		
		void dispaly(){
			
		cout << " id " << id << " name: " << name << " type " << type << " price : " << price << endl;
}
		
};
int main()
{
	Car C1;
	C1.id = 1;
	C1.name = "toyota";
	C1.type = "camry";
	C1.price = 100;
	C1.dispaly();
	
	Car C2;
	C2.id = 2;
	C2.name = "hyundai";
	C2.type = "sonata";
	C2.price = 90;
	C2.dispaly();
	return 0;
}
