#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    float grade, totalGradePoints = 0;
    int credits, totalCredits = 0;

    vector<float> grades;
    vector<int> creditHours;

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << endl;
        cout << "Enter grade: ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credits;

        grades.push_back(grade);
        creditHours.push_back(credits);

        totalGradePoints += grade * credits;
        totalCredits += credits;
    }

    float cgpa = 0;
    if (totalCredits != 0) {
        cgpa = totalGradePoints / totalCredits;
    }

    cout << "\n----- Course Details -----" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1 
             << " -> Grade: " << grades[i] 
             << ", Credits: " << creditHours[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}