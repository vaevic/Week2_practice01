#include <iostream>

using namespace std;

int i = 0; // �л� ��ȣ, i��°�л�
int a = 0; // �迭 ��ġ, score[a]
int countstudent = 0; // �л� ��
double total = 0; // ���� ����
double score[] = { 0 };// �迭 �ʱ�ȭ

double scoresum(double &sum) { // �л����� ���� ����
    
    for (a = 0; a < countstudent; a++) {        
        sum += score[a];        
    }
    cout << sum;
    return 0;
}

double ave() { // ���� ���
    double aver = 0;

    aver = total / (double)countstudent;

    cout << aver;
    return 0;
}

int main() {    
        
    cout << "�л��� �� ��� �Դϱ�?" << endl;
    cin >> countstudent;
    

    score[countstudent] = { 0 }; // ������ �迭
        
    for (int i = 1; i<= countstudent; i++) {
        cout << i << "��° �л��� ������ �Է��ϼ���. : ";
        cin >> score[a];
        a++;     
        
    }
   
    cout << "���� �Է� ����" << endl ;
    cout << "�л����� ���� ���� = ";
    scoresum(total);
    cout << endl;
    cout << "�л����� ���� ��� = ";
    ave();
    
    return 0;

}
