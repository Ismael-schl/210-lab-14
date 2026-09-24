//Lab 14 | COMSC 210 | Ismael Hadi
#include <iostream>

using namespace std;

class Color {
    private:
    string name;
    int rvalue;
    int gvalue;
    int bvalue;
    public:
    void setname(string n) {
        name = n;
    }
    string getname(){
        return name;
    }
    void setrvalue(int r) {
        rvalue = r;
    }
    int getrvalue(){
        return rvalue;
    }
    void setgvalue(int g) {
        gvalue = g;
    }
    int getgvalue(){
        return gvalue;
    }
    void setbvalue(int b) {
        bvalue = b;
    }
    int getbvalue(){
        return bvalue;
    }
    void print(Color color) {
        cout << "Color name: " << name << endl;
        cout << "Red value: " << rvalue << endl;
        cout << "Green value: " << gvalue << endl;
        cout << "Blue value: " << bvalue << endl;
    }
};

int main() {
    Color teal;
    teal.setname("Teal");
    teal.setrvalue(157);
    teal.setgvalue(210);
    teal.setbvalue(500)
}
