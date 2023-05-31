#include <iostream>
#include <vector>
using namespace std;
class Student{
	private:
		string name;
		int rollNo, fee;
	public:
		Student(int RollNo, string Name, int Fee){
			name= Name;
			rollNo=RollNo;
			fee=Fee;
		}
string	getName(){
		return name;
	}
	int getRollNo(){
		return rollNo;
	}
	int getFee(){
		return fee;
	}
};

class FeeInq{
	private:
		vector<Student> ve;
	public:
		add(int RollNo, string Name, int Fee){
			Student student(RollNo, Name, Fee);
			ve.push_back(student);
		}
	
	feeStatus(){
		int rn;
		cout<<"Enter Roll No: "; cin>>rn;
		for(int i=0; i<ve.size(); i++){
			if(rn==ve[i].getRollNo()){
				cout<<"RollNo of student: "<<rn<<endl;
				cout<<"Name of student: "<<ve[i].getName()<<endl;
cout<<"Total Fee of student: "<<ve[i].getFee()<<"per month"<<endl<<endl;
			}
		}
	}
	
		
};

int main(){
	FeeInq fee;
	fee.add(12,"Ali",5000);
	fee.add(13,"Qamar",6000);
	fee.add(14,"Ashar",7000);
	fee.add(15,"Zohan",5000);
	int choice;
	cout<<"<<<<< Fee Inquiry Management System >>>>>"<<endl;
	while(true){
		cout<<"Enter '1' for Fee inquiry: "<<endl;
		cout<<"Enter '2' for exit: "<<endl;
		cout<<"Enter choice:"; cin>>choice;
		
		switch(choice){
			case 1:{
				system("cls");
				fee.feeStatus();
				break;
			}
			case 2:{
				exit(0);
				break;
			}
			default:
				cout<<"Invalid input: "<<endl<<endl;
		}
	}
}
