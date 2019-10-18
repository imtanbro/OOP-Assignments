
#include<iostream>
using namespace std;
template<class T>
void sort(T a[10],int n)
{

	T k;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	cout<<"Sorted array is: ";
	cout<<"{";
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<a[n-1]<<"}";
}

int main()
{
	char c;
	int ch;
	do{
		cout<<"\nSORTING\n";
		cout<<"Choose datatype:1.Int2.Float\n";
		cin>>ch;
	switch(ch)
	{
	case 1:
	int b[10];
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter elements of chosen datatype:\n";
		for(int i=0;i<n;i++)
			{
				cin>>b[i];
			}
			sort<int>(b,n);
			break;
	case 2:float a[10];
	int m;
	cout<<"Enter number of elements:";
	cin>>m;
	cout<<"Enter elements of chosen datatype:\n";
		for(int i=0;i<m;i++)
			{
				cin>>a[i];
			}

			sort<float>(a,m);
			break;
	default:cout<<"Invalid\n";
	}cout<<"\nDo you want to continue?(y/n) : ";
	cin>>c;
	}while(c=='y'||c=='Y');
	return 0;
}
