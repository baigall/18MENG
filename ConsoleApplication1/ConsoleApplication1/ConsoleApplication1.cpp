#include "stdafx.h"
/*ASCII码排序
输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
Input
输入数据有多组，每组占一行，有三个字符组成，之间无空格。
Output
对于每组输入数据，输出一行，字符中间用一个空格分开。
Sample Input
qwe
asd
zxc
Sample Output
e q w
a d s
c x z
*/
#include"iostream"
using namespace std;
int main()
{
	char a[3],s;
	while (cin >> a[0] >> a[1] >> a[2])
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = i+1; j < 3; j++)
			{
				if (a[i] > a[j])
				{
					s = a[i];
					a[i] = a[j];
					a[j] = s;
				}
			}
		}
		cout << a[0] <<" "<< a[1] <<" "<< a[2] << endl;
	}
    return 0;
}

