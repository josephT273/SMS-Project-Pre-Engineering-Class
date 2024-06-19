/*
* EXERCISE (REAL-WORLD CASE STUDY)
  TODO: Create a program that stores students information using a structure
  TODO: Students have first name, last name, id and department.
  TODO: Departments have name and short name;
  TODO: Students take courses where each course have name and code
  TODO: Your program must register students with their full information including their score on each course.
  TODO: Your program must display the full information of each student

  This program is write by Joseph Tadesse @josepht273
  This program is released under the MIT License

  If you have any questions, please contact me at:
  https://github.com/josepht273
  https://www.linkedin.com/in/josepht273/
  https://www.instagram.com/joe_tade
  https://www.facebook.com/josepht273
  https://twitter.com/josepht274

  As you se on the above TODO/Question We have to create C++ program to solve this problem.
  This is our C++/ Computer Programming Class individual assignment given by our instructor.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std; // Helps us to create clean code without using std:: every time

// Structures for department To add department info
struct Department {
    string name;
    string shortName;
};

// Structures for for course to add course data with course code and score
struct Course {
    string name;
    string code;
    double score; // Added score directly in Course structure
};

// Structure for student data to gate all usefull data and store it
struct Student {
    string firstName;
    string lastName;
    string id;
    Department department;
    vector<Course> courses;
};

// Function to input department details
void inputDepartmentDetails(Department& department) {
    cout << "Enter department name (eg: Software Engineering): ";
    getline(cin, department.name);
    cout << "Enter department short name (eg: SE): ";
    getline(cin, department.shortName);
}

// Function to input course details
Course inputCourseDetails() {
    Course course;
    cout << "Enter course name (eg: Python): ";
    getline(cin, course.name);
    cout << "Enter course code (eg: PY0001): ";
    getline(cin, course.code);
    cout << "Enter score (eg: 95): ";
    cin >> course.score;
    cin.ignore(); // Clear newline character from input buffer
    return course;
}

// Function to input student details
Student inputStudentDetails(int studentNumber) {
    Student student;
    cout << "\nStudent " << studentNumber << ":\n";
    cout << "Enter first name (eg: Abebe): ";
    getline(cin, student.firstName);
    cout << "Enter last name (eg: Belay): ";
    getline(cin, student.lastName);
    cout << "Enter ID (eg: ABC/0001/16): ";
    getline(cin, student.id);

    inputDepartmentDetails(student.department);

    string numCourses_str;
    cout << "Enter number of courses (eg: 2): ";
    getline(cin, numCourses_str);
    int numCourses = stoi(numCourses_str);

    for (int j = 0; j < numCourses; j++) {
        student.courses.push_back(inputCourseDetails());
    }

    return student;
}

// Function to display student information
void displayStudent(const Student& student) {
    cout << "\nName: " << student.firstName << " " << student.lastName << endl;
    cout << "ID: " << student.id << endl;
    cout << "Department: " << student.department.name << " (" << student.department.shortName << ")" << endl;
    cout << "Courses and Scores:\n";
    for (const Course& course : student.courses) {
        cout << course.name << " (" << course.code << "): " << course.score << endl;
    }
}