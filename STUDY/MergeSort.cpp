#include <stdio.h>
// ���� ������ ��Ȯ�� ������ ������ ������ �־��� ��쿡��
// O(NlogN) ������ 
// �׻� ������ �ɰ��� ������ �ǹ����� ���� 
// �ɰ��� ��ġ�� ������ ���� ���� 
// �������� �Ѱ��� ����

int number = 8; 
int sorted[8]; // ���ĵ� �迭�� ���� �� �ִ� �迭 (���Ĺ迭�� �ݵ�� ���� ������) 

void merge(int a[], int m, int middle, int n){
	 // ����, �߰�, �� ��
	 int i = m;
	 int j = middle + 1;
	 int k = m; 
	 // ���� ������� �迭�� ����
	 while(i <= middle && j <= n){
	 	if(a[i] <= a[j]){
	 		// �߰� ���� ���۰����� ũ�ٸ�  
	 		sorted[k] = a[i];
	 		// ���Ĺ迭�� ���� ���� �������� �־��� 
	 		i++;
		 } else {
		 	sorted[k] = a[j];
		 	// �׷��� �ʴٸ� j�� ���� ���̹Ƿ� 
			 // ���Ĺ迭�� j�� �������� �־��� 
		 	j++;
		 }
		 k++;
	 } 
	 // i�� ���� ���� ��� j�� n���� �������� ���� �����
	 // i �� �̹� ���� �迭�� �־��ٸ� j�� �־����
	 // �ݴ�ε� �������� 
	 // ���� �����͵� ����
	 if(i > middle){
	 	for(int t = j; t <= n; t++){
	 		sorted[k] = a[t];
	 		k++;
		 }
	 } else {
	 	for(int t = i; t <= middle; t++){
	 		sorted[k] = a[t];
	 		k++;
		 }
	 }
	 
	 // ���ĵ� �迭 ����
	 for(int t = m; t<= n; t++){
	 	a[t] = sorted[t];
	 	// ��� ��ġ�� �� �湮�ϸ鼭 ���ĵ� �迭 ���� ���� �迭�� �ű�  
	 } 
	 
}

void mergeSort(int a[], int m, int n){
	// ũ�Ⱑ 1���� ū ���
	if(m < n){
		int middle = (m+n)/2;
		mergeSort(a, m, middle); // ���� ���İ� 
		mergeSort(a, middle+1, n); // ������ ���İ�  
		merge(a, m, middle, n); // ���߿� ��ħ 
	} 
}

int main(void){
	int array[number] = {7, 6, 5, 8, 4, 5, 9, 1};
	mergeSort(array, 0, number-1);
	for(int i = 0; i < number; i++){
		printf("%d ", array[i]);
	} 
}
