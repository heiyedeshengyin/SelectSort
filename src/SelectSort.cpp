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
	
	delete[] a;
	return 0;
}

void SelectSort(int *p, int length)
{
	for (int i = 0; i < length - 1; i++)
		for (int j = i + 1; j < length; j++)
			if (*(p + i) > *(p + j))
			{
				int temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
}
