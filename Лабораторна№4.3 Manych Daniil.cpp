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
	double xstart,xend,xstep;
	double x, y;
	cout<<"¬вед≥ть ≥нтервал [xstart..xend]\n";
	cout<<"¬вед≥ть xstart =";
	cin>>xstart;
	cout<<"¬вед≥ть xend =";
	cin>>xend;
	cout<<"¬вед≥ть xstep =";
	cin>>xstep;
	printf("_________________________\n");
	printf("|  x  |  y  |\n");
	printf("------------------\n");
	x=xstart-xstep;
	while(x<xend)
	{
		x=x+xstep;
		y=exp(2.0*x)-exp(-x)*sin(log(fabs(x)));
		printf("| %8.4f | %8.14f |\n",x,y);
	}
	printf("---------------------\n");
	system("pause");
	return 0;
}
