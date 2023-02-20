#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int id;
public:
    Student(string n, int i) : name(n), id(i) {}
    virtual void displayInfo() = 0;
};

class Law : public Student {
public:
    Law(string n, int i) : Student(n, i) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: Law" << endl;
    }
};


class Business : public Student {
public:
    Business(string n, int i) : Student(n, i) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: Business" << endl;
    }
};

class ICT : public Student {
public:
    ICT(string n, int i) : Student(n, i) {}
    virtual void displayInfo() = 0;
};


class ICTCertificate : public ICT {
public:
    ICTCertificate(string n, int i) : ICT(n, i) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: Certificate" << endl;
    }
};
class ICTDiploma :public ICT {
public:
    ICTDiploma(string n, int i) : ICT(n, i) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: Diploma" << endl;
    }
};

class BscIT : public ICT {
protected:
    int stage;
public:
    BscIT(string n, int i, int s) : ICT(n, i), stage(s) {}
    virtual void displayInfo() = 0;
};

class BscITStage1 : public BscIT {
public:
    BscITStage1(string n, int i) : BscIT(n, i, 1) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: BSC-IT\nStage: 1" << endl;
    }
};
class BscITStage2 : public BscIT {
public:
    BscITStage2(string n, int i) : BscIT(n, i, 2) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: BSC-IT\nStage: 2" << endl;
    }
};
class BscITStage3 : public BscIT {
public:
    BscITStage3(string n, int i) : BscIT(n, i, 3) {}
    void displayInfo() {
        cout << "Name: " << name << "\nReg: " << id << "\nCourse: ICT\nProgram: BSC-IT\nStage: 3" << endl;
    }
};



int main() {

    Law la("Russel", 00001);
    la.displayInfo();
    cout << endl;

    Business bs("Letina", 00002);
    bs.displayInfo();
    cout << endl;

    ICTCertificate itc("Chris", 00003);
    itc.displayInfo();
    cout << endl;

    ICTDiploma itd("Brian", 00004);
    itd.displayInfo();
    cout << endl;


    BscITStage1 s1("Don King", 00005);
    s1.displayInfo();
    cout << endl;

    BscITStage2 s2("Kipkirui", 00006);
    s2.displayInfo();
    cout << endl;

    BscITStage3 s3("Duncan", 00007);
    s3.displayInfo();
    cout << endl;

}
