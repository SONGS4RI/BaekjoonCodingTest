#include<iostream>
using namespace std;

int Partiton(int arr[], int left, int right); // �� ���� �޼ҵ� (������)
void QuickSort(int arr[], int left, int right); // �� ���� �޼ҵ� (���)
void Swap(int *A, int *B); // �� ��ȯ �޼ҵ�
void ShowArr(int arr[], int length); // �迭 ��� �޼ҵ�

void ShowArr(int arr[], int length) // �迭 ��� �޼ҵ�
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Swap(int *A, int *B) // �� ��ȯ �޼ҵ� (call by address)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}

int Partiton(int arr[], int left, int right) // ������ ������ �޼ҵ�
{
	int first = left;
	int pivot = arr[first]; // ���� �迭

	while (left<=right)
	{
		while (arr[left] <= pivot && left < right)
			++left;
		while (arr[right] >= pivot && left <= right)
			--right;
		if (left < right)
			Swap(&arr[left], &arr[right]);
		else
			break;
		
	}
	Swap(&arr[first], &arr[right]);

	return right;
}
void QuickSort(int arr[], int left, int right) // ������ �޼ҵ�
{
	if (left < right)
	{
		int index = Partiton(arr, left, right);// ��Ƽ�� �޼ҵ� ���� (���ϰ� right)

		QuickSort(arr, left, index - 1); // ����Լ� ���� �������� �޼ҵ� ����
		QuickSort(arr, index + 1, right); // ����Լ� ���� ����������  �޼ҵ� ����
	}
}

int main()
{
	int Arr[] = { 4,12,2,7,1,3,9 }; // ���Ŀ� ���� �迭
	int length = sizeof Arr / sizeof Arr[0]; // �迭�� ����
	
	cout << "�迭ũ�� : " << length << endl;// �迭 ũ��(lengh) ���
	ShowArr(Arr, length); // �迭 ��� �޼ҵ� ����
	QuickSort(Arr, 0, length-1); // �� ���� �޼ҵ� ����
	ShowArr(Arr, length); // ������ �Ϸ�� �迭 ��� �޼ҵ� ����
	
	return 0;
}