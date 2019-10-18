#include <iostream>
using namespace std;

template<class T>
class vector
{
	private:
	T a[10],b[10];
	int n;
	public:
	void get()
	{
		cout<<"Enter no. of mag"<<endl;
		cin>>n;
		cout<<"Enter values"<<endl;
		for(int i=0;i<n;i++)
			cin>>a[i];
	}
	void show()
	{
		int i;
		cout<<"Vector is : {";
		for(i=0;i<n-1;i++)
		{
			cout<<a[i]<<",";
		}
		cout<<a[i]<<"}"<<endl;
	}
	void mul()
	{
		T scalar;
		int i;
		cout<<"Enter the scalar value for multiplication"<<endl;
		cin>>scalar;
		for(i=0;i<n;i++)
		{
			b[i]=a[i]*scalar;
		}
		cout<<"{";
		for(i=0;i<n-1;i++)
		{
			cout<<b[i]<<",";
		}
		cout<<b[i]<<"}"<<endl;
	}

	void replace()
	{
		T b,value;
		int f;
		cout<<"Enter element to be replaced"<<endl;
		cin>>b;

		for(int i=0;i<n;i++)
		{
			if(a[i]==b)
			{
				f=1;
				cout<<"Enter modification value"<<endl;
				cin>>value;
				a[i]=value;
				break;
			}
			else
			{
				f=0;
			}
		}
		if(f==0)
		{
			cout<<"Element is not present"<<endl;
		}
	}

	void menu()
	{
		int c;
		char ch;
		do
		{
		cout<<"Enter operation 1.Multiplication 2.replace"<<endl;
		cin>>c;
		switch(c)
		{
			case 1:
				{
					mul();
					break;
				}
			case 2:
				{
					replace();
					show();
					break;
				}
			default:
				{
					cout<<"Invalid choice"<<endl;
					break;
				}
		}
		cout<<"Continue operations???(y/n)";
		cin>>ch;
		}while(ch=='y'||ch=='Y');
	}
};

int main()
{
	int c;
	char ch;
	do
	{
	cout<<"Datatype 1.Integer 2.Float "<<endl;
	cin>>c;

	switch(c)
		{
		case 1:
			{
				vector<int> v;
				v.get();
				v.show();
				v.menu();
				break;
			}
		case 2:
			{
				vector<float> v;
				v.get();
				v.show();
				v.menu();
				break;
			}
		default:
			{
				cout<<"Invalid choice"<<endl;
				break;
			}
		}
	cout<<"Continue for more datatypes???(y/n)";
		cin>>ch;
	}while(ch=='y'||ch=='Y');

	return 0;
}
