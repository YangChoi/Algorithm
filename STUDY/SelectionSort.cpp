#include <stdio.h>

int main(void){
  int i, j, min, index, temp;
  // i, j : �迭�� �ִ� ���ҵ��� ����ؼ� Ž���ϱ� ���ؼ� ���� 
  // min : �ּҰ�
  // index : ���� ���� ���Ұ� �����ϴ� ��ġ 
  // temp : Ư���� ���ڵ��� �ٲٱ� ���� ���� 
  int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
  for(i = 0; i < 10; i++){
    // 10���� ���Ҹ� �� 10�� �ݺ��ؼ� Ž�� 
    min = 999; // �ּҰ����� ���� ū ���� �־���(��� ���ҵ� ���� �� ū ����)
    // min ���� �׻� �ּҰ��� �����ؾ��ϱ� ������ ó������ ū ���� �־���
    for(j = i; j < 10; j++){
      if(min > array[j]){
        min = array[j];
        index = j; 
      }
    }
    // swaping : �� ������ �ڸ��� �ٲ��� 
    temp = array[i]; // ���� �տ� �ִ� ���� �ӽ������� temp�� �־���
    array[i] = array[index];
    array[index] = temp;
  }
  for(i = 0; i < 10; i++){
    printf("%d ", array[i]);
  }
  return 0;
}
