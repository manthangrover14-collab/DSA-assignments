#include <iostream>
using namespace std;

class Array {
    int arr[100], n;
public:
    Array() { n = 0; }
    void create() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter elements: ";
        for (int i = 0; i < n; i++) cin >> arr[i];
    }
    void display() {
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    void insert() {
        int pos, val;
        cout << "Enter position and value: ";
        cin >> pos >> val;
        for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
        arr[pos] = val;
        n++;
    }
    void del() {
        int pos;
        cout << "Enter position: ";
        cin >> pos;
        for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
        n--;
    }
    void linearSearch() {
        int val;
        cout << "Enter value to search: ";
        cin >> val;
        for (int i = 0; i < n; i++) {
            if (arr[i] == val) {
                cout << "Found at position " << i << endl;
                return;
            }
        }
        cout << "Not found" << endl;
    }
};

int main() {
    Array a;
    int ch;
    while (true) {
        cout << "1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\nEnter choice: ";
        cin >> ch;
        switch (ch) {
            case 1: a.create(); break;
            case 2: a.display(); break;
            case 3: a.insert(); break;
            case 4: a.del(); break;
            case 5: a.linearSearch(); break;
            case 6: return 0;
        }
    }
}