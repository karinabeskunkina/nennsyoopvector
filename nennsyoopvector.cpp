

#include <iostream>
using namespace std;

class Vector {
    int size;
public:
    int* arr;
    
    Vector(int size) {
        this->size = size;
        this->arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = rand() % 100 + 1;
        }
    }
    void Print(int size) {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void clearing() {
        delete []arr;
        Print(size);
    }
    void Back(int am) {
        this->size += 1;
        arr[size-1] = am;
        Print(size);
    }
    void Insert(int am, int i) {
        arr[i] = am;
        Print(size);
    }
    void Del(int i){
        for (int j = i; j < size - 1; ++j) {
            arr[i] = arr[i + 1];
        }
        size -= 1;
        Print(size);
    }

    ~Vector() {
        if (*arr != NULL) {
            delete[]arr;
        }
    }
};

int main()
{

    int size;
    cin >> size;
    Vector arr(size);
    arr.Print(size);
    arr.Del(2);
}


