#include <iostream>

using namespace std;

/*******************************/
/*****   HelloWorldClass   *****/
/*******************************/
class HelloWorld {
    public :

        HelloWorld();

        void GetValue( int value ) {
            helloValue = value;
        }

        int ReturnValue() {
            return helloValue;
        }

        void PlusValue( int i ) {
            helloValue += i;
        }

    private :
        int helloValue;
}

HelloWorld :: HelloWorld() {
    helloValue = 0;
}

/*********************************/
/*****    CalculationClass   *****/
/*********************************/
class Calculation {
    public :

        Calculation( int right, int left );
        Calculation( double right, double left );

        int Plus( int right, int left ) {
            return calRight + calLeft;
        }

        int Minus() {
            return calRight - calLeft;
        }

    private :
        int calRighti, calLefti;
        double calRightd, calLeftd;
}

Calculation :: Calculation( int right, int left ) {
    calRighti = right;
    calLefti = left;

    calRightd = 0;
    calLeftd = 0;
}

Calculation :: Calculation( doble right, double left ) {
    calRighti = 0;
    calLefti = 0;

    calRightd = right;
    calLeftd = left;
}

int main() {

    HelloWorld hello;

    hello.GetValue( 2 );

    cout << "HelloGif" << endl;

    cout << "HunkTry" << endl;

    cout << "HunkTry2" << endl;

    cout << hello.ReturnValue() << endl;

    return 0;
}