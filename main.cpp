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
