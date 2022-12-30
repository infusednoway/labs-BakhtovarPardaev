#include <iostream>
#include <string>
#include <C:\Users\kolobok\Desktop\programming\laba_5.1\laba_5.1\Matrix.h>
using namespace std;

int main()
{
    cout << "vvedite col and rows for matrix" << endl;
    int c, v;
    cin >> c >> v;

        matrix a(c, v);
        a.fini();
        cout << "\n";
        a.fouti();
        cout << "\n";
        matrix b(c, v);
        b.fini();
        b.fouti();
        cout<<"\n";
        a.func_umn_mat(b);
        a.fouti();
        a.funch();
        a.fouti();
        a.func_sum_mat(b);
        a.fouti();
        a.func_umn_mat(b);                     
        a.fouti();                                      
        cout<<"sled="<<a.func_sled_mat(a);
        cout << endl;
        a.func_get_elem(2, 3);                
        cout << endl;
        a.func_get_col();                
        cout << endl;
        a.func_get_row();                   
        cout << endl;
        cout<<"opredel="<<a.func_det_matrix();
    





}