#include<stdio.h>

int main()
{
	int n,i,j,k,p,q,s,z;
	
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d %d %d",&p,&q,&k);
		s=p+q;
		z=1;
		for(i=s;i>=k;)
		{
			z++;
			i=i-k;
		}
		
		if(z%2==0)
		printf("COOK\n");
		
		else
		printf("CHEF\n");
		
		
	}
	
	
	
	return 0;
}
