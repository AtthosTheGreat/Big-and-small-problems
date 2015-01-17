#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int getMedian(vector<int> ar1, vector<int> ar2, int n)
{
	int m1;
	int m2;

	if (n == 1)
	{
		if (ar1[0] < ar2[0])
			return ar1[0];
		else
			return ar2[0];
	}
	if (n == 2)
	{
		if (ar1[0] > ar2[0])
			return ar1[0];
		else
			return ar2[0];
	}

	m1 = ar1[n / 2];
	m2 = ar2[n / 2];

	if (m1 == m2)
		return m1;

	if (m1 < m2)
	{
		if (n % 2 == 0)
		{
			vector<int> ar1ToUseNext(n / 2 + 1);
			for (int i = 0; i < n / 2 + 1; i++)
				ar1ToUseNext[i] = ar1[i + n / 2 + 1];
			vector<int> ar2ToUseNext(n / 2 + 1);
			for (int i = 0; i < n / 2 + 1; i++)
				ar2ToUseNext[i] = ar2[i];


			return getMedian(ar1ToUseNext, ar2, n / 2 + 1);
		}
		else
		{
			vector<int> ar1ToUseNext(n / 2);
			for (int i = 0; i < n / 2; i++)
				ar1ToUseNext[i] = ar1[i + n / 2];
			vector<int> ar2ToUseNext(n / 2);
			for (int i = 0; i < n / 2; i++)
				ar2ToUseNext[i] = ar2[i];

			return getMedian(ar1ToUseNext, ar2, n / 2);
		}
	}

	else
	{
		if (n % 2 == 0)
		{
			vector<int> ar1ToUseNext(n / 2 + 1);
			for (int i = 0; i < n / 2 + 1; i++)
				ar1ToUseNext[i] = ar1[i];
			vector<int> ar2ToUseNext(n / 2 + 1);
			for (int i = 0; i < n / 2 + 1; i++)
				ar2ToUseNext[i] = ar2[i + n / 2];
			return getMedian(ar2ToUseNext, ar1, n - n / 2 + 1);
		}
		else
		{
			vector<int> ar1ToUseNext(n / 2);
			for (int i = 0; i < n / 2; i++)
				ar1ToUseNext[i] = ar1[i];
			vector<int> ar2ToUseNext(n / 2);
			for (int i = 0; i < n / 2; i++)
				ar2ToUseNext[i] = ar2[i + n / 2];
			return getMedian(ar2ToUseNext, ar1, n - n / 2);
		}
	}
}

int main()
{
	int n = 4;
	vector<int> ar1(n);
	ar1 = { 1, 2, 3, 6};
	vector<int> ar2(n);
	ar2 = { 4, 6, 8, 10 };
	cout << getMedian(ar1, ar2, n);
	_getch();
	return 0;
}
