#include<iostream>
using namespace std;
void SelectSort(int *p, int length);

int main()
{
	int n, i, a[100];
	cin >> n;
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
	for (i = 0; i < length; i++)				//ѡ������(����)
	{
		k = j;											//kΪ��ǰ������±꣬��ʼֵ��Ϊi
		for (j = i + 1; j < length; j++)
			if (*(p + k) < *(p + j))				//���ڱ�a[k]�����a[j]
				k = j;									//������������±�ֵ
		if (k != i)										//�����������±��и��ģ��������a[k]��a[i]����
		{
			t = *(p + i);
			*(p + i) = *(p + k);
			*(p + k) = t;
		}
	}
}