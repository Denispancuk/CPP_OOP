#include <iostream>
using namespace std;



class Player {
    string name;
    short age;
    int games;
    int goals;
public:
    void PrintPlayer() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Games: " << games << endl;
        cout << "Goals: " << goals << endl;
    }
    void InitPlayer() {
        cout << "Enter name: "; cin >> name;
        cout << "Enter age: "; cin >> age;
        games = 0;
        goals = 0;
    }
    void AddGameToPlayer(int goals1 = 0) {
        games++;

        goals += goals1;
    }
};


class Student {
    string name;
    short marks[3];
public:
    // setter
    void setName(string name) {
        this->name = name;
    }
    void setMark(int index, int mark) {
        if (mark >= 1 and mark <= 12)
        {
            marks[index] = mark;
        }
    }
    //getter
    string getName() {
        return name;
    }
    int getMark(int index)
    {
        return marks[index];
    }
    double getAverage() {
        double summa = 0;
        for (int i = 0; i < 3; i++)
        {
            summa += marks[i];
        }
        return (double)summa / 3;
    }
};
int main()
{
    Student st;
    st.setName("Ivan");
    st.setMark(0,1);
    st.setMark(1,4);
    st.setMark(2,12);
    /*Player player;
    player.InitPlayer();
    player.PrintPlayer();
    player.AddGameToPlayer(3);
    player.PrintPlayer();*/
}
