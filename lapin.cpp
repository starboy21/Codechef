#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<cctype>
#include<cassert>
#include<climits>
#include<cerrno>
#include<cfloat>
#include<ciso646>
#include<clocale>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<cwchar>
#include<cwctype>
 
//containers
#include<vector>
#include<list>
#include<map>
#include<queue>
#include<deque>
#include<set>
#include<complex>
#include<string>
#include<stack>
#include<bitset>
#include<istream>
#include<valarray>
 
//IOs
#include<iostream>
#include<sstream>
#include<iomanip>
#include<fstream>
#include<exception>
#include<ios>
#include<iosfwd>
#include<ostream>
#include<iterator>
#include<stdexcept>
#include<streambuf>
 
 
//algorithm & miscellaneous
#include<algorithm>
#include<functional>
#include<numeric>
#include<utility>
#include<limits>
#include<locale>
#include<memory>
#include<new>

#define MOD 1000000007

using namespace std;
inline void fastRead(int *a)
{
	register char c=0;
	while (c<33) c=getchar_unlocked();
	*a=0;
	while (c>33)
	{
	    *a=*a*10+c-'0';
	    c=getchar_unlocked();
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{	
		string s;
		cin>>s;	
		map<char,int> a;
		map<char,int> b;
		for(int i=0;i<26;i++)
		{
			a.emplace('a'+i,0);
			b.emplace('a'+i,0);
		}
		int i=0;
		for(;i<s.size()/2;i++)
		{
			auto it=a.find(s[i]);
			if(it!=a.end())
				(*it).second ++;
		}
		if(s.size()%2!=0)
			i++;
		for(;i<s.size();i++)
		{
			auto it=b.find(s[i]);
			if(it!=b.end())
				(*it).second ++;
		}
		bool res=true;
		for(int j=0;j<26;j++)
		{
			if(a['a'+j]!=b['a'+j])
			{
				res=false;
				break;
			}
		}
		if(res)
			cout<<"YES\n";
		else
			cout<<"NO\n";		
	}
	return 0;
}