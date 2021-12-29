
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,rb,cb,rd,cd;
		cin>>n>>m>>rb>>cb>>rd>>cd;
        int row,col;
		//row
		if(rb<=rd)
		row=rd-rb;
		else
		row=2*n-rb-rd;
		//collumn
		if(cb<=cd)
		col=cd-cb;
		else
		col=2*m-cb-cd;

		cout<<min(row,col)<<endl;

	}

	
	return 0;
}
