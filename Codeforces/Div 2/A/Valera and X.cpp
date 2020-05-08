#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int arr[26] = {0};
int main()
{
	char paper[300][300],c;
	int n,diagonal=1,no_other_c=0,count_c=0,only_two=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> paper[i][j];
			arr[int(paper[i][j] - 'a')]++;
		}
	c = paper[0][0];
	for (int i = n - 1; i >= 0; i--)
		if (paper[i][i] != c || paper[i][n-i-1] != c)
			diagonal = 0;
	for (int i = 0; i < n; i++)
	       for (int j = 0; j < n; j++)
		      if (paper[i][j] == c)
			     count_c++; 
	if (count_c == (n*2)-1)
		no_other_c = 1;
	count_c = 0;
	for (int i = 0; i < 26; i++)
		if (arr[i]) count_c++;
	if (count_c == 2)
		only_two = 1;
	if (diagonal && no_other_c && only_two)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
