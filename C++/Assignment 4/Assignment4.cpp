//QUESTION 1

#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    double x, y;
public:
    Point(double _x, double _y) : x(_x), y(_y) {}
    double _x() { return x; }
    double _y() { return y; }
    double distanceTo(const Point & p) { return sqrt((x-p.x)*(x-p.x) + (y-p.y)*(y-p.y)); }
};


class Line{
private:
double slope;
double intercept;

public:
Line(double m, double c){
setSlope(m);
setIntercept(c);
}

Line(double x1, double y1, double x2, double y2){
    slope = ((y2 -y1)/(x2 - x1));
    intercept = (y1 - (slope*x1));
}



void setSlope(double m){
    slope = m;
}

double getSlope(){
    return slope;
}

void setIntercept(double c){
    intercept = c;
}

double getIntercept(){
    return intercept;
}

double distanceTo(Point p){
    double dist = abs(-slope*p._x()+p._y()-intercept)/sqrt(slope*slope+1);
    cout << "Distance is: " << dist << endl;

}

Point intersection(Line ln){
    double intX = ((-ln.intercept) - (-intercept))/((-slope) - (-ln.slope));
    double intY = ((-ln.slope*-intercept) - (-slope*-ln.intercept))/((-slope) - (-ln.slope));
    cout << "The intersection point is: " << intX << "," << intY << endl;
}

};



int main()
{
    Line l(1,1,5,5);
    Line ln(1,5,5,1);
    cout << "The Equation is: y = " << l.getSlope() << "x + " << l.getIntercept() << endl;
    cout << "The Equation is: y = " << ln.getSlope() << "x + " << ln.getIntercept() << endl;
    l.distanceTo(Point(27,7));
    ln.intersection(l);
    return 0;
}

//QUESTION TWO

#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    double x, y;
public:
    Point(double _x, double _y) : x(_x), y(_y) {}
    double _x() { return x; }
    double _y() { return y; }
    double distanceTo(const Point & p) { return sqrt((x-p.x)*(x-p.x) + (y-p.y)*(y-p.y)); }
};


class Line{
private:
double slope;
double intercept;

public:
Line(double m, double c){
setSlope(m);
setIntercept(c);
}

Line(double x1, double y1, double x2, double y2){
    slope = ((y2 -y1)/(x2 - x1));
    intercept = (y1 - (slope*x1));
}



void setSlope(double m){
    slope = m;
}

double getSlope(){
    return slope;
}

void setIntercept(double c){
    intercept = c;
}

double getIntercept(){
    return intercept;
}

double distanceTo(Point p){
    double dist = abs(-slope*p._x()+p._y()-intercept)/sqrt(slope*slope+1);
    cout << "Distance is: " << dist << endl;

}
///Intersection Method

Point intersection(Line ln){
    /// Intersection of Two Lines Formula
    double intX = ((-ln.intercept) - (-intercept))/((-slope) - (-ln.slope));
    double intY = ((-ln.slope*-intercept) - (-slope*-ln.intercept))/((-slope) - (-ln.slope));
    cout << "x = " << intX << ", y = " << intY << endl;
}

};

/// Solving The Simultaneous Equations
Point solve(double a1, double b1, double c1, double a2, double b2, double c2){
    ///Isolating X and Y Points and Using Interection Method
    Line a(-a1/b1, -c1/b1);
    Line b(-a2/b2, -c2/b2);
    cout << "Equation Solution is ";

    a.intersection(b);
    }


int main()
{
    Line l(1,1,5,5);
    Line ln(1,5,5,1);
    cout << "The Equation is: y = " << l.getSlope() << "x + " << l.getIntercept() << endl;
    cout << "The Equation is: y = " << ln.getSlope() << "x + " << ln.getIntercept() << endl;
    l.distanceTo(Point(27,7));
    cout << "Intersection is at ";
    ln.intersection(l);
    Point sol = solve(2.5, -2.0, 3.0, 1.5, -3.0, -4.1);
    return 0;
}

//QUESTION 3 - QUESTION 6

#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
    string FirstName;
    string LastName;
    int ID;

    public:
    Student(int id, string x, string y){
        this->ID = id;
        this->FirstName = x;
        this->LastName = y;
    }

    virtual string getType() = 0;
    virtual void printInfo(){
        cout << "Student ID: " << ID << endl;
        cout << "Student Name: " << FirstName << " " << LastName << endl;
    }
};

class ResearchStudent:public Student{
    private:
    string supervisorName;
    string thesisName;

    public:
    ResearchStudent(int id, string x, string y, string s, string t):Student(id,x,y){
        this->supervisorName=s;
        this->thesisName=t;
    }

    string getType(){
        return("Research Student");
    }

    void printInfo(){
        Student::printInfo();
        cout << "Supervisor Name: " << supervisorName << endl;
        cout << "Thesis Name: " << thesisName << endl;
        this->getType();
    }
};

class TaughtStudent:public Student{
    private:
    string moduleNames[10];
    int numRegisteredModules;

    public:
    TaughtStudent(int id, string x, string y):Student(id,x,y){
        numRegisteredModules = 0;
    }

    bool registerFor(const string & moduleName){
        if(numRegisteredModules<10){
            this->moduleNames[numRegisteredModules++] = moduleName;
            return true;
            }else{
                return false;
            }
        }

    void printInfo(){
        Student::printInfo();
        cout << "Registered Modules:" << endl;
        for(int i = 0; i<=10;i++){
            cout << moduleNames[i] << endl;
        }
    }

    string getType(){
        return("Taught Student");
    }
    };
#include <iostream>
#include <string>

using namespace std;


void studentTester()
{
    ResearchStudent Alexander(18457401,"Alexander","Dare","Mayowa","Cloud Solution");
    ResearchStudent Michael(18456565,"Michael","Oladimeji","Christian","Internet Of Things");
    TaughtStudent Matthew(18234567, "Matthew","Oladimeji");
    TaughtStudent Sean(18636333, "Sean","Akanbi");

    Matthew.registerFor("Mathematics");
    Matthew.registerFor("Java Programming");
    Matthew.registerFor("Boolean Algebra");

    Sean.registerFor("Cloud Computing");
    Sean.registerFor("Laplace Transforms");
    Sean.registerFor("Game Development");

    Student *studentA = &Alexander;
    Student *studentB = &Michael;
    Student *studentC = &Matthew;
    Student *studentD = &Sean;

    Student* student[4];
    student[0] = &Alexander;
    student[1] = &Michael;
    student[2] = &Matthew;
    student[3] = &Sean;

    SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout << "Student Info" << endl;
    for(int i = 0; i<=3; i++){
        string getType = student[i]->getType();
        cout << "Student Type: " << getType << endl;
        cout << "Student Details: " << endl;
        student[i]->printInfo();
        cout << endl;
    }
}

int main(){
    studentTester();
    return 0;
}

// QUESTION SEVEN

#include <iostream>
#include <string>

using namespace std;

class Employee{
private:
int num;
string Name;

public:
static int nextEmployeeNumber,totalNumberEmployees;


Employee(string x){
    totalNumberEmployees++;
    nextEmployeeNumber++;
    setName(x);
    print();
}

void setName(string x){
    Name =x;
}

string getName(){
return Name;
}

void print(){
    cout << "Employee Name: "<< Name << "| Employee Number: " << nextEmployeeNumber << endl;
}

static int numEmployees(){
return totalNumberEmployees;
}

virtual ~Employee(){
totalNumberEmployees--;
}

};

int Employee::nextEmployeeNumber = 1000;
int Employee::totalNumberEmployees = 0;

int main(){
    cout << "Number of employees " << Employee::numEmployees() << endl;
    {
        Employee* e1 = new Employee("John Smith");
        Employee* e2 = new Employee("Alexander Dare");
        Employee* e3 = new Employee("Matthew Oladimeji");
        Employee* e4 = new Employee("Jamal Akanbi");
        Employee* e5 = new Employee("Emmanuel Ejakita");
    }
    cout << "Number of employees " << Employee::numEmployees() << endl;
}
