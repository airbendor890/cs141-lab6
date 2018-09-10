#include<iostream>
using namespace std;
int main()
{	//funcn initializns------------------------------------------///////////////
	int SumEvenNumbers(int num1,int num2);
	int SumOddNumbers(int num1,int num2);
	int SumSquareOddNumbers(int num1,int num2);
	int SumSquareEvenNumbers(int num1,int num2);
	//-----------------------------------------------------------///////////////
	int a,b,SumEven,SumOdd,SumSquareOdd,SumSquareEven;
	cout<<"\n give two numbers(first number should be less than second one)"<<endl;
	cin>>a>>b;//tk val frm usr
		
	if(b>a)
     {
	//convection-------------------------------------------------
	cout<<"below are the convection needded for choice input:"<<endl;
	cout<<"for finding sum of even numbers between given two nos (choice - 1)"<<endl;
	cout<<"for finding sum of odd numbers between given two nos (choice - 2)"<<endl;
	cout<<"for finding sum of squares of even numbers between given two nos (choice - 3)"<<endl;
	cout<<"for finding sum of squares of odd numbers between given two nos (choice - 4)"<<endl;
	//-----------------------------------------------------------
	int choice;char ch='y';//fr switch case and do while lp
	//---------do whl lp-----------------------------------------///////////////
	do{
	cout<<endl;cout<<"input your choice(1/2/3/4)       ";cin>>choice;
		switch(choice)
		  { case 1:
			cout<<"\n  summation =  ";SumEven=SumEvenNumbers(a,b);cout<<" = "<<SumEven<<endl;
			break;
		    case 2:
			cout<<"\n summation =  ";SumOdd=SumOddNumbers(a,b);cout<<" = "<<SumOdd<<endl;
			break;
		    case 3:
			cout<<"\n summation =  ";SumSquareEven=SumSquareEvenNumbers(a,b);cout<<" = "<<SumSquareEven<<endl;
			break;
		    case 4:
			cout<<"\n summation =  ";SumSquareOdd=SumSquareOddNumbers(a,b);cout<<" = "<<SumSquareOdd<<endl;
			break;
		    default :
			cout<<"\n error invalid input  "<<endl;
			break;



		  }
			cout<<"\n\nwant to input more choice(y/n)";
			cin>>ch;
           }while(ch=='y');
     


       }
	else
	  cout<<"\n\nfirst no should be less than second"<<endl;	
	
	return 0;
}
//funcn definition---------------------------------------------------
//*******************************************************************
//----defn for sum of even numbers ----------------------------------
int SumEvenNumbers(int num1,int num2)
{	int sum=0;
	//-------both are even---------------------------
	if(num1%2==0 && num2%2==0)
	  {  for(int i=1;i<=((num2-num1)/2)-1;i++)
		 {cout<<num1+2*i<<"+";     sum=sum+(num1+2*i);}
		return sum;
	  }else
	//------------------------------------------------
	//-------both 0dd---------------------------------
	if(num1%2==1 && num2%2==1)
	  { for(int i=0;i<=((num2-num1)/2)-1;i++)
		  { cout<<num1+1+2*i<<"+";     sum=sum+(num1+1+2*i);}
		  return sum;

	  }else
	//------------------------------------------------
	//-----num1 o & num2 e ---------------------------
	if(num1%2==1 && num2%2==0)
	  {  for(int i=0;i<((num2-num1-1)/2);i++)
		  {cout<<num1+1+2*i<<"+";      sum=sum+(num1+1+2*i);}
		  return sum;

	  }else
	//-----------------------------------------------
	//------num1 e & num2 o--------------------------
	if(num1%2==0 && num2%2==1)
	  { for(int i=1;i<=((num2-num1-1)/2);i++)
		{cout<<num1+2*i<<"+";          sum=sum+(num1+2*i);}
			return sum;		 
	 }	

}
//------funcn definition----------------------------------------
//**************************************************************
//-----defn for sum of odd numbers -----------------------------
int SumOddNumbers(int num1,int num2)
{	int sum=0;//sum variabl
	//---------both even--------------------------
	if(num1%2==0 && num2%2==0)
	  { for(int i=0;i<(num2-num1)/2;i++)
		{cout<<num1+1+2*i<<"+";      sum=sum+(num1+1+2*i);}
		return sum;
	  }else
	//---------both odd---------------------------
	if(num1%2==1 && num2%2==1)
	  { for(int i=1;i<=(num2-num1)/2-1;i++)
		{cout<<num1+2*i<<"+";        sum=sum+(num1+2*i);}
		return sum;
	  }else
	//--------num1 o & num2 e --------------------
	if(num1%2==1 && num2%2==0)
	  { for(int i=1;i<=(num2-num1-1)/2;i++)
		{cout<<num1+2*i<<"+";         sum=sum+(num1+2*i);}
	  	return sum;
	  }else
	//---------num1 e & num2 o --------------------
	if(num1%2==0 && num2%2==1)
	  {for(int i=0;i<(num2-num1-1)/2;i++)
		{cout<<num1+1+2*i<<"+";       sum = sum+(num1+1+2*i);}	
		return sum;	

	  }


}
//-------------funcn definition----------------------------------
//***************************************************************
//-----defn for sum of squares of odd numbers--------------------
int SumSquareOddNumbers(int num1,int num2)
{	int sum=0;//sum variabl
	//---------both even--------------------------
	if(num1%2==0 && num2%2==0)
	  { for(int i=0;i<(num2-num1)/2;i++)
		{cout<<(num1+1+2*i)*(num1+1+2*i)<<"+";         sum=sum+(num1+1+2*i)*(num1+1+2*i);}
		 return sum;		
	  }else
	//---------both odd---------------------------
	if(num1%2==1 && num2%2==1)
	  { for(int i=1;i<=(num2-num1)/2-1;i++)
		{cout<<(num1+2*i)*(num1+2*i)<<"+";             sum=sum+(num1+2*i)*(num1+2*i);}
		 return sum;
	  }else
	//--------num1 o & num2 e --------------------
	if(num1%2==1 && num2%2==0)
	  { for(int i=1;i<=(num2-num1-1)/2;i++)
		{cout<<(num1+2*i)*(num1+2*i)<<"+";             sum=sum+(num1+2*i)*(num1+2*i);}
	  	 return sum;
	  }else
	//---------num1 e & num2 o --------------------
	if(num1%2==0 && num2%2==1)
	  {for(int i=0;i<(num2-num1-1)/2;i++)
		{cout<<(num1+1+2*i)*(num1+1+2*i)<<"+";         sum = sum+(num1+1+2*i)*(num1+1+2*i);}	
		 return sum;	

	  }


}

