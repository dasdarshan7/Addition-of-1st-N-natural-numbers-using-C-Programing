// Addition of first N natural numbers using C Programing
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,f=0;
	printf(" Enter the nth limit of natural numnes you want to add : ");
	scanf("%d", &n);
	for( i = 1; i<=n; i++ )
	{
	f=f+i;	
	}
	printf(" Addition of first %d natural numners = %d",n,f );
	getch();
	return 0;
}
