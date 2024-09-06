#include<iostream>
#include<vector>
using namespace std;

class queue {
    int front;
    int back;
    vector<int> v;
public:
    queue() {
        this->front = -1;
        this->back = -1;
    }

    void enque(int data) {
        if (this->front == -1) {
            this->front = 0;
        }
        v.push_back(data);
        this->back++;
    }

    void deque() {
        if (this->front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        if (this->front == this->back) {
            this->front = -1;
            this->back = -1;
            this->v.clear();
        } else {
            this->front++;
        }
    }

    int getFront() {
        if (this->front == -1) return -1;
        return this->v[this->front];
    }

    bool isEmpty() {
        return this->front == -1;
    }
};

int main() {
    queue qu;
    qu.enque(10);
    qu.enque(20);
    qu.enque(30);
    qu.enque(40);
    qu.deque();

    while (!qu.isEmpty()) {
        cout << qu.getFront() << " ";
        qu.deque();
    }

    return 0;
}
