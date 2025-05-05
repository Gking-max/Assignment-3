#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct patient {
string name;
int priority;

bool operator<(const patient& other) const{
    return priority < other.priority;
    }
};

int main() {
    priority_queue<patient> treatmentQueue;
    cout << "Enter 5 patients with name and priority " << endl;
    for(int i = 0; i < 5; i++) {
        patient p;
        cout << "Patient " << i+1 << " name: " << endl;
        cin >> p.name;
        cout << "Patient " << i+1 << " Priority: " << endl;
        cin >> p.priority;
        treatmentQueue.push(p);
    }

    cout << "The order of the treatment is: " << endl; 
    while(! treatmentQueue.empty()) {
       patient next = treatmentQueue.top();
       cout << next.name << endl; 
       treatmentQueue.pop();  
    }
    return 0;
}
