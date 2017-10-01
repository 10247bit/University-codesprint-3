#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>
using namespace std;


int main() {
    int n;
    cin >> n;
   // const int N=(const int)n;
  // vector< vector<int> > ar;
	//ar.resize(n,vector<int>(n,0));
    int ar[n][n]={};
    int m;
    cin >> m;
    for(int m0 = 0; m0 < m; m0++)
    {
        int x;
        int y;
        int w;
        cin >> x >> y >> w;
        // Write Your Code Here
        ar[x][y]+=w;
        int i=1;
        while(w-i)
        {
            int a0=x-i,b0=y-i,a1=a0,b1=y+i,a2=x+i,b2=b0,a3=a2,b3=b1;
            for(int j=b0;j<=b1;++j)
            {
            	if(j>-1 && j<n)
            	{
               // cout<<ar[a0][i]<<endl;
                if(a0>-1 && a0<n)
                	ar[a0][j]+=w-i;
                if(a2>-1 && a2<n)
                	ar[a2][j]+=w-i;
             // cout<<ar[a0][i]<<endl;
           		}
                
            }
            for(int j=a0+1;j<=a2-1;++j)
            {
            	if(j>-1 && j<n)
            	{
               // cout<<ar[a0][i]<<endl;
                if(b0>-1 && b0<n)
                	ar[j][b0]+=w-i;
                if(b1>-1 && b1<n)
                	ar[j][b1]+=w-i;
             // cout<<ar[a0][i]<<endl;
           		}
                
            }
            
            i++;

     /*   	cout<<"\n\t\t----------------------MATRIX------------------------\n";
    		for(int i=0;i<n;++i)
    		{
    			cout<<endl;
    			for(int j=0;j<n;++j)
    				cout<<" "<<ar[i][j];
    		}*/	
            
        }    
    }
   // int max=0;
  //  vector< vector<int> > :: iterator dmax,max;
    //max=ar.begin();
      int max=0,dmax=0;
        for(int j=0;j<n;++j)
        {
            dmax=*std::max_element(ar[j], ar[j]+n);
           // cot<<dmax<<endl;
            if(dmax>max)
                max=dmax;
        }
    cout<<max<<endl;
/*
    cout<<"\n\t\t----------------------MATRIX------------------------\n";
    for(int i=0;i<n;++i)
    {
    	cout<<endl;
    	for(int j=0;j<n;++j)
    		cout<<" "<<ar[i][j];
    }
    //ar.clear();*/
    return 0;
}