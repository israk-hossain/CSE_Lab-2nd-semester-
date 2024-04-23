#include <iostream>
using namespace std;

class Student {
private:
    int id;
    float CGPA;
public:
    void inputData(int i, float cgpa) {
        id = i;
        CGPA = cgpa;
    }

    float getMaxCGPA(Student students[], int size) {
        float maxCGPA = students[0].CGPA;
        for (int i = 1; i < size; ++i) {
            if (students[i].CGPA > maxCGPA) {
                maxCGPA = students[i].CGPA;
            }
        }
        return maxCGPA;
    }

    float getAverageCGPA(Student students[], int size) {
        float totalCGPA = 0;
        for (int i = 0; i < size; ++i) {
            totalCGPA += students[i].CGPA;
        }
        return totalCGPA / size;
    }

    float getMinCGPA(Student students[], int size) {
        float minCGPA = students[0].CGPA;
        for (int i = 1; i < size; ++i) {
            if (students[i].CGPA < minCGPA) {
                minCGPA = students[i].CGPA;
            }
        }
        return minCGPA;
    }
};

int main() {
    const int numStudents = 30;
    Student students[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        int id;
        float cgpa;
        cout << "Enter ID for student " << i + 1 << ": ";
        cin >> id;
        cout << "Enter CGPA for student " << i + 1 << ": ";
        cin >> cgpa;
        students[i].inputData(id, cgpa);
    }
    float maxCGPA = students[0].getMaxCGPA(students, numStudents);

    float averageCGPA = students[0].getAverageCGPA(students, numStudents);
    float minCGPA = students[0].getMinCGPA(students, numStudents);
    cout << "Maximum CGPA: " << maxCGPA << endl;
    cout << "Average CGPA: " << averageCGPA << endl;
    cout << "Minimum CGPA: " << minCGPA << endl;
    return 0;
}
