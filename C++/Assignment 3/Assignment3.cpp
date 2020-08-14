/// QUESTION 1

#include <iostream>
using namespace std;

string repeatString(const string & str, unsigned int n) {
    int i;
    for(i=1;i<=n;i++){
        cout << str;
    }
    return 0;
}



int main()
{

    cout << repeatString("echo! ",5) << endl;
    return 0;
}



/// QUESTION TWO

#include <iostream>
using namespace std;

void printBigX(int N) {
    int rows;
    int cols;

    for(rows=1;rows<=N;rows++) // asteriks on X-Axis
        for(cols=1;cols<=N;cols++){ // asteriks on Y-Axis
            if(rows==cols || cols == (N+1) - rows){ // specifying when asteriks are needed to be placed
                cout << "*";  // printing an asterik
            }else {
                cout << " ";  // printing open space if asterik not needed
            }
        }
        cout << endl;
    }
}

int main(void){
    printBigX(12);
    return 0;
}

/// QUESTION THREE

#include <iostream>
using namespace std;

class Book{
    public:
    Book(string x, string y, string z){
        setAuthor(x);
        setTitle(y);
        setYear(z);
    }

    void setAuthor(string a){  // set the Author
        Author = a;
    }
    void setTitle(string b){   // set the Title
        Title = b;
    }

    void setYear(string c){    // set the Year
        Year = c;
    }

    string getAuthor(){       // get the Author
        return Author;
    }


    string getTitle(){   // get the Title
        return Title;
    }


    string getYear(){   // get the Year
        return Year;
    }


    private:
    string Author;
    string Title;
    string Year;
};

int main(){
    Book bo("Miller D Taylor","Roll of Thunder Hear My Cry","1976");
    cout << bo.getAuthor() << "|";
    cout << bo.getTitle() << "|";
    cout << bo.getYear();
    return 0;
}

/// QUESTION FOUR

int countBooksByAuthor(Book bookList[], int size, string author){
    int count = 0;
    for(int i = 0; i < size; i++){ // if statement continues till the end of the string is reached
        if (bookList[i].getAuthor().find(author) != string ::npos){
            count++;
    }
    return count;
}

int main
{
    Book books[] = {
     Book("B. Stroustrup", "A Tour of C++", "2018"),
     Book("J. Bloch", "Effective Java", "2018"),
     Book("B. Stroustrup", "The C++ Programming Language(Fourth Edition)", "2013"),
     Book("B. McLaughlin, G. Pollice, D. West", "Head First Object Oriented Analysis and Design", "2006"),
     Book("B. McLaughlin", "Java and XML", "2006") };
string searchAuthor = "McLaughlin";
cout << "There are " << countBooksByAuthor(books, 5, searchAuthor) << " books by author " << searchAuthor << endl;
return 0;
/// QUESTION FIVE

#include <iostream>
#include <cmath>

using namespace std;

class Complex{
public:
    Complex(double x, double y){
        setReal(x);
        setImaginary(y);
    }

    void setReal(double a){
        Real = a;
    }
    void setImaginary(double b){
        Imaginary = b;
    }


    double getReal(){
        return Real;
    }


    double getImaginary(){
        return Imaginary;
    }

    void print(){
        char ch;
        if(getImaginary() >= 0){
            ch = '+';
        }else{
            ch = '-';
        }
        cout << noshowpos << getReal() << noshowpos << ch << abs(getImaginary()) << noshowpos;
        cout << "i";
    }



private:
    double Real;
    double Imaginary;
};

int main(){
    Complex c1(2.7,5.2);
    c1.print();
    return 0;
}

/// QUESTION SIX

#include <iostream>
#include <cmath>

using namespace std;


class Complex{
public:
    Complex(double x, double y){
        setReal(x);
        setImaginary(y);
    }

    void setReal(double a){
        Real = a;
    }
    void setImaginary(double b){
        Imaginary = b;
    }


    double getReal(){
        return Real;
    }


    double getImaginary(){
        return Imaginary;
    }

    void print(){
        char ch;
        if(getImaginary() >= 0){
            ch = '+';
        }else{
            ch = '-';
        }
        cout << noshowpos << getReal() << noshowpos << ch << abs(getImaginary()) << noshowpos;
        cout << "i" << endl;
    }

/// finding the complex conjugate
    Complex conj(){
        Complex a = Complex(Real, Imaginary);
        a.Imaginary = (Imaginary*-1);
        a.Real = Real;
        return a;
    }

/// multiply the complex number by the complex conjugate
    Complex multiplyBy(const Complex & z){
        Complex b = z;
        b.Real = (Real*b.Real) - (Imaginary*b.Imaginary);
        b.Imaginary = (z.Real*Imaginary) + (Real*z.Imaginary);
        return b;
    }



private:
    double Real;
    double Imaginary;
};

int main(){
    Complex c1(2.7,-5.2);
    c1.print();   // prints “2.7 – 5.2i”
    Complex c2 = c1.conj();
    c2.print();   // prints “2.7 + 5.2i”
    Complex c3 = c1.multiplyBy(c2);
    c3.print();   // prints “34.33 + 0i”
    return 0;
}

/// QUESTION SEVEN

#include <iostream>
#include <cmath>

using namespace std;


class Point{

public:

    Point(double a, double b){
        setx(a);
        sety(b);
        print();
    }

    void setx(double a){
        x = a;
    }

    void sety(double b){
        y = b;
    }

    double getx(){
        return x;
    }

    double gety(){
        return y;
    }

    void print(){
        cout << x << "," << y << endl;
    }

    /// Calculates Distance using Distance between Points Forumula
    double distanceTo(const Point & p){
        double distance = sqrt((x-p.x)*(x-p.x)) + ((y-p.y)*(y-p.y));
    }


private:
    double x;
    double y;
};

int main(){
    Point p1(1.0,1.0);
    Point p2(2.0,2.0);
    cout << "Distance between points is " << p1.distanceTo(p2) << endl;
    return 0;
}

/// QUESTION EIGHT

*Unsolved

/// QUESTION NINE

*Didn't Complete

#include <iostream>
#include <cmath>

using namespace std;


class CyclicString{
private:
    string text;

public:
    CyclicString(){
        text = "";
        print();
    }
 CyclicString(string a){
        setText(a);
    }

    void setText(string b){
        text = b;
    }

    string getText(){
        return text;
    }
void print() {
    cout << text;
}
};



int main(){
    CyclicString s("Repeat Me!");
    for (int i=0; i<50; i++) {
        cout << s.next();
    }
    return 0;
}
