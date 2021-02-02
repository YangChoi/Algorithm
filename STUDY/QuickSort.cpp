#include <stdio.h>
// �Ǻ� : ���ذ�
// �Ǻ������� ū ���� ������, ���� ���� �������� ������ 

int number = 10; 
int data[] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
 
void quickSort(int *data, int start, int end){
	if(start >= end){
		// ���Ұ� 1���� ��� 
		return;  
	}
	
	int key = start; // Ű�� ù��° ���� 
	int i = start + 1; // ���ʺ��� �ϳ��� ū ���� ã�� ���� index
	int j = end; // ������ ��   
	// i : ���� �������
	// j : ������ �������
	int temp;
	
	while(i <= j){
		// ������ ������ �ݺ�
		// ���ʺ��� ����Ѱ� �����ʺ��� ����Ѱͺ��� �۰ų� ���� �� 
		while(data[i] <= data[key]) {
			i++; // Ű ������ ū ���� ���� ������ ���������� �̵�
			 
		}
		while(data[j] >= data[key] && j > start){
			// Ű ������ ���� ���� ���� ������ �ݺ�
			// Ŀ���� start������ ������ 
			// �������� ���������� �ʾƵ� ��
			j--;	 
		}
		if(i > j){
			// ������ ���¸� Ű ���� ��ü 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp; 
		}else {
			// �������� �ʾҴٸ� ū���� ���� ���� �ٲ��� 
			temp = data[j];
			data[j] = data[i];
			data[i] = temp; 
		}
		
	}
	
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);	
} 

int main(void){
	quickSort(data, 0, number-1);
	for(int i = 0; i < number; i++){
		printf("%d ", data[i]);
	}
}

// �Ǻ� ������ ���� O(N^2) �� �־��� ��쿣 ��Ÿ�� ������

// �̹� ������ �Ǿ� �ִ� ���? 
// ���� ������ ������ ������� ���ϰ� 
// 10���� ������ ��� 10�� ������ Ȯ��

// ���� ������ ��쿣 �̹� ������ �� ��� ������ ����
// �Ϲ������δ� quick sort �� ������ ��쿡 ���� �ٸ�
 
