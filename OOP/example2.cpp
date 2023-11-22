#include<iostream>
using namespace std;

class Cars{
	private:
		string model;
		int year;
		double mileage;
		static int totalCars;
	public:
		Cars(string Cmodel, int Cyear, double Cmileage){
			totalCars++;
			model = Cmodel;
			year = Cyear;
			mileage = Cmileage;
			getInfo();
	}
		~Cars(){
			cout<<"Car object is being destroyed"<<endl<<endl;
		}
		void getInfo() const {
			cout<<"Model = "<<model<<endl;
			cout<<"Year = "<<year<<endl;
			cout<<"Mileage = "<<mileage<<endl;
			cout<<"Car no = "<<totalCars<<endl;	
		}
		static int getTotalCars(){
			cout<<"total cars = "<<totalCars<<endl<<endl;
		}
};
int Cars :: totalCars;

int main(){
	{
		Cars C1("Benz", 2023, 3);
	}
	{
		Cars C2("G class", 2022, 2);
	}
	
	Cars :: getTotalCars();
	
	return 0;
}