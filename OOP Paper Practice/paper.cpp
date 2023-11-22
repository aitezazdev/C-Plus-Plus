#include <iostream>
using namespace std;
class person {
	public :
		string name ;
    person(string n){
      name = n;
    }
		
};
class Employee :public person {
	public :
		double salary ;
		Employee (string name , double nsalary) : person(name){
			salary = nsalary;
		}
		void show (){
			cout<<"the name of Employee is "<<name <<endl;
			cout<<"the salary  of Employee is "<<salary <<endl;
		}
};
int main (){
	Employee Obj1("zaz", 2000);
	Employee Obj2("bro", 3000);
	Obj1.show();
	Obj2.show();
	return 0;
}


// #include <iostream>
// using namespace std;
// class person {
// 	public :
// 		string name ;
		
// };
// class Employee :public person {
// 	public :
// 		double salary ;
// 		Employee (double nsalary , string Name){
// 			salary = nsalary ;
// 			name= Name;
// 		}
// 		void show (){
// 			cout<<"the name of Employee is "<<name <<endl;
// 			cout<<"the salary  of Employee is "<<salary <<endl;
// 		}
// };
// int main (){
// 	Employee Obj1(20000,"me");
// 	Employee Obj2(20000,"lhan");
// 	Obj1.show();
// 	Obj2.show();
// 	return 0;
// }