#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++)
    {
        int n;
        cin >> n;


        //wining and losing matrix
        //1=losing 0=winning
        int ar[n][n]={};
     /*   for(int i=0;i<n;++i)
        {
        	if(i%2==0)
        	{
        		for(int j=0;j<n;++j)
        		{
        			if(j%2==0)
        				ar[i][j]=1;
        		}
        	}
        }*/

        //setting the terminal states

        vector<string> board(n);
        for(int board_i = 0; board_i < n; board_i++)
        {
           cin >> board[board_i];
           
        }
        // Write Your Code Here

         for(int i=0;i<n;++i)
        {
        	for(int j=0;j<n;++j)
        	{
        			if(board[i][j]=='X')
        				ar[i][j]=2;
        	}
        }

        for(int i=0;i<n;++i)
        {
        	int tempi,tempj;
        	for(int j=0;j<n;++j)
        	{
        			if(ar[i][j]!=2)
        			{

        				tempi=i-1;
        				tempj=j;

        				if(tempi>-1 && tempi<n && tempj>-1 && tempj<n && ar[tempi][tempj]==1)
        					{
        						ar[i][j]=0;
        						continue;
        					}

        				tempi=i;
        				tempj=j-1;

        				if(tempi>-1 && tempi<n && tempj>-1 && tempj<n && ar[tempi][tempj]==1)
        					{
        						ar[i][j]=0;
        						continue;
        					}

        				tempi=i-1;
        				tempj=j-1;

        				if(tempi>-1 && tempi<n && tempj>-1 && tempj<n && ar[tempi][tempj]==1)
        					{
        						ar[i][j]=0;
        						continue;
        					}
        				ar[i][j]=1;
        			}
        	}
        }


        vector<int> count,counte;
        int ks=-1;
        for(int i=0;i<n;++i)
        {
        	for(int j=0;j<n;++j)
        	{
        		int tempi,tempj;
        			if(board[i][j]=='K')
        			{
                        ks++;
                        count.push_back(0);
                        counte.push_back(0);
        				tempi=i;
        				tempj=j-1;
        				if(tempi>-1 && tempi<n && tempj>-1 && tempj<n && ar[tempi][tempj]!=2)
        					{
        						if(ar[tempi][tempj]==0)
        							count[ks]+=1;
        						else
        					      counte[ks]+=1;
        					}

        				tempi=i-1;
        				tempj=j;
        				if(tempi>-1 && tempi<n && tempj>-1 && tempj<n && ar[tempi][tempj]!=2)
        					{
        						if(ar[tempi][tempj]==0)
        							count[ks]+=1;
        						else
        					      counte[ks]+=1;
        					}
        				
        				tempi=i-1;
        				tempj=j-1;
        				if(tempi>-1 && tempi<n && tempj>-1 && tempj<n && ar[tempi][tempj]!=2)
        					{
        						if(ar[tempi][tempj]==0)
        							count[ks]+=1;
        						else
        					      counte[ks]+=1;
        					}
        			}
        	}
        }
        for(int i=0;i<=ks;++i)
        {
        	cout<<"Count and counte1 for i "<<i+1<<"\t"<<count[i]<<"\t"<<counte[i]<<endl;
        }
        int fcount=0,fcounte=0;
        for(int i=0;i<=ks;++i)
        {
            fcount=fcount^count[i];
            fcounte=fcounte^counte[i];
        }
        
        if((ks+1)%2==0)
        {
           if(fcount==0)
            {
        	   cout<<"LOSE\n";
            }
            else
        	   cout<<"WIN "<<fcount<<endl;
        }
        else
        {
            if(fcounte==0)
            {
        	   cout<<"LOSE\n";
            }
            else
        	   cout<<"WIN "<<fcounte<<endl;
        }
    }
    return 0;
}
