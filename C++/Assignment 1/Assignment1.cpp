///QUESTION ONE

#include <iostream>
#include <cstring>

using namespace std;

void printSpacedString(char str[])
{
    int size = strlen(str);
    int i;
    for (i=0; i<size; i++){        // for the size of the string
    cout << str[i] << " ";         // insert a space
    }
    cout << size;                   // print the size of the string
}



int main(){
 printSpacedString("Hello World!"); //declaring the function and the parameter
 return 0;
}


///QUESTION 2

#include <iostream>

using namespace std;

int largest(int a, int b, int c, int d){

        if (a >= b && a >= c && a>= d)  //if a is greater than the rest, say this on the screen
        cout << a;

        if (b >= a && b >= c && b>= d)  //if b is greater than the rest, say this on the screen
        cout << b;

        if (c >= a && c >= b && c>= d)  //if c is greater than the rest, say this on the screen
        cout << c;

        if (d >= b && d >= c && d>= a)  //if d is greater than the rest, say this on the screen
        cout << d;
 return 0;

}
int main()
{
    largest(3, 5, 66, 38);  //declaring the function and the parameters
    return 0;
}
}

///QUESTION 3

#include <iostream>

using namespace std;

void minMax(const double arr[], const int size, double & minVal, double & maxVal) //FUNCTION
{
    maxVal = arr[0]; //maximum value for array
    minVal = arr[0]; //minimum value for array

    for(int i=0; i<size; i++) //repeat up until the size of the array
    {
        if(arr[i]>maxVal)     //if this value is greater than the current set max value which initially is zero make it the new max value
        {
            maxVal=arr[i];
        }

        if(arr[i]<minVal)     //if this value is less than the current set min value which initially is zero make it the new min value       {
            minVal=arr[i];
        }
    }
}

int main()
{
double arr[] = {-4.3,7.0,10.4,3.9,1.2,9.8,11.3}; //ARAY VALUES
double min, max;
minMax(arr, sizeof(arr)/sizeof(arr[0]), min, max);
cout << "Q3: array min is " << min << " and max is " << max << endl;
return 0;
}

///QUESTION 4

#include <iostream>

using namespace std;

void swap(int& a, int& b)
{

    int c;

    c = a;
    a = b;
    b = c;

    cout << "Before Swapping"<< endl;
    cout << "a = " << b << " ,and b = " << a;
}

int main()
{
int a = 10;
int b = 20;
swap(a,b); // calling your swap function
cout << "\nSwapped, now a = " << a << " and b = " << b << endl;
}


///QUESTION 5

#include <iostream>

using namespace std;

void swap(int *c, int *d)
{

    int a;

//pointers
    a = *c;
    *c = *d;
    *d = a;

    cout << "Before Swapping";
    cout << "\tc = " << *d << " ,and d = " << *c << "\n";
}

int main()
{
int c = 100;
    int d = 200;
    swap(&c,&d);
    cout << "Swapped, now c = " << c << " and d = " << d << endl;
}

///QUESTION 6

#include <iostream>

using namespace std;



double range(double data[], int size)
{
    double lowest = data[0];
    for (int i = 1; i<size; i++)
        lowest = min(lowest, data[i]);

        double highest = data[0];
    for (int i = 1; i<size; i++)
        highest = max(highest, data[i]);

    double range = highest - lowest;
    cout << "Range : " << range << endl;
    cout << "Size  : " << size << endl;
}


int main()
{
    double data[] = { 5, 10, 252 };
    int size = sizeof(data) / sizeof(data[0]);
    range(data, size);
    return 0;
}

///QUESTION 7

#include <iostream>

using namespace std;



unsigned char getLowerByte(int num)
{
    int lowest = num % 2;
    return lowest;
}

int main()
{
    cout << "Lower byte = " << (int)getLowerByte(5) << endl;
    return 0;
}

///QUESTION 8

#include <iostream>

using namespace std;

unsigned short significantBits(unsigned int num)
{
unsigned int count = 0;
   while (num)
   {
        count++;
        num >>= 1;
    }
    cout << count << endl;
}


int main()
{
    significantBits(1000);
    return 0;
}

///QUESTION 9

#include <iostream>
using namespace std;


bool isOrdered(int a[], int size)
{
    int i;
    for(i=1;i<size;i++)
{
  if (a[i]>a[i-1])
  {
    cout << "True";
  }
  else
  {
    cout << "False";
    break;
  }
}
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(a) / sizeof(a[0]);
    isOrdered(a, size);
    return 0;
    }
