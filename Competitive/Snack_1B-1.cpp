#include<stdio.h>

int main()
{
	int t,i,n,k,j,l,m;
	
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&k);
		l=0,m=0;
		int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]!=1)
			{
				l++;
			}
			else if(a[j]==1)
			{
				m++;
			}
		}
		
		if(m==n)
			printf("YES\n");
		else if(l<=k)
		{
			printf("YES\n");
		}
		else
			printf("NO\n");
	
	}
}
