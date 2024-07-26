#include <stdio.h>


int bin_dec(int a)
{
	int x=a,b=1,n,ans=0;
	while(x>0)
	{
		n=x%10;
		ans=ans+n*b;
		b=b*2;
		x=x/10;
	}
	return ans;
}
int dec_bin(int a)
{
	int x=a,n,m=1,ans=0;
	while(x>0)
	{
		n=x%2;
		ans=ans+(n*m);
		m=m*10;
		x=x/2;
	}
	return ans;
}

int sum_seq(int a)
{
	int x=0,y=0,z=1,sum;

	printf("0 0 1 ");

	while(a>0)
	{
		sum=x+y+z;
		x=y;
		y=z;
		z=sum;
		printf("%d ",sum);
		a--;
	}
	printf("\n");
	return 0;
}

int star_1(int a)
{
	for (int i=0;i<a;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("  ");
		}
		for(int j=a-i;j>0;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

int star_2(int a)
{
	int line=1,star=0;

	while(line<=a)
	{
		if(star<line)
		{
			printf("* ");
			star++;
			continue;
		}
		if(star==line)
		{
			printf("\n");
			line++;
			star=0;
		}
	}
	return 0;
}

int sum_nine()
{
	for(int i=10;i<=99;i++)
	{
		int a=i,x,sum=0;
		x=a%10;
		a=a/10;
		if(a+x==9) printf("%d ",i);
	}
	printf("\n");
	return 0;
}

int power(int b ,int e)
{
	if(e==1)
		return b;
	else
		return b*power(b,e-1);
}

int fact(int a)
{
	if(a==1)
		return 1;
	else
		return a*fact(a-1);
}


