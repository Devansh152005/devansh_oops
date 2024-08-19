// 6
// WAP that displays the name of the topper in the class
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    void setDetails() {// details of the student
        cout << "Enter the name: "<<endl;
        cin >> name;
        cout << "Enter total marks: "<<endl;
        cin >> marks;
    }

    int getMarks() {
        return marks;
    }

    string getName() {
        return name;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: "<<endl;
    cin >> n;

    Student students[n];
    for (int i = 0; i < n; i++) {// enter the details of the student
        cout << "For student " << i + 1 << ":" << endl;
        students[i].setDetails();
    }

    int maxMarks = students[0].getMarks();
    string topper = students[0].getName();

    for (int i = 1; i < n; i++) { // code to get the student with maximum marks
       
        if (students[i].getMarks() > maxMarks) {
            maxMarks = students[i].getMarks();
            topper = students[i].getName();
        }
    }

    cout << "The topper is: " << topper << " with " << maxMarks << " marks." << endl;

    return 0;
}
