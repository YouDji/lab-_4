#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv)
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x,p, c1, c2 ,sum=0 ;
 cout<<"¬вед≥ть число в ≥нтервал≥ {1,10000000} = ";
  cin>>x;
  while (0<x)
  {
  	p=x%10;
  	x=x/10;
  	c2=x%10;
	x/=10;
	c1=x%10;
	x/=10;
	sum=sum+p;
  }
  cout<<"Sum ="<<sum<<endl;
  if(c1<c2)
  cout<<"True"<<endl;
  else
  if(c1>c2)
  cout<<"False"<<endl;
  system("pause");
  return 0;
  
}

