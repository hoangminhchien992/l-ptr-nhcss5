#include<stdio.h>
int main(void)
{
	int number , tong = 0 ;
	printf("Moi ban nhap so nguyen duong :\n");
	scanf("%d" , &number);
	if (number > 1 )
	{
		for(int i = 1 ; i <= number ; i++)
		{
			tong += i;
		}
		printf("Tong cac so la : %d\n", tong );
	}
	else
	{
		printf("ban da nhap sai so .\n");
	}
	return 0 ; 
}
