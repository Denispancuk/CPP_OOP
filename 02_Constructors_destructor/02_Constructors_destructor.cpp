#include <iostream>
using namespace std;
struct Date {
    int day;
    int month;
    int year;
    void PrintDate() {
        cout << "Birthdate: " << day << '/' << month << '/' << year << endl;
    }
};
class Student {
    string name;
    string surname;
    string MiddleName;
    Date birthdate;
    string phone;
    int* marks;
    int countMarks;
    float AverageMark;
    double AverageMark() {
        double summa = 0;
        for (int i = 0; i < count; i++)
        {
            summa += marks[i];
        }AverageMark = summa / countMarks;

    }
public:

    Student()
    {
            name = "No Name";
            surname = "No Surname";
            MiddleName = "No Middle Name";
            birthdate = { 1,1,1 };
            phone = "No phone";
            marks = nullptr;
            countMarks = 0;
            AverageMark = 0;
    }
    Student(string name, string surname, string middlename) {
        this->name = name;
        this->surname = surname;
        this->MiddleName = middlename;
    }
    void AddMark(int mark) {
        int* temp = new int[countMarks + 1];
        for (int i = 0; i < countMarks; i++)
        {
            temp[i] = marks[i];
        }
        temp[countMarks] = mark;
        if (marks != nullptr)
        {
            delete[] marks;
        }
        marks = temp;
        countMarks++;
    }
    void Print() {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Middle name: " << MiddleName << endl;
        birthdate.PrintDate();
        cout << "Phone: " << phone << endl;
        cout << "Marks: ";
        for (int i = 0; i < countMarks; i++)
        {
            cout << marks[i] << " ";
        }
        cout << "\n Average Mark: " << AverageMark << endl;
    }
    void setName(string name) {
        this->name = name;
    }
    void setLastName(string LastName) {
        this->surname = LastName;
    }
    ~Student()
    {

    }
    
};
int main()
{
    Student student;
    student.Print();

    student.setName("Anton");
    student.setLastName("Chugun");
    student.Print();

    Student st2("Vasia", "Ivanchuk", "Mukolatouvich");
    st2.Print();
}
