#include <iostream>
#include <stdlib.h>
#include <thread>
#include <chrono>
using namespace std;

void changeLight(int seconds, const string& color) {
    cout << color << endl;
    this_thread::sleep_for(chrono::seconds(seconds));
}

int main() {
    while (true) {
        changeLight(10, "RED!!!");
        changeLight(4, "YELLOW");
        changeLight(10, "GREEN");
        changeLight(4, "YELLOW");
        system("CLS");
    }

    return 0;
}
