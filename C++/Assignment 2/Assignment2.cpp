/// QUESTION ONE

#include <iostream>
#include <cstring>

using namespace std;


unsigned int myStrLen(const char *str) {
    int size = strlen(str);
    int i;
    int count = 0;
    for (i=0; i<size; i++){
        count++;
    }
    cout << count << endl;
}

int main() {
    myStrLen("Hello World");
    return 0;
}

/// QUESTION TWO

#include <iostream>

using namespace std;

double average(double data[], int size) {

    double wholeValue = 0.0;
    for (int i = 0; i < size; i++) {
        wholeValue = wholeValue + data[i];
    }
    double average = wholeValue/size;
    cout << "The average value is: "<< average << endl;
}

int main()
{
double data[] = {-4.3,7.0,10.4,3.9,1.2,9.8,11.3};
int size = sizeof(data) / sizeof(data[0]);
average(data, size);
return 0;
}

/// QUESTION THREE

#include <iostream>

using namespace std;

bool isPrime(unsigned int num) {
    bool isPrime = true;

   for(int i = 2; i<num/2; i++) {
      if (num % i == 0){
          isPrime = false;
      }
   }
   if(isPrime){
       cout << "True" << endl;
   }else{
       cout << "False" << endl;
   }

}

int main()
{
int num = 22;
isPrime(num);
return 0;
}

///QUESTION FOUR

#include <iostream>

using namespace std;

void twoDice() {

    double wholeValue = 0;

    for(int i = 1; i<=6; i++) {

        for(int j = 1; j<=6; j++){
            cout << "{ " << i << "," << j << " }" << endl;

            if(i+j >= 6) {
                wholeValue = wholeValue +1;
            }
        }
    }
    double probability = (wholeValue/36);
    cout << "Probability is: " << probability << endl;
}

int main() {
    twoDice();
    return 0;
}

/// QUESTION FIVE

#include <iostream>
#include <cstring>

using namespace std;

void simplifyFraction(int & n, int & d) {
    int gcd;

    for(int i = 1; i<=n; i++){
        if (n % i == 0 && d % i == 0){
          gcd = i;
      }
    }
    cout << gcd << endl;
    cout << "Simplest Fraction is " << n/gcd << "/" << d/gcd << endl;
}
int main() {
    int n = 15;
    int d = 15;
    simplifyFraction(n, d);
    return 0;
}

///QUESTION SIX

#include <iostream>
#include <cstring>

using namespace std;

    string toBinaryString(int a) {
    string binaryNumber;
    while(a < 0 || a > 0) {
        binaryNumber=(a%2==0 ?"0":"1") + binaryNumber;
        a/=2;

    }
    return binaryNumber;
}

int main() {
    cout << " 34 in binary is : " << toBinaryString(34) << endl;
    cout << "-10 in binary is : " << toBinaryString(-10) << endl;
    return 0;
}

// QUESTION SEVEN

#include <iostream>
using namespace std;

class Students {
    private:
         string FirstName;
         string LastName;
         int id;

    public:

        void emptyString(){
            FirstName = "";
            LastName = "";
            id = 0;
        }

        void getStudent(void){
            cout << "Enter First Name: " << endl;
            cin >> FirstName;
            cout << "Enter Last Name: " << endl;
            cin >> LastName;
            cout << "Enter ID: " << endl;
            cin >> id;
        }

        void printDetails(void){
            cout << FirstName << " | ";
            cout << LastName << " | ";
            cout << id;
        }


};



int main()
{

    Students studentsObject;
    studentsObject.emptyString();
    studentsObject.getStudent();
    studentsObject.printDetails();
    return 0;
}

// QUESTION EIGHT


// QUESTION NINE

#include <iostream>
using namespace std;

class Circle {
private:
    int x;
    int y;
    double area;
    double radius;

    public:

    void getArea(void){
        area = 3.14*radius*radius;
    }

    void Display(void){
        cout << "Center: " << x << "," << y << ")" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
    }


};
