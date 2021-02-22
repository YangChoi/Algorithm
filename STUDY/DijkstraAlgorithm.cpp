#include <stdio.h> 
// ���ͽ�Ʈ�� �˰���
// �ִ� ���
// Ư���� �ϳ��� �������� �ٸ� ��� �������� ���� �ִ� ��� �˷���
// ��, ���� ������ ������ �� ����
// ���̳��� ���α׷��� ���� > �ִ� �Ÿ��� �������� �ִ� �Ÿ��� �̷�����ֱ� ���� 

// 1. ��� ��� ����
// 2. ��� ��� �������� �� ��� �ּ� ��� ����
// 3. �湮���� ���� ��� �� ���� ����� ���� ��� ����
// 4. �ش� ��� ���� Ư�� ���� ���� ��� ����� �ּ� ��� ����
// 4. 3~4 �ݺ� 
 
int number = 6; 
int INF = 1000000000; // ���Ѵ� ǥ��

// ��ü �׷����� �ʱ�ȭ 
int a[6][6] = {
	{0, 2, 5, 1, INF, INF}, // 1���� 2�� ���� ���, 1���� 3���� ���� ���..
	{2, 0, 3, 2, INF, INF},
	{5, 3, 0, 3, 1, 5},
	{1, 2, 3, 0, 1, INF},
	{INF, INF, 1, 1, 0, 2},
	{INF, INF, 5, INF, 2, 0}
}; 

bool v[6]; // ���� �湮�� �������� Ȯ�� (�湮�� ���) 
int d[6]; // �Ÿ� ���� (�ִ� �Ÿ�)  
 
// ���� �ּ� �Ÿ��� ������ ���� ��ȯ
int getSmallIndex(){
	int min = INF; 
	int index = 0; 
	for(int i = 0; i < number; i++){
		if(d[i] < min && !v[i]){
			min = d[i];
			index = i; 
		}
	}
	return index; 
}

// ���ͽ�Ʈ�� �����ϴ� �Լ� 
void dijkstra(int start){
	// Ư�� �������� ���� 
	for(int i = 0; i < number; i++){
		d[i] = a[start][i]; // ���������� ��� 
		
	} 
	v[start] = true;
	for(int i = 0; i < number -2; i++){
		int current = getSmallIndex();
		v[current] = true; // �湮ó�� 
		for(int j = 0; j < 6; j++){
			if(!v[j]) {
				if(d[current] + a[current][j] < d[j]){
					d[j] = d[current] + a[current][j];
				}
			}			
		}
	}
} 

int main(void){
	dijkstra(0);
	for(int i = 0; i <number; i++){
		printf("%d ", d[i]);
	}
}

// ���ͽ�Ʈ�� ���� ���� ����Ž������ �����ϸ� ������ 
 
