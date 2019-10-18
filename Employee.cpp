#include <iostream>
#include <string.h>
using namespace std;

class personal_info
{
private:
	char name[10];
	int age;
	string address;
	char dob[10];
	char gender[6];
public:
	personal_info()
	{
		age=0;
		address="none";
		strcpy(name,"no name");
		strcpy(dob,"0/0/0");
		strcpy(gender,"x");
	}
	void get_personal_info()
	{
		cout<<"\nEnter the name of Student:";
        cin>>name;
        cout<<"\nEnter the age of Student:";
        cin>>age;
        cout<<"\nEnter the DOB of Student:";
        cin>>dob;
        cout<<"\nEnter the address of Student:";
        cin>>address;

	}
	void put_personal_info()
	{
		cout<<"\nPersonal info:\n";
		cout<<"\nName:"<<name<<"\nAge:"<<age<<"\nDOB:"<<dob<<"\nGender:"<<gender<<"\nAddress:"<<address;
	}
};

class academic
{
private:
	float percent;
	string qualication;
	int passing_year;
public:
	academic()
	{
		percent=0;
		qualication="none";
		passing_year=0;
	}
	void get_acadamic_info()
		{
			cout<<"\nEnter the percent of Student:";
	        cin>>percent;
			cout<<"\nEnter the qualification of Student:";
	        cin>>qualication;
			cout<<"\nEnter the year of passing of Student:";
	        cin>>passing_year;

		}
	void put_acadamic_info()
		{
			cout<<"\n\nAcadamic info:\n";
			cout<<"\nPercent:"<<percent<<"\nQualication:"<<qualication<<"\nYear of Passing:"<<passing_year;
		}
};

class professional
{
private:
	float years;
	string company;
	string id,project;
	long salary;
public:
	professional()
	{
		years=0;
		company="none";
		id="no id";
		project="none";
		salary=0;
	}
	void get_professional_info()
		{
			cout<<"\nEnter the years:";
	        cin>>years;
	        cout<<"\nEnter the company:";
	        cin>>company;
	        cout<<"\nEnter the Employee ID:";
	        cin>>id;
	        cout<<"\nEnter the Project:";
	        cin>>project;
	        cout<<"\nEnter the Salary:";
	        cin>>salary;
		}
	void put_professional_info()
		{
			cout<<"\n\nProfessional info:\n";
			cout<<"\nYears of exp:"<<years<<"\nQualication:"<<company<<"\nEmployee ID:"<<id<<"\nProject info:"<<project<<"\nSalary:"<<salary;
		}
};

class employee_biodata : public professional,academic,personal_info
{
public:
	void get_employee_info()
	{
		get_personal_info();
		get_acadamic_info();
		get_professional_info();
	}
	void put_employee_info()
	{
		put_personal_info();
		put_acadamic_info();
		put_professional_info();
	}
};

int main()
{
	employee_biodata e1,e2;
	e1.put_employee_info();
	cout<<"\n";
	e2.get_employee_info();
	e2.put_employee_info();

	return 0;
}
