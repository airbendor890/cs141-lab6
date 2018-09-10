//funcn to find sum of odd nos betn two gvn nos(excluding them)
#include<iostream>
using namespace std;
int main()
{ //funcn initializn------------------------
	 int SumOddNumbers(int num1,int num2);
	int a,b,SumOdd;//SumOdd will store sum val
	cout<<"\n input two nos "<<endl;
	cin>>a>>b;//tk val frm usr
	SumOdd=SumOddNumbers(a,b);
	cout<<"\n total sum is : "<<SumOdd<<endl;
	
	return 0;
}
//------funcn definition-------------------
int SumOddNumbers(int num1,int num2)
{	int sum=0;//sum variabl
	//---------both even--------------------------
	if(num1%2==0 && num2%2==0)
	  { for(int i=0;i<(num2-num1)/2;i++)
		{sum=sum+(num1+1+2*i);}
		return sum;
	  }else
	//---------both odd---------------------------
	if(num1%2==1 && num2%2==1)
	  { for(int i=1;i<=(num2-num1)/2-1;i++)
		{sum=sum+(num1+2*i);}
		return sum;
	  }else
	//--------num1 o & num2 e --------------------
	if(num1%2==1 && num2%2==0)
	  { for(int i=1;i<=(num2-num1-1)/2;i++)
		{sum=sum+(num1+2*i);}
	  	return sum;
	  }else
	//---------num1 e & num2 o --------------------
	if(num1%2==0 && num2%2==1)
	  {for(int i=0;i<(num2-num1-1)/2;i++)
		{sum = sum+(num1+1+2*i);}	
		return sum;	

	  }


}
