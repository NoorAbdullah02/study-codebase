#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include<bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    long long int id;
    string batch;

public:
    Student() : id(0) {}
    Student(string n, long long i, string b) : name(n), id(i), batch(b) {}

    void setName(string n) { name = n; }
    void setId(long long i) { id = i; }
    void setBatch(string b) { batch = b; }

    string getName() const { return name; }
    long long getId() const { return id; }
    string getBatch() const { return batch; }

    void input() {
        cout << "Name   : ";
        cin.ignore();
        getline(cin, name);
        cout << "Id     : ";
        cin >> id;
        cout << "Batch  : ";
        cin >> batch;
    }

    void display() const {
        cout << "Name   : " << name << "\nId     : " << id << "\nBatch  : " << batch << "\n-----------------------\n";
    }
};

class StudentManagementSystem {
private:
    vector<Student> students;
    string filename;

public:
    StudentManagementSystem(string fname) : filename(fname) {
        loadStudents();
    }

    void addStudent() {
        Student s;
        cout << "\n\t---Add Student Record---\n\n";
        s.input();
        students.push_back(s);
        saveStudents();
        cout << "\nStudent added successfully!\n";
    }

    void addMultipleStudents() {
        cout << "\n\t---Add Multiple Students---\n\n";
        int numStudents;
        cout << "Enter the number of students to add: ";
        cin >> numStudents;

        for (int i = 0; i < numStudents; i++) {
            Student s;
            cout << "\nStudent " << i + 1 << ":\n";
            s.input();
            students.push_back(s);
        }
        saveStudents();
        cout << "\nStudents added successfully!\n";
    }

    void viewRecord() {
        cout << "\n\t---View Record---\n\n";
        if (students.empty()) {
            cout << "No record found...";
        } else {
            for (const auto& s : students) {
                s.display();
            }
        }
    }

    void removeStudent() {
        long long int id;
        cout << "\n\t---Remove Student Data---\n\n";
        cout << "Enter the ID of the student you want to remove: ";
        cin >> id;

        auto it = find_if(students.begin(), students.end(),
                          [id](const Student& s) { return s.getId() == id; });

        if (it != students.end()) {
            students.erase(it);
            saveStudents();
            cout << "\nRecord successfully removed!\n";
        } else {
            cout << "\nNo record found with ID: " << id << "\n";
        }
    }

    void updateStudent() {
        long long int id;
        cout << "\n\t---Update Student Data---\n\n";
        cout << "Enter the ID of the student you want to update: ";
        cin >> id;

        auto it = find_if(students.begin(), students.end(),
                          [id](const Student& s) { return s.getId() == id; });

        if (it != students.end()) {
            cout << "Enter new name   : ";
            string name;
            cin.ignore();
            getline(cin, name);
            it->setName(name);

            cout << "Enter new batch  : ";
            string batch;
            cin >> batch;
            it->setBatch(batch);

            saveStudents();
            cout << "\nRecord successfully updated!\n";
        } else {
            cout << "\nNo record found with ID: " << id << "\n";
        }
    }

    void findStudent() {
        long long int id;
        cout << "\n\t---Find Student---\n\n";
        cout << "Enter the ID of the student you want to find: ";
        cin >> id;

        auto it = find_if(students.begin(), students.end(),
                          [id](const Student& s) { return s.getId() == id; });

        if (it != students.end()) {
            it->display();
        } else {
            cout << "\nNo record found with ID: " << id << "\n";
        }
    }

    void viewBatchInformation() {
        string batch;
        cout << "\n\t---View Batch-Wise Student Information---\n\n";
        cout << "Enter the batch name: ";
        cin >> batch;

        cout << "\n\t---Batch: " << batch << "---\n\n";

        bool found = false;
        for (const auto& s : students) {
            if (s.getBatch() == batch) {
                s.display();
                found = true;
            }
        }

        if (!found) {
            cout << "\nNo record found for batch: " << batch << "\n";
        }
    }

    void clearRecord() {
        students.clear();
        saveStudents();
        cout << "\nRecord cleared successfully!\n";
    }

private:
    void loadStudents() {
        ifstream inFile(filename, ios::binary);
        if (inFile) {
            Student s;
            while (inFile.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
                students.push_back(s);
            }
            inFile.close();
        }
    }

    void saveStudents() {
        ofstream outFile(filename, ios::binary);
        for (const auto& s : students) {
            outFile.write(reinterpret_cast<const char*>(&s), sizeof(Student));
        }
        outFile.close();
    }
};

class Menu {
private:
    StudentManagementSystem& sms;

public:
    Menu(StudentManagementSystem& s) : sms(s) {}

    void display() {
        system("cls");
        Sleep(100);
        system("color 0b");
        cout << "\n\t---Department Of ICE Student Management System---\n\n";
        cout << "1. View record\n";
        cout << "2. Add student data\n";
        cout << "3. Remove student data\n";
        cout << "4. Update student data\n";
        cout << "5. Find student\n";
        cout << "6. View batch-wise student information\n";
        cout << "7. Add multiple students\n";
        cout << "8. Clear record\n";
        cout << "9. Exit\n\n";

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        processChoice(choice);
    }

private:
    void processChoice(int choice) {
        system("cls");
        switch (choice) {
            case 1: sms.viewRecord(); break;
            case 2: sms.addStudent(); break;
            case 3: sms.removeStudent(); break;
            case 4: sms.updateStudent(); break;
            case 5: sms.findStudent(); break;
            case 6: sms.viewBatchInformation(); break;
            case 7: sms.addMultipleStudents(); break;
            case 8: sms.clearRecord(); break;
            case 9:
                system("color 0f");
                exit(0);
            default: cout << "\n\tInvalid choice...";
        }

        cout << "\n\nPress any key to continue...";
        _getch();
        display();
    }
};

int main() {
    StudentManagementSystem sms("Student_record.bin");
    Menu menu(sms);
    menu.display();
    return 0;
}
