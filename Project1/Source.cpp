#include <iostream>
using namespace std;


/*int m, sum = 0, n;
cin >> m >> n;
while (m <= n)
{
	sum = sum + m * m;

	m++;
}
cout << sum;*/
/*int i = 0, sum = 0, m;
double n;
cin >> n;
do
{
	cin >> m;
	sum = sum + m;
	i++;
} while (i < n);
cout << sum / n;*/
/*int i = 0;
double f, c, max;
cin >> f;
c = (f - 32) * 5 / 9;
max = c;

do
{
	cin >> f;
	c = (f - 32) * 5 / 9;
	cout << c << endl;
	if (c > max)
	{
		max = c;
	}
} while (i < 5);
cout << max;*/
/*int i, x, EVENsum = 0, ODDsum = 0;
for (i = 0; i < 5; i++)
{
	cin >> x;
	if (x % 2 == 0)
	{
		EVENsum += x;
		if (EVENsum > 5)
		{
			break;
		}
	}
	else ODDsum += x;
	if (ODDsum > 5)
	{
		break;
	}

}
cout << "Sum of even numbers: " << EVENsum << endl;
cout << "Sum of odd numbers: " << ODDsum << endl;*/
//  6  6  4
/*long long x, y, z;
cin >> x >> y >> z;
long long width = x / z;
if (x % z > 0)
{
	width++;
}
long long  height = y / z;
if (y % z > 0)
{
	height++;
}
cout << height * width << endl;*/
//--------------------------------------------------------------------------------------------------
//#include <iostream>
//using namespace std;
// int main()
//{
//
//	
//	/*int a = 0, e = 0, i = 0, u = 0, o = 0;
//	string a7a;
//	getline(cin, a7a);
//
//	for (int f = 0; f < a7a.size(); f++)
//	{
//		if (a7a[f] == 'a')
//		{
//			a++;
//		}
//		else if (a7a[f] == 'e')
//		{
//			e++;
//		}
//		else if (a7a[f] == 'i')
//		{
//			i++;
//		}
//		else if (a7a[f] == 'o')
//		{
//			o++;
//		}
//		else if (a7a[f] == 'u')
//		{
//			u++;
//		}
//
//	}
//	cout << a << endl;
//	cout << e << endl;
//	cout << i << endl;
//	cout << o << endl;
//	cout << u << endl;
//	return 0;*/
//
//	/*string a7a = "python";
//	cout << a7a.size();
//	for (int i = 0; i < a7a.size(); i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			cout << a7a[j];
//		}
//		cout << endl;
//
//	}
//	for (int i = a7a.size(); i > 0; i--)
//	{
//		for (int j = 0; j < i-1; j++)
//		{
//			cout << a7a[j];
//		}
//		cout << endl;
//
//	}*/
//
//
//
//
//
//
//	/*int r;
//	cin >> r;
//	for (int i = 1; i <= r; i++)
//	{
//		for (int j = 1; j <= r - i; j++)
//		{
//			cout << " ";
//		}
//		for (int c = 1; c <= i * 2 - 1; c++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}*/
//
//
//	/*int recLength;
//	cin >> recLength;
//	for (int i = 1; i <= recLength; i++)
//	{
//		for (int j = 1; j < recLength + i; j++)
//		{
//			if equasion true mean its space
//			if (j <= (recLength - i))
//			{
//				cout << " ";
//			}
//			else {
//				cout << "*";
//			}
//		}
//		cout << endl;
//	}*/
//
//
//
//
//
//
//
//
//
//	/*int x, y;
//	int gcd;
//	int bigger, less;
//	cout << "please enter two numbers: ";
//	cin >> x >> y;
//	if (x > y)
//	{
//		bigger = x;
//		less = y;
//	}
//	else
//	{
//		less = x;
//		bigger = y;
//	}
//
//	for (int i = 1; i <= less; i++)
//	{
//		if (x % i == 1 && y % i == 0)
//		{
//			gcd = i;
//
//		}
//
//
//	}
//
//	cout << "Greatest Common Divisor (GCD): " << gcd << endl;*/
//	/*int x,i=1;
//	cin >> x;
//	for (i; i <= x; i++)
//	{
//		for (int y = x; y > 0; y--)
//		{
//			if (y <= i)
//			{
//				cout << y ;
//			}
//			else
//			{
//				cout << " ";
//
//			}
//		}
//		cout << endl;
//	}*/
//	/*string latters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	int length = latters.size();
//	for (int i = 0; i < length; i++)
//	{
//		for (int y = i; y < length; y++)
//		{
//			cout << latters[i];
//			cout << latters[y]<<endl;
//		}
//		cout << endl;
//	}*/
//
//	/*int x;
//	cin >> x;
//	bool isPrime = false;
//	for (int i = 3; i < x; i = i + 2)
//	{
//		if (x == 1 || x == 2)
//			break;
//
//		if (x == 3)
//		{
//			isPrime = true;
//			break;
//		}
//
//		if (x % i == 0)
//		{
//			break;
//		}
//	}
//
//	if (isPrime)
//	{
//		cout << x << " is a prime";
//	}
//	else
//	{
//		cout << x << " is not a prime";
//	}*/
//
//
//
//	/*int x, i=1;
//	cin >> x;
//	for(i;i<=x;i++)
//	{
//		if (x % i == 0)
//		{
//			cout << i << endl;
//		}
//
//	}*/
//}
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//int sum(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	cout << sum(5, 99);
//	return 0;
//}


int main()
{
	/*int x, n;
	cout << "Enter the number of items:" << "\n";
	cin >> n;
	int* arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cout << "You entered: ";
	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}*/

	/*int max, min, x, y, sum = 0;
	cin >> x >> y;
	if (y > x)
	{
		max = y;
		min = x;
	}
	else
	{
		max = x;
		min = y;
	}
	int arr1[max], arr2[min];
	for (int i = 0; i <= max; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i <= min; i++)
	{
		cin >> arr2[i];
	}
	for (int i = 0; i <= max; i++)
	{
		for (int j = 0; j <= min; j++)
		{
			if (arr1[i] == arr2[j])
			{
				sum += arr1[i];
			}
		}
	}*/
	string word1, word2;
	int c = 0, i = word1.size();
	int a = 0, m = word1.size();
	cin >> word1;
	cout << word1.size();
	/*bool l = true;

	cin >> word1 >> word2;

	for (int j = 0; j < word1.size(); j++)
	{

		if (word1[c] == word2[i])
		{
			c++;
			i--;
		}

		else if (word1[c] != word2[i])
		{
			l = false;
			break;
		}
	}
	if (l)
	{
		cout << "YES";
	}
	else cout << "no";*/
}