//-------------funcn definition ----------------------------------
//*****************************************************************
//---defn for sum of squares of even numbers----------------------
int SumSquareEvenNumbers(int num1,int num2)
{	int sum=0;
	//-------both are even---------------------------
	if(num1%2==0 && num2%2==0)
	  {  for(int i=1;i<=((num2-num1)/2)-1;i++)
		 {cout<<(num1+2*i)*(num1+2*i)<<"+";             sum=sum+(num1+2*i)*(num1+2*i);}
		return sum;
	  }else
	//------------------------------------------------
	//-------both 0dd---------------------------------
	if(num1%2==1 && num2%2==1)
	  { for(int i=0;i<=((num2-num1)/2)-1;i++)
		  {cout<<(num1+1+2*i)*(num1+1+2*i)<<"+";         sum=sum+(num1+1+2*i)*(num1+1+2*i);}
		  return sum;

	  }else
	//------------------------------------------------
	//-----num1 o & num2 e ---------------------------
	if(num1%2==1 && num2%2==0)
	  {  for(int i=0;i<((num2-num1-1)/2);i++)
		  {cout<<(num1+1+2*i)*(num1+1+2*i)<<"+";        sum=sum+(num1+1+2*i)*(num1+1+2*i);}
		  return sum;

	  }else
	//-----------------------------------------------
	//------num1 e & num2 o--------------------------
	if(num1%2==0 && num2%2==1)
	  { for(int i=1;i<=((num2-num1-1)/2);i++)
		{cout<<(num1+2*i)*(num1+2*i)<<"+";             sum=sum+(num1+2*i)*(num1+2*i);}
		return sum;

	  }	

}

//*********************************************************************
