//program to find sum of squares of even nos between two given numbers
#include<iostream>
using namespace std;
int main()
{       //----funcn initializn-----------------------------------	
	int SumSquareEvenNumbers(int num1,int num2);
	int a,b,SumSquareEven;//SumSquareEven will stor sum
	cin>>a>>b;//tk val frm usr 
	SumSquareEven=SumSquareEvenNumbers(a,b);//str rtrnd value
	cout<<"\ntotal sum = "<<SumSquareEven<<endl;		
	
	return 0;
}
//-------------funcn definition ----------------------------------
int SumSquareEvenNumbers(int num1,int num2)
{	int sum=0;
	//-------both are even---------------------------
	if(num1%2==0 && num2%2==0)
	  {  for(int i=1;i<=((num2-num1)/2)-1;i++)
		 {sum=sum+(num1+2*i)*(num1+2*i);}
		return sum;
	  }else
	//------------------------------------------------
	//-------both 0dd---------------------------------
	if(num1%2==1 && num2%2==1)
	  { for(int i=0;i<=((num2-num1)/2)-1;i++)
		  { sum=sum+(num1+1+2*i)*(num1+1+2*i);}
		  return sum;

	  }else
	//------------------------------------------------
	//-----num1 o & num2 e ---------------------------
	if(num1%2==1 && num2%2==0)
	  {  for(int i=0;i<((num2-num1-1)/2);i++)
		  {sum=sum+(num1+1+2*i)*(num1+1+2*i);}
		  return sum;

	  }else
	//-----------------------------------------------
	//------num1 e & num2 o--------------------------
	if(num1%2==0 && num2%2==1)
	  { for(int i=1;i<=((num2-num1-1)/2);i++)
		{sum=sum+(num1+2*i)*(num1+2*i);}
		return sum;

	  }	

}
