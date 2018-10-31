#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t,n,k,i,j,l,z;
	
	scanf("%d",&t);
	
	for(l=0;l<t;l++)
	{
		scanf("%d",&n);
		
		vector<int> g1; 
		vector<int> g2; 
  
  
		for(i=2;i<n;i++)
		{
			z=1;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					z=100;
				}
			}
			
			if(z==1)
			{
			 	g1.push_back(i); 
				
			}
			
		}
		
	//for ( i=0; i<g1.size(); i++) 
      //  cout << g1[i]<< " ";
		
		
	for(k=0;k<n;k++)	
		for(i=0;i<g1.size();i++)
		{
			for(j=i+1;j<g1.size();j++)
			{
				if(k==g1[i]*g1[j])
					g2.push_back(k);
			}
		}
		
		//for ( i=0; i<g2.size(); i++) 
        //cout << g2[i]<< " ";
		
		int s=1;
		for(i=0;i<g2.size();i++)
		{
			for(j=0;j<g2.size();j++)
			{
				if(n==g2[i]+g2[j])
				{
					printf("YES\n");
					s=100;
					break;
				}
				
				
			}
			
			if(s==100)
				break;
		}
	
		if(s==1)
			printf("NO\n");
		
	}
	
	
	return 0;
		
}



