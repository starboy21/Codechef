#include<iostream>
#include<map>
using namespace std;
int main()
{map<int,string> d;d[1]="2(0)";d[2]="2";d[4]="2(2)";
	d[8]="2(2+2(0))";
	d[16]="2(2(2))";
	d[32]="2(2(2)+2(0))";
	d[64]="2(2(2)+2)";
	d[128]="2(2(2)+2+2(0))";
	d[256]="2(2(2+2(0)))";
	d[512]="2(2(2+2(0))+2(0))";
	d[1024]="2(2(2+2(0))+2)";
	d[2048]="2(2(2+2(0))+2+2(0))";
	d[4096]="2(2(2+2(0))+2(2))";
	d[8192]="2(2(2+2(0))+2(2)+2(0))";
	d[16384]="2(2(2+2(0))+2(2)+2)";
	int a[] = {137, 1315, 73, 136, 255, 1384, 16385};
	for(int i=0;i<7;i++)
	{
		int n=a[i];
		string ans("");
		bool f=false;
		for(int j=1;n!=0;j*=2)
		{
			if(n & 1)
			{
				if(f)
					ans="+"+ans;
				ans=d[j]+ans;
				f=true;
			}	 
			n>>=1;
		}
		cout<<a[i]<<"="<<ans<<endl;
	}
	return 0;}
