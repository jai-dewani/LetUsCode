#include<stdio.h>

int main()
{
	long int n,i,j,k,p,q,r,l;
	
	scanf("%ld ",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&k);
		
		p=1; q=0; r=0; l=0;
		for(j=0;j<k;j++)
		{
			if(j==(26*l)+2)
			{
				q=p;
				p=0;
			}
			
			else if(j==(26*l)+10)
			{
				r=q;
				q=0;
			}
			
			else if(j==(26*l)+26)
			{
				p=2*r;
				r=0;
				l++;
			}
			
			
			
		}
		
		printf("%ld %ld %ld\n",p,q,r);
		
	}
}