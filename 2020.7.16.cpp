#include<iostream>
#include<string.h>
using namespace std;
int a[20][20] = { 0 }, res = 0, m, n;//ע����ȫ�ֱ�������������ʱҪ������ʼ��
void dfs(int x, int y)
{
	if (a[x][y] == 1 || x<0 || x >= m || y<0 || y >= n)//�ݹ�ı߽�����
		return;
	res++;    //�������1
	a[x][y] = 1;//��1�����Ѿ��߹�
	dfs(x - 1, y);//�ֱ��Ӧ��
	dfs(x + 1, y);//��
	dfs(x, y - 1);//��
	dfs(x, y + 1);//�����ڸ���

}
int main()
{
	while (~scanf("%d %d", &m, &n))
	{
		getchar();//ΪʲôҪgetchar()?��Ϊ��һ��9 6���滹��һ�����з�
		int x, y;
		char c;
		for (int i = 0; i<m; i++)
		{
			for (int j = 0; j<n; j++)
			{
				scanf("%c", &c);
				if (c == '@')
				{
					x = i;
					y = j;
				}
				else{
					if (c == '#')
						a[i][j] = 1;
				}
			}
			getchar();//ͬ���ģ��Ե�ÿ�����һ�����з�
		}
		dfs(x, y);
		printf("%d\n", res);
		res = 0;
		memset(a, 0, sizeof(a));//ȫ�ֱ�����ʼ��
	}

	return 0;
}