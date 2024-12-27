#include <iostream>

using namespace std;

int i = 0; // 학생 번호, i번째학생
int a = 0; // 배열 위치, score[a]
int countstudent = 0; // 학생 수
double total = 0; // 점수 총합
double score[] = { 0 };// 배열 초기화

double scoresum(double &sum) { // 학생들의 점수 총합
    
    for (a = 0; a < countstudent; a++) {        
        sum += score[a];        
    }
    cout << sum;
    return 0;
}

double ave() { // 점수 평균
    double aver = 0;

    aver = total / (double)countstudent;

    cout << aver;
    return 0;
}

int main() {    
        
    cout << "학생은 총 몇명 입니까?" << endl;
    cin >> countstudent;
    

    score[countstudent] = { 0 }; // 점수의 배열
        
    for (int i = 1; i<= countstudent; i++) {
        cout << i << "번째 학생의 점수를 입력하세요. : ";
        cin >> score[a];
        a++;     
        
    }
   
    cout << "점수 입력 종료" << endl ;
    cout << "학생들의 점수 총합 = ";
    scoresum(total);
    cout << endl;
    cout << "학생들의 점수 평균 = ";
    ave();
    
    return 0;

}
