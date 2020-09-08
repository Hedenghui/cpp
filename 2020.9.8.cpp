#include<iostream>
using namespace std;

void PrintArray(int*a ,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

//1.²åÈëÅÅÐò
void InsertSort(int* a, int n)
{
	// 3 6 2 5
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmd = a[end + 1];
		while (end>=0)
		{
			if (a[end]>tmd)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmd;
	}
}
void TestInsertSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


//Ï£¶ûÅÅÐò:ÓÐµã²åÈëÅÅÐòµÄÉý¼¶°æ
void ShellSort(int*a, int n)
{
	int gap = n;
	while (gap>1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmd = a[end + gap];
			while (end >= 0)
			{
				if (a[end]>tmd)
				{
					a[end + gap] = a[end];
					end = end - gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmd;
		}
	}
}
void TestShellSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	ShellSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}



//Ñ¡ÔñÅÅÐò
void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int min = begin;
		int max = end;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] < a[min])
			{
				min = i;
			}
			if (a[i]>a[max])
			{
				max = i;
			}
		}
		swap(a[begin],a[min]);
		if (max == begin)
		{
			max = min;
		}
		swap(a[end], a[max]);
		begin++;
		end--;
	}
}
void TestSelectSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


//Ã°ÅÝÅÅÐò
void BubbleSort(int* a, int n)
{
	for (int end = n - 1; end > 0; end--)
	{
		int flag = 0;
		for (int i = 0; i < end; i++)
		{
			if (a[i]>a[i + 1])
			{
				swap(a[i], a[i + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return;
		}
	}
}

void TestBubbleSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	BubbleSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

//¶ÑÅÅÐò
void AdjustDown(int*a, int n,int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child<n)
	{
		if (child + 1 < n&&a[child] < a[child + 1])
		{
			child++;
		}
		if (a[child]>a[parent])
		{
			swap(a[child], a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int*a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		swap(a[0], a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}
void TestHeapSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


//¿ìÅÅ
int PartSort(int* a, int begin, int end)
{
	//ÓÒ±ß×ökey£¬×ó±ßÏÈ×ß
	//×ó±ß×ökey£¬ÓÒ±ßÏÈ×ß

	int key = a[end];
	int keyindex = end;
	while (begin < end)
	{
		//beginÕÒ´ó
		while (begin<end&&a[begin] <= key)
		{
			++begin;
		}
		//endÕÒÐ¡
		while (begin<end&&a[end] >= key)
		{
			--end;
		}
		swap(a[begin], a[end]);
	}
	swap(a[begin], a[keyindex]);
	return begin;
}
void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int keyindex = PartSort(a, begin, end);
	QuickSort(a, begin, keyindex - 1);
	QuickSort(a, keyindex + 1, end);
}
void TestQuickSort()
{
	int a[] = { 3, 6, 2, 5, 7, 9, 8, 6, 1, 4 };
	QuickSort(a, 0, (sizeof(a) / sizeof(int)-1));
	PrintArray(a, sizeof(a) / sizeof(int));
}














int  main()
{
	//TestInsertSort();
	//TestShellSort();
	//TestSelectSort();
	//TestBubbleSort();
	//TestHeapSort();
	TestQuickSort();
	return 0;
}

