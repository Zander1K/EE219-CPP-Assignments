// QUESTION 1


#include <iostream>
#include <string>


using namespace std;


void printNumberedChars(string str, int i=0){
   int LineNumber = i+1;
   if(str[i] == 0)
   {
       return;
   }else{
       cout << LineNumber <<"."<< str[i] << endl;
       printNumberedChars(str,i+1);
   }
}


int main()
{
   printNumberedChars("Hello");
   return 0;
}




// QUESTION 2


#include <iostream>
#include <string>


using namespace std;


int sumArray(const int* arr, unsigned int size){
    if(size <= 0){
        return 0;
    }else{
        return (sumArray(arr, size - 1) + arr[size - 1]);
    }
}


int main()
{
    int arr[] = {5,5,5,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "The Sum is: " << sumArray(arr,size) << endl;
}


// QUESTION 3 AND QUESTION 4


#include <iostream>
#include <string>


using namespace std;


long lowestPrimeFactor(long N, long i=2){
    // If the number is less than 1, it will return 1
    if(N<=2){
return 1;

        // If the Number is divides by 2 and there is a remainder
    }else if(N%i != 0){
        lowestPrimeFactor(N,i+1); //repeat the function with a divisor incremented by 1
}else{
    return i; // The divisor value that divides and has a remainder of zero, will be returned.
    //The returned value may rise up to the value of N that was given originally, if the value N is prime
}
}


void printPrimeFactors(long N){
    long a[20];                 // creating an array
    a[0] = lowestPrimeFactor(N);    // first number in the array will be the lowestPrimeFactor
    int i = 0;
    if (a[i] <= 2){
        return;
    }else{
        N = N/a[i]; // N is divided by the lowest prime factor
        a[i+1] = lowestPrimeFactor(N);
        i++;
        printPrimeFactors(N/a[i]);   // run the program with the value N divided by the prime number
    }
    for(int b=i;b>=0;b--){    // we want it go from highest to low so we go backwards
        cout << a[b] << " ";
    }




int main(){
   printPrimeFactors(1289531243);
}
