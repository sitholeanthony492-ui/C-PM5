#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Student
{
public:
    int id;
    string name;
    int age;
};

vector<Student> students;

void saveToFile()
{
    ofstream file("students.txt");

    for (Student s : students)
    {
        file << s.id << endl;
        file << s.name << endl;
        file << s.age << endl;
    }

    file.close();
}

void loadFromFile()
{
    ifstream file("students.txt");

    Student s;

    while (file >> s.id)
    {
        file.ignore();
        getline(file, s.name);
        file >> s.age;

        students.push_back(s);
    }

    file.close();
}

void addStudent()
{
    Student s;

    cout << "\nEnter Student ID: ";
    cin >> s.id;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Student Age: ";
    cin >> s.age;

    students.push_back(s);

    cout << "\nStudent Added Successfully!\n";
}

void viewStudents()
{
    if (students.empty())
    {
        cout << "\nNo Students Found.\n";
        return;
    }

    cout << "\n===== STUDENT LIST =====\n";

    for (Student s : students)
    {
        cout << "ID: " << s.id << endl;
        cout << "Name: " << s.name << endl;
        cout << "Age: " << s.age << endl;
        cout << "-------------------\n";
    }
}

void searchStudent()
{
    int searchID;

    cout << "\nEnter Student ID: ";
    cin >> searchID;

    for (Student s : students)
    {
        if (s.id == searchID)
        {
            cout << "\nStudent Found!\n";
            cout << "ID: " << s.id << endl;
            cout << "Name: " << s.name << endl;
            cout << "Age: " << s.age << endl;
            return;
        }
    }

    cout << "\nStudent Not Found.\n";
}

void deleteStudent()
{
    int deleteID;

    cout << "\nEnter Student ID to Delete: ";
    cin >> deleteID;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].id == deleteID)
        {
            students.erase(students.begin() + i);

            cout << "\nStudent Deleted Successfully.\n";
            return;
        }
    }

    cout << "\nStudent Not Found.\n";
}

int main()
{
    loadFromFile();

    int choice;

    do
    {
        cout << "\n============================";
        cout << "\n STUDENT MANAGEMENT SYSTEM";
        cout << "\n============================";
        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Search Student";
        cout << "\n4. Delete Student";
        cout << "\n5. Save Data";
        cout << "\n6. Exit";
        cout << "\n\nEnter Choice: ";

        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                viewStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                saveToFile();
                cout << "\nData Saved Successfully.\n";
                break;

            case 6:
                saveToFile();
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice.\n";
        }

    } while(choice != 6);

    return 0;
}