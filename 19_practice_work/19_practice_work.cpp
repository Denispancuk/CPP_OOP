#include <iostream>
using namespace std;
class Point {
    int X;
    int Y;
    int Z;
public:
    void InitPoints() {
        cout << "Enter X: "; cin >> X;
        cout << "Enter Y: "; cin >> Y;
        cout << "Enter Z: "; cin >> Z;
    }
    void ShowPoints() {
        cout << "X: " << X << endl;
        cout << "Y: " << Y << endl;
        cout << "Z: " << Z << endl;
    }
    //setter
    void SetX(int X) {
        this->X = X;
    }
    void SetY(int Y) {
        this->Y = Y;
    }
    void SetZ(int Z) {
        this->Y = Y;
    }
    //getter
    int GetX(int X) {
        return X;
    }
    int GetY(int Y) {
        return Y;
    }
    int GetZ(int Z) {
        return Z;
    }
};

struct FML {
    string FirstName;
    string LastName;
    string MiddleName;
};

struct BirthdayData {
    short Day;
    short Month;
    short Year;
};

class Student {
    FML FML;
    BirthdayData Birthday;
    int ContactTelephone;
    string City;
    string Country;
    string NameEducationInstitution;
    string CityEducationInstitution;
    string CountryEducationInstitution;
    short NumberGroup;

};
int main()
{
    //First task
    Point XYZ;
    XYZ.InitPoints();
    XYZ.ShowPoints();
    XYZ.SetX(100);
    XYZ.SetY(200);
    XYZ.SetZ(300);
    cout << endl;
    cout << "X: " << XYZ.GetX(100) << endl;
    cout << "Y: " << XYZ.GetY(200) << endl;
    cout << "Z: " << XYZ.GetZ(300) << endl;
    //Second task

}
