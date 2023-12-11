#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter The L.H.S :- " << endl;
    string Left_Hand_Side;
    getline(cin, Left_Hand_Side);

    cout << endl;
    cout << "Solution With Truth Table : " << endl;
    cout << "_____________________________________________________\n";
    cout << "|     |     |         |         |                    |\n";
    cout << "|  p  |  q  | (p ^ q) | (p v q) | (p ^ q) -> (p v q) |\n";
    cout << "|_____|_____|_________|_________|____________________|\n";

    for (int p = 1; p >= 0; --p)
    {
        for (int q = 1; q >= 0; --q)
        {
            bool result_1 = (p & q);
            bool result_2 = (p || q);
            bool result = !(p & q) || (p || q);

            cout << "|  " << p << "  |  " << q << "  |    " << result_1 << "    |    " << result_2 << "    |         " << result << "          |"<< "\n";
            cout << "|_____|_____|_________|_________|____________________|\n";
        }
    }
    cout << endl;
    cout << "______________________________________________________________________" << endl;
    cout << endl
         << endl;
    cout << "Solution With The Rules : " << endl;
    cout << "____________________________" << endl;
    cout << endl;
    cout << "L.H.S = ~(p ^ q) v (p v q)     (Implicated Law)" << endl;
    cout << "      = (~p v ~q) v (p v q)    (Demorgan Law)" << endl;
    cout << "      = (~p v p) v (~q v q)    (Comuatative Law)" << endl;
    cout << "      = T v T                  (Negation Law)" << endl;
    cout << "      = T                              " << endl;

    return 0;
}
