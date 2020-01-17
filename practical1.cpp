// This file is ceated by me.
#include<iostream>
using namespace std;
	int RecursiveGCD(int a ,int b)// GCD (recursive function)
	{
		if(b==0)
		return a;
		else 
		return RecursiveGCD(b,a%b);
	}
	int  gcd(int a,int b)// GCD iterative function
	{
		int temp=0;
		while(b!=0)
		{
			temp=a;
			a=b;
			b=temp%b;
		}
	return a;
	}	
	int Recursive_pow(int a,int b)// finding power using recursion
	{
		if(b==0)
		return 1;
		else 
		return a*Recursive_pow(a,b-1);
	}
	int pow(int a,int b)// finding power using iteration
	{
		int res=a;
		for(int i=1;i<b;i++)
		res*=a;
		return res;
	}
	int recursive_fib(int n)// fibonacci (recursive function)
	{
		if((n==1)||(n==0))
		return n;
		else
			return (recursive_fib(n-1)+recursive_fib(n-2));
	}
	void fib(int n)// fibonacci iterative code
	{	
		int x=0,y=1,z;
		cout<<x<<" "<<y<<" ";
		for(int i=2;i<n;i++)
		{
			z=x+y;
			cout<<z<<" ";
			x=y;
			y=z;}
	}
	int recursive_fact(int n)// factorial(recursive)
	{
		if(n==0)
		return 1;
		else
		return n*recursive_fact(n-1);
	}
	
	int fact(int n)// factorial(iterative)
	{ 
	int fact=1;
	 for(int i=n;i>0;i--)
 	{
 		fact*=i;
 	}
 	return fact;
	}	
int main()
{
	int x,y;
	cout<<"enter the two numbers for finding gcd\n";
	cout<<"number1:\t";
	cin>>x;
	cout<<"number2:\t";
	cin>>y;
	
	int gcd1=RecursiveGCD(x,y);
	int gcd2=gcd(x,y);
	cout<<"gcd by recursion "<<gcd1<<"\n"<<"gcd by iteration "<<gcd2<<endl;
	cout<<"\n enter the values for power function\n";
	cout<<"base:\t";
	cin>>x;
	cout<<"power:\t";
	cin>>y;

	int pow1=Recursive_pow(x,y);
	int pow2=pow(x,y);
	cout<<"power by recursion "<<pow1<<"\npower by iteration "<<pow2<<endl;
	int n;
	cout<<"\nenter input for fibonacci function\n";
	cin>>n;
	cout<<"fibonacii by iteration\n";
	fib(n);
	cout<<endl; 
	int i=0;
	cout<<" fibonacci by recusrion\n";
	while(i<n)
	{
 	 cout<<recursive_fib(i)<<" ";
	 i++;
	}
	cout<<"\nenter input for factorial function\n";
	cin>>n;
	int fact1=recursive_fact(n);
	int fact2=fact(n);
	cout<<" factorial by recusrion "<<fact1<<" \nfactorial by iteration "<<fact2<<" "<<endl;
	return 0;
	}	
	

