#include <iostream>
using namespace std;

class Stack1 {
    enum {EMPTY = -1, FULL = 9};
    char arr[FULL + 1];
    int topIndex;
public:
    Stack1() {
        topIndex = EMPTY;
    }
    Stack1(const Stack1& other) = delete;

    ~Stack1() = default;
    bool IsFull(){
        return topIndex == FULL;
    }

    bool Push(char element) {
        if (!IsFull())
        {
            arr[++topIndex] = element;
            return true;
        }
        return false;
    }
    bool IsEmpty() {
        return topIndex == EMPTY;
    }
    int Pop() {
        if (!IsEmpty())
        {
            return arr[topIndex--];
        }
    }
    int GetCount() {
        return topIndex+1;
    }
    void Clear() {
        topIndex = EMPTY;
    }
    int Peek() {
        if (!IsEmpty())
        {
            return arr[topIndex];
        }
    }
    void Print() {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }cout << endl;
    }
};

template <typename T >
class Stack2 {
private:
    enum { EMPTY = -1 };
    T* arr;
    int size;
    int topIndex;
public:
    Stack2() {
        size = 0;
        arr = nullptr;
        topIndex = EMPTY;
    };
    Stack2(int size) :size(size)
    {
        arr = new T[size];
        topIndex = EMPTY;
    }
    Stack2(initializer_list<T> list)
    {
        this->size = list.size();
        this->arr = new T[size];
        int i = 0;
        for (int elem : list)
        {
            arr[i] = elem;
            i++;
        }
    }
    bool IsFull() {
        return topIndex == size - 1;
    }
    void Resize() {
        bool flag = IsFull();
        if (flag)
        {
            T* temp = new T[size*2];
            for (int i = 0; i < topIndex; i++)
            {
                temp[i] = arr[i];
            }
            if (arr != nullptr)
            {
                delete[]arr;
            }
            arr = temp;
            size *= 2;
        }
    }

    bool Push(T element) {
        if (!IsFull())
        {
            arr[++topIndex] = element;
            return true;
        }
        return false;
    }
    bool IsEmpty() {
        return topIndex == EMPTY;
    }
    int Pop() {
        if (!IsEmpty())
        {
            return arr[topIndex--];
        }
    }
    void Clear() {
        topIndex = EMPTY;
    }
    int Peek() {
        if (!IsEmpty())
        {
            return arr[topIndex];
        }
    }
    void Print() {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }cout << endl;
    }
    ~Stack2() {
        if (arr != nullptr)
        {
            delete[] arr;
        }
    }
};
int main()
{
    Stack1 s1;

    s1.Push('A');
    s1.Push('B');
    s1.Push('C');

    s1.Print();
    cout << "Peek: " << (char)s1.Peek() << endl;
    cout << "Pop: " << (char)s1.Pop() << endl;
    cout << "Count: " << s1.GetCount() << endl;
    cout << "IsEmpty: " << s1.IsEmpty() << endl;
    cout << "IsFull: " << s1.IsFull() << endl;

    s1.Clear();

    cout << "After Clear: ";
    s1.Print();
    cout << "IsEmpty: " << s1.IsEmpty() << endl;


    Stack2<int> s2(5);

    s2.Push(10);
    s2.Push(20);
    s2.Push(30);

    s2.Print();
    cout << "Peek: " << s2.Peek() << endl;
    cout << "Pop: " << s2.Pop() << endl;
    cout << "IsEmpty: " << s2.IsEmpty() << endl;
    cout << "IsFull: " << s2.IsFull() << endl;

    s2.Push(40);
    s2.Push(50);
    s2.Push(60);

    s2.Print();

    s2.Clear();

    cout << "After Clear: ";
    s2.Print();
    cout << "IsEmpty: " << s2.IsEmpty() << endl;


    Stack2<int> s3{ 1, 2, 3, 4, 5 };

    s3.Print();
}
