#pragma once
using namespace std;
class matrix
{
public:

    double* mas;
    int col;
    int row;
    int size;



    

    matrix(int valueROW, int valueCOL);       //constructor for matrix

    void fini();                             //function for int matrix

    void fouti();                                         //function for cout matrix

    void funch();                                         //function for umnozhenie matrix on number

    void func_sum_mat(matrix& f);                                                       //function for sum matrix on matrix

    void func_umn_mat(matrix& q);                                                       //umnoxhenie two matrix

    double func_sled_mat(const matrix& d);                                             //sled matrix of formula: ((i*k)+k); i=rows or column 
    
    int func_get_elem(int j, int i);
       
    int func_get_col();
        
    int func_get_row();
    
    double func_det_matrix();        //for 3x3
 
    ~matrix()                                                                //destructor on matrix
    {
        delete[] mas;
    }
};

