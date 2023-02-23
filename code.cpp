(Пара игрушек):

#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	long long k, sum, n, count=0;
	cin>>n;cin>>k;
	if (k - n == 1) count = n / 2;
	else count = (n - fabs(n+1-k))/2;
	if (count <=0) count = 0;
	cout << count;
}

(Круглый дом):

#include <iostream>
using namespace std;
int main()
{int n;int a;int b;int k;n=0;a=0;b=0;cin>>n;cin>>a;cin>>b;
k=a+b;
if (k < 1) { while (k < 1) k += n; cout << k; return 0; }
else  { while (k > n) k -= n; cout << k; return 0; }
}
