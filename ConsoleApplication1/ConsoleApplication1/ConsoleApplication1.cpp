#include "stdafx.h"
/*ASCII������
���������ַ��󣬰����ַ���ASCII���С�����˳������������ַ���
Input
���������ж��飬ÿ��ռһ�У��������ַ���ɣ�֮���޿ո�
Output
����ÿ���������ݣ����һ�У��ַ��м���һ���ո�ֿ���
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

