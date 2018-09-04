#include<iostream>
using namespace std;
void SelectSort(int *p, int length);

int main()
{
	int n, i;
	cin >> n;
	int *a = new int[n]; 
	for (i = 0; i < n; i++)
		cin >> a[i];

	SelectSort(a, n);

	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}

void SelectSort(int *p, int length)
{
	int i, j, k, t;
	for (i = 0; i < length; i++)				//选择排序(降序)
	{
		k = i;						//k为当前最大数下标，初始值设为i
		for (j = i + 1; j < length; j++)
			if (*(p + k) < *(p + j))		//存在比a[k]大的数a[j]
				k = j;				//更改最大数的下标值
		if (k != i)					//如果最大数的下标有更改，将最大数a[k]与a[i]交换
		{
			t = *(p + i);
			*(p + i) = *(p + k);
			*(p + k) = t;
		}
	}
}
