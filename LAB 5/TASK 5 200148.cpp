#include<iostream>
#include<cmath>
using namespace std;

class Vector3D{

private:
        double i; 
        double j;
        double k;

public:
        Vector3D () : i(0), j(0), k(0)
        { }

        Vector3D (double icap, double jcap, double kcap) : i(icap), j(jcap), k(kcap)
        { }

        void getvalue(){
                cout << "Enter value of i : "; cin >> i;
                cout << "Enter value of j : "; cin >> j;
                cout << "Enter value of k : "; cin >> k;
        }
        Vector3D operator + (Vector3D);
        Vector3D operator - (Vector3D);
        double operator * (Vector3D);
        Vector3D operator / (Vector3D);
        Vector3D operator += (Vector3D);
        Vector3D operator -= (Vector3D);
        Vector3D operator /= (Vector3D);

        void print(){cout <<"(" <<i<< "," <<j<< "," <<k<<")\n";       }

        double length(){
                return (sqrt ((i*i)+(j*j)+(k*k)));
        }
};

Vector3D Vector3D :: operator + (Vector3D v2){
        Vector3D v3;
        v3.i = i + v2.i;
        v3.j = j + v2.j;
        v3.k = k + v2.k;
        return v3;
}

Vector3D Vector3D :: operator - (Vector3D v2){
        Vector3D v3;
        v3.i = i - v2.i;
        v3.j = j - v2.j;
        v3.k = k - v2.k;
        return v3;
}

double Vector3D :: operator * (Vector3D v2){  //dot product
        return (i*v2.i +j*v2.j + k*v2.k );
}

Vector3D Vector3D :: operator / (Vector3D v2){  //cross product
        Vector3D v3;
        v3.i = (j * v2.k) - (k * v2.j);
        v3.j = (k * v2.i) - (i * v2.k);
        v3.k = (i * v2.j) - (j * v2.i);
        return v3;
}

Vector3D Vector3D :: operator += (Vector3D v2){
        
        i += v2.i;
        j += v2.j;
        k += v2.k;
        return Vector3D(i,j,k);
}

Vector3D Vector3D :: operator -= (Vector3D v2){
        
        i -= v2.i;
        j -= v2.j;
        k -= v2.k;
        return Vector3D(i,j,k);
}

Vector3D Vector3D :: operator /= (Vector3D v2){
        Vector3D v3;

        v3.i = j * v2.k - k * v2.j;
        v3.j = k * v2.i - i * v2.k;
        v3.k = i * v2.j - j * v2.i;

        i = v3.i;
        j = v3.j;
        k = v3.k;

        return v3;
}

int main()
{
        Vector3D v1, v2, v3;
        cout << "Enter Values of 1st Vecctor: "<< endl;
        v1.getvalue();

        cout << "Enter Values of 2nd Vecctor: "<< endl;
        v2.getvalue();

        cout << "\n1st vector is "; v1.print();
        cout << "2nd vector is "; v2.print();

        cout << "\nFor 1st vector, Length= " << v1.length() <<endl;
        cout << "For 2nd vector, Length= " << v2.length() <<endl;

        v3= v1 +v2;
        cout << "\nAnswer  of Addition is = "; v3.print();

        v3= v1 -v2;
        cout << "\nAnswer  of substraction is = "; v3.print();

        cout << "\nDot product is = " << v1*v2 <<endl;

        v3= v1 / v2;
        cout << "\nCross product is = "; v3.print();

        return 0;
}
