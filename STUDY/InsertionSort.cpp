#include <stdio.h>
// �� ���ڸ� ������ ��ġ�� �����ϴ� ��� 
// �ʿ�ÿ��� ��ġ�� �ٲ�
int main(void){
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(i = 0; i < 9; i++){
		j = i; // ���� ������ ���Ҹ� ������ ������ ����  
		while(array[j] > array[j + 1]){
			// ���� ���Ұ� �� ũ�ٸ� �ڸ� �ٲ��ֱ�  
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		} 
	}
	for(i = 0; i < 10; i++){
		printf("%d ",array[i]);
	}
	return 0; 
} 

// �־��� ��쿡�� 10 + 9 + .. + 1
// O(N^2)
// ���� ���ĵ� ���¿� ���������� �ÿ� ������ ������ 
 
