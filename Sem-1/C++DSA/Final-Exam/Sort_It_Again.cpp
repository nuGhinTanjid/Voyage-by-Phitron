#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;

    int totalmarks(){
        return math_marks + eng_marks;
    }
};

bool cmp(Student a, Student b) {
    if (a.eng_marks > b.eng_marks) {
        return true;
    } else if (a.eng_marks == b.eng_marks) {
        if (a.math_marks > b.math_marks) {
            return true;
        } else if (a.math_marks == b.math_marks) {
            return a.id < b.id; 
        }
    }
    return false;
}


   


int main() {
    int n;
    cin >> n;

    Student stu[n];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].cls >> stu[i].sec >> stu[i].id >> stu[i].math_marks >> stu[i].eng_marks;
    }

    sort(stu, stu + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << stu[i].name << " " << stu[i].cls << " " << stu[i].sec << " " << stu[i].id << " " << stu[i].math_marks << " " << stu[i].eng_marks << endl;
    }

    return 0;
}
