#include <iostream>

using namespace std;

int main()
{
	int n;
    cin >> n;
    
    char d;
    cin >> d;

    int xmov,ymov;
    
    int x;
    int y;
    cin >> x >> y;
	
    switch(d)
    {
    	case 'e':
    			ymov=1;
    			xmov=0;
    			break;
    	case 'w':
    			ymov=-1;
    			xmov=0;
    			break;
    	case 'n':
    			xmov=-1;
    			ymov=0;
    			break;
    	default:
    			xmov=1;
    			ymov=0;
    			break;
    }

    int ar[n][n]={},i=1;
    int noe=n*n;
    ar[x][y]=i++;
    int xtemp,ytemp;
    while(--noe)
    {
    	//in direction
    	xtemp=x+xmov;
    	ytemp=y+ymov;

    	if(ar[xtemp][ytemp]==0 && xtemp>-1 && xtemp<n && ytemp>-1 && ytemp <n)
    	{
    		x=xtemp;
    		y=ytemp;
    		ar[x][y]=i++;
    		continue;

    	}

    	xtemp=x+ymov;
    	ytemp=y+xmov;

    	if(ar[xtemp][ytemp]==0 && xtemp>-1 && xtemp<n && ytemp>-1 && ytemp <n)
    	{
    		x=xtemp;
    		y=ytemp;
    		ar[x][y]=i++;
    		continue;

    	}

    	xtemp=x-ymov;
    	ytemp=y-xmov;

    	if(ar[xtemp][ytemp]==0 && xtemp>-1 && xtemp<n && ytemp>-1 && ytemp <n)
    	{
    		x=xtemp;
    		y=ytemp;
    		ar[x][y]=i++;
    		continue;

    	}

    	xtemp=x-xmov;
    	ytemp=y-ymov;

    	if(ar[xtemp][ytemp]==0 && xtemp>-1 && xtemp<n && ytemp>-1 && ytemp <n)
    	{
    		x=xtemp;
    		y=ytemp;
    		ar[x][y]=i++;
    		continue;

    	}
    	

    }

    for(int i=0;i<n;++i)
    {
    	for(int j=0;j<n;++j)
    	{
    		cout<<ar[i][j]<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}