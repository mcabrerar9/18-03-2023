
#include <iostream>
using namespace std;
/*
int main()

{
    int n,i;
    long double factorial;

    cout << "Introduce un numero: ";
    cin >> n;
    factorial=1;
    for(i=1;i<=n;i++)
        factorial = factorial * i;
    cout << endl << "Factorial de " << n << " es:" << factorial << endl;
    system("pause");
}*/



/*
int main() {
    int n1=0,n2=1,n3,i,number;
    cout<<"INGRESE EL NUMERO 46: ";
    cin>>number;
    cout<<n1<<" "<<n2<<" ";
    for(i=2;i<number;++i)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;
}*/


/*
int main()
{

    int n, i;


    cout << "\Por favor introduce un numero: ";
    cin >> n;

    if(n==1)
    {
        cout << "\nNo es primo" << endl;
    }
    else
    {
        i=2;
        while(n%i!=0)
        {
            i++;

        }


        if(i==n)
            cout << "\nPrimo" << endl;
        else
            cout << "\nNo es primo" << endl;
    }
    system("pause");
}*/


/*
int n ;


int main(){

    cout << "\Por favor introduce un numero: ";
    cin >> n;

    div_t resultado;

    resultado=div(n,2);

    if (resultado.rem>0)

    {

        cout << n << " es impar" << endl;

    }

    else {

        cout << n << " es par" << endl;

    }



    cin.get();

    return 0;

}*/

/*
int main()
{
    int numero;
    cout << "Ingresa el numero de la tabla de multiplicar :" << endl;
    cin >> numero;

    for (int i = 1; i <= 10; i++)
    {
        int multiplicacion = i * numero;
        cout << numero << " x " << i << "=" << multiplicacion << endl;
    }

    system("PAUSE");
    return 0;
}
*/


