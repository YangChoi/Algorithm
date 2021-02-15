#include <stdio.h>
// ���� �θ����� ���� �ڽ� ��庸�� Ŀ���� 

// �� ���� �˰�����
// � ��忡 ���� ���� �ر��� �Ǿ��ٸ�
// �θ��庸�� ū �ڽ� ����� �ڸ��� ���� �ٲ���
// �̷��� �� ������ ���� 
// ��üƮ���� ������ ����� �ð� ���⵵�� 
// O(logn) 

int number = 9; 
int heap[9] = {7, 6, 5, 8, 3, 4, 9, 1, 2};

int main(void){
	// ���� ��ü Ʈ�� ������ �ִ� �������� �ٲ�  
	for(int i = 1; i < number; i++){
		int c = i;
		do {
			int root = (c - 1)/2;
			if(heap[root] < heap[c]){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
				
			}
			c = root;
		}while(c != 0);
	}
	// ũ�⸦ �ٿ����� �ݺ������� �� ����
	for(int i = number -1; i >= 0; i--){
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0; 
		int c = 1; 
		do {
			c = 2 * root + 1;
			// �ڽ� �߿� �� ū �� ã�� 
			if(heap[c] < heap[c+1] && c < i-1){
				c++;
			} 
			// ��Ʈ���� �ڽ��� �� ũ�ٸ� ��ȯ
			if(heap[root] < heap[c] && c < i){
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			} 
			root = c;
		}while(c < i);
	} 
	
	for(int i = 0; i < number; i++){
		printf("%d ", heap[i]);
	}
}