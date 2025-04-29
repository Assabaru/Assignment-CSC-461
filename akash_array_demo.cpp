
#include <iostream>
#include <vector>
using namespace std;

class Akash {
public:
    void fixedDynamic() {
        int arr[3] = {11, 22, 33};
        cout << "Fixed Dynamic: ";
        for (int i = 0; i < 3; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void stackDynamic() {
        int arr[] = {1, 2, 3};
        cout << "Stack Dynamic: ";
        for (int i = 0; i < 3; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void fixedHeapDynamic() {
        int* arr = new int[4];
        arr[0] = 5;
        arr[1] = 10;
        arr[2] = 15;
        arr[3] = 20;
        cout << "Fixed Heap Dynamic: ";
        for (int i = 0; i < 4; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }

    void heapDynamic() {
        vector<int> arr;
        arr.push_back(100);
        arr.push_back(200);
        cout << "Heap Dynamic after push: ";
        for (int x : arr) {
            cout << x << " ";
        }
        cout << endl;
        arr.pop_back();
        cout << "Heap Dynamic after pop: ";
        for (int x : arr) {
            cout << x << " ";
        }
        cout << endl;
    }
};

int main() {
    Akash a;
    a.fixedDynamic();
    a.stackDynamic();
    a.fixedHeapDynamic();
    a.heapDynamic();
    return 0;
}
