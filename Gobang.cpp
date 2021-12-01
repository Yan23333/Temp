#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int i,j,k,n,m,sum,win,tx,ty;
	int a[25][25]={0};
	int player=1;
	int dx[9]={0,0,0,1,-1,1,-1,1,-1};
	int dy[9]={0,1,-1,0,0,1,-1,-1,1};
	win=0;
	i=0;
	while (i==0)
	{
		
		for (j=0;j<=20;j++)
		{
			printf ("%d ",j%10);
		}
		printf ("\n");
		for (j=1;j<=20;j++)
		{
			printf ("%d ",j%10);
			for (k=1;k<=20;k++)
			{
				if (a[j][k]==0)
				{
					printf ("  ");
				}
				else if (a[j][k]==1)
				{
					printf ("O ");
				}
				else if (a[j][k]==2)
				{
					printf ("X ");
				}
			}
			printf ("\n");
		}
		j=0;
		while (j==0)
		{
			printf ("Player %d: ",player);
			scanf ("%d%d",&n,&m);
			if (a[n][m]==0)
			{
				a[n][m]=player;
				j=1;
			}
			else
			{
				printf ("You can't put two chesses in the same location!\n");
			}
		}
		system ("cls");
		for (j=1;j<=8;j++)
		{
			if (j%2==1)
			{
				sum=0;
			}
			tx=n;
			ty=m;
			for (k=1;k<=5;k++)
			{
				tx+=dx[j];
				ty+=dy[j];
				if (tx<1||tx>20||ty<1||ty>20)
				{
					break;
				}
				if (a[tx][ty]==player)
				{
					sum++;
				}
				else
				{
					break;
				}
			}
			if (sum>=4)
			{
				win=1;
				break;
			}
			//printf ("*%d\n",sum);
		}
		if (win==1)
		{
			printf ("Player %d is the winner!",player);
			break;
		}
		player=3-player;
	}
	return 0;
}
