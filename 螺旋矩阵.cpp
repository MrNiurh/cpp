//螺旋矩阵的C++实现

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a[100][100], i, j, k=1, m, n;

	cout<<"输入n（n<10）:";
	cin>>n;

	if(n%2==0)
		m=n/2;
	else
		m=n/2+1;  //m记录螺旋次数

	for(i=0; i<m; i++)
	{
		for(j=i; j<n-i; j++)
		{
			a[i][j]=k++;
		}
		for(j=i+1; j<n-i; j++)
		{
			a[j][n-i-1]=k++;
		}
		for(j=n-i-2; j>=i; j--)
		{
			a[n-i-1][j]=k++;
		}
		for(j=n-i-2; j>=i+1; j--)
		{
			a[j][i]=k++;
		}
	}

	//打印矩阵
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			cout<<setw(3)<<a[i][j];
		cout<<endl;
	}

	return 0;
}

