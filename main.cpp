//Lab 14 | COMSC 210 | Ismael Hadi
#include <iostream>

using namespace std;

// This code block initiates a class Color with three values for rgb. It uses standard setters/getters and prints a formatted list of its values with member f-n print
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
    void print() {
        cout << "Color name: " << name << endl;
        cout << "Red value: " << rvalue << endl;
        cout << "Green value: " << gvalue << endl;
        cout << "Blue value: " << bvalue << endl << endl;
    }
};

//The main function creates various colors and populates their values. It also prints them in a formatted way via the use of the print() member function.
int main() {

    Color teal;
    teal.setname("Teal");
    teal.setrvalue(157);
    teal.setgvalue(210);
    teal.setbvalue(500);
    teal.print();

    Color cyan;
    cyan.setname("Cyan");
    cyan.setrvalue(123);
    cyan.setgvalue(216);
    cyan.setbvalue(513);
    cyan.print();

    Color crimson;
    crimson.setname("Crimson");
    crimson.setrvalue(700);
    crimson.setgvalue(59);
    crimson.setbvalue(176);
    crimson.print();

    Color burgundy;
    burgundy.setname("Burgundy");
    burgundy.setrvalue(400);
    burgundy.setgvalue(12);
    burgundy.setbvalue(130);
    burgundy.print();
    return 0;
}
