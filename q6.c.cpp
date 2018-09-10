//programm to fnd sum of square of odd nos btn two gvn nos(excluding given two nos)
#include<iostream>
using namespace	std;
int main()
{	//funcn initializn---------------------------------------
	int SumSquareOddNumbers(int num1,int num2);
	int a,b,SumSquareOdd;//SumSquareOdd will str sum
	cin>>a>>b;//tk val frm usr
	SumSquareOdd= SumSquareOddNumbers(a,b);
	cout<<"\ntotal sum = "<<SumSquareOdd<<endl;
	return 0;
}
//-------------funcn definition----------------------------------
int SumSquareOddNumbers(int num1,int num2)
{	int sum=0;//sum variabl
	//---------both even--------------------------
	if(num1%2==0 && num2%2==0)
	  { for(int i=0;i<(num2-num1)/2;i++)
		{sum=sum+(num1+1+2*i)*(num1+1+2*i);}
		 return sum;		
	  }else
	//---------both odd---------------------------
	if(num1%2==1 && num2%2==1)
	  { for(int i=1;i<=(num2-num1)/2-1;i++)
		{sum=sum+(num1+2*i)*(num1+2*i);}
		 return sum;
	  }else
	//--------num1 o & num2 e --------------------
	if(num1%2==1 && num2%2==0)
	  { for(int i=1;i<=(num2-num1-1)/2;i++)
		{sum=sum+(num1+2*i)*(num1+2*i);}
	  	 return sum;
	  }else
	//---------num1 e & num2 o --------------------
	if(num1%2==0 && num2%2==1)
	  {for(int i=0;i<(num2-num1-1)/2;i++)
		{sum = sum+(num1+1+2*i)*(num1+1+2*i);}	
		 return sum;	

	  }


}
