#include <iostream>
using namespace std;
/*
class Stack {
    enum {EMPTY = -1, FULL = 9};
    int arr[FULL + 1];
    int topIndex;
public:
    Stack() {
        topIndex = EMPTY;
    }
    Stack(const Stack& other) = delete;

    ~Stack() = default;
    bool IsFull(){
        return topIndex == FULL;
    }

    bool Push(int element) {
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
};*/
class Stack {
private:
    enum { EMPTY = -1 };
    int* arr;
    int size;
    int topIndex;
public:
    Stack() = default;
    Stack(int size):size(size)
    {
        arr = new int[size];
        topIndex = EMPTY;
    }
    bool IsFull() {
        return topIndex == size-1;
    }

    bool Push(int element) {
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
    ~Stack() {
        if (arr != nullptr)
        {
            delete[] arr;
        }
    }
};
int main()
{
    Stack st;
    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
    st.Push(50);
    cout << "Size = " << st.GetCount() << endl;
    st.Print();
    while (!st.IsEmpty())
    {
        cout << "Delete element : " << st.Pop() << endl;
        st.Print();
    }
    cout << "Size = " << st.GetCount() << endl;
}
