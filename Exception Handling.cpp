#include <iostream>
using namespace std;

class ex
{
	int age;
	float salary;
	char c;
	string city;

public:
	void accept()
	{
		cout<<"\tEnter information\n"<<endl;
		cout<<"Enter age:"<<endl;
		cin>>age;
		cout<<"Enter salary:"<<endl;
		cin>>salary;
		cout<<"Enter city:"<<endl;
		cin>>city;
		cout<<"Do you own a 4 wheeler? (y/n)"<<endl;
		cin>>c;
	}
	void show()
	{
		cout<<"\tApplicants info"<<endl;
		cout<<"\nAge = "<<age<<endl;
		cout<<"Salary = "<<salary<<endl;
		cout<<"city = "<<city<<endl;
		cout<<"4 Wheeler = "<<c<<endl;
	}

	void check()
	{
		try
		{
			if (age<18 || age>55)
				throw(age);
			if(salary<50000||salary>100000)
				throw(salary);
			if(city!="pune"&&city!="bangalore"&&city!="mumbai"&&city!="chennai")
				throw(city);
			if(c=='n'||c=='N')
				throw(c);
			cout<<"\nYou are perfect match"<<endl;
		}
		catch(int a)
		{
			if (age<18)
                cout<<"\nYou are to young"<<endl;
            else
                cout<<"\nWe are looking for someone young\n";
		}
		catch(float s)
		{
			cout<<"\nYour salary is not what we Expect"<<endl;
		}
		catch(char v)
		{
			cout<<"\nWe are looking for someone who stays in metrocity"<<endl;
		}
		catch(string s)
		{
			cout<<"\nCar expectation not satisfied"<<endl;
		}
	}
};

int main()
{
	ex e;
	e.accept();
	e.show();
	e.check();
	return 0;
}
