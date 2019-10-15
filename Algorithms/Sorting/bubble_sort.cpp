#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the number of elements\n";
	cin >> n;
	cout << "Enter the elements\n";
	int a[n];
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	cout << "The sorted elements are : ";
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	return 0;
}

