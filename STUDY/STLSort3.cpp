#include <iostream>
#include <algorithm>
// �����͸� ��� �����ϴ� ���
// �� , ��ü�� ������ �Ǿ� �ִ� ��

using namespace std;

class Student {
	public:
		string name;
		int score; 
		Student(string name, int score){
			this-> name = name;
			this-> score = score;
			// ������ (�ʱ��Լ�) 
		}
		
		// ���ı��� (������ ���� ����)
		bool operator < (Student &student){
			return this->score < student.score;
			// �� ������ �� ���ٸ� �켱������ �� ���� 
			 
		} 
};

int main(void){
	Student students[] = {
		Student("�羾", 90),
		Student("�ھ�", 94),
		Student("�达", 30),
		Student("�־�", 40),
		Student("����", 50)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++){
		cout << students[i].name << ' ';
	}
}


