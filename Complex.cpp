#include<iostream>
using namespace std;

class complex
{
public:
    int real,img;
	complex()
	{
		real=0;
		img=0;
	}

	complex operator+(complex x)
	{
		complex z;
		z.real=real+x.real;
		z.img=img+x.img;
		return z;
	}
	complex operator-(complex x)
	{
		complex z;
		z.real=real-x.real;
		z.img=img-x.img;
		return z;
	}
	complex operator*(complex x)
	{
		complex z;
		z.real=((real*x.real)-(img*x.img));
		z.img=((real*x.img)+(img*x.real));
		return z;
	}
	friend istream &operator <<(std::istream ccin,complex &c);
    friend ostream &operator >>(std::ostream ccout,complex &c);
};
istream &operator >>(istream &ccin,complex &c)
{
    cout<<"enter real part of complex number"<<endl;
    ccin>>c.real;
    cout<<"enter imaginary part of complex number"<<endl;
    ccin>>c.img;
    return ccin;
}
ostream &operator <<(ostream &ccout,complex &c)
{
    if((c.real>0&&c.img>0)||(c.real<0&&c.img>0))
    {
        ccout<<c.real<<"+"<<c.img<<"i"<<endl;
    }
    else if((c.real==0&&c.img>0)||(c.real==0&&c.img<0))
    {
        ccout<<c.img<<"i"<<endl;
    }

    else if((c.real<0&&c.img<0)||(c.real>0&&c.img<0))
    {
        ccout<<c.real<<c.img<<"i"<<endl;
    }
    else if((c.real<0&&c.img==0)||(c.real>0&&c.img==0)||(c.real==0&&c.img==0))
    {
        ccout<<c.real<<endl;
    }

    return ccout;
}
int main()
{	int c;
	char ch;
	complex c1,c2,c3;
	do
	{
        cin>>c1;
        cout<<"complex number is:"<<endl;
        cout<<c1;
        cin>>c2;
        cout<<"complex number is:"<<endl;
        cout<<c2;

        cout<<"enter your choice:"<<endl;
        cout<<"1.Add\n2.Subtract\n3.Multiply"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:c3=c1+c2;
        cout<<"addition is"<<endl;
        cout<<c3;
        break;
        case 2:c3=c1-c2;
        cout<<"subtraction is:"<<endl;
        cout<<c3;
        break;
        case 3:c3=c1*c2;
        cout<<"multiplication is"<<endl;
        cout<<c3;
        break;
        default:
            cout<<"invalid choice"<<endl;
        }
        cout<<"Do you want to continue(y/n)"<<endl;
        cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
