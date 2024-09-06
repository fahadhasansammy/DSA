#include <iostream>
using namespace std;

struct cricketer {
    int jersey_no;
    
    int jersey_nos(int a) {
        jersey_no=7;
        return jersey_no;
    }
    
    void display() {
        cout << jersey_nos;
    }
};

int main() {
    cricketer s1;
    s1.display();
    return 0;
}
