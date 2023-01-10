#include <iostream>
#include <string>
#include <cmath>
#include <C:\Users\kolobok\Desktop\programming\Laborat_5.1\Laborat_5.1\Matrix5.2.h>
using namespace std;
//double* create(double* matr, int n, int iskI, int iskJ) {
//    double* matrix = new double[n * (n - 2) + 1];
//    int k, l = 0;
//    for (int i = 0; i < n; i++) {
//        k = 0;
//        if (i != iskI) {
//            for (int j = 0; j < n; j++) {
//                if (j != iskJ) {
//                    elem(matrix, l, k, n - 1) = elem(matr, i, j, n);
//                    k++;
//                }
//            }
//            l++;
//        }
//    }
//    return matrix;
//}
//
//double det_Minors(double *matr, int n)
//{
//    if (n == 1) return matr[0];
//    double S = 0;
//    double el = 1.0;
//    double* minor;
//    for (int j = 0; j < n; j++) {
//        if (elem(matr, 0, j, n) != 0) {
//            minor = create(matr, n, 0, j);
//            S += el * elem(matr, 0, j, n) * det_Minors(minor, n - 1);
//            delete [] minor;
//        }
//        el = -el;
//    }
//    return S;
//}

matrix::matrix()                                  //constructor for matrix
    {
        int col, row;
        cout << "vvedite col and row \n";
        cin >> col >> row;
        this->col = col;
        this->row = row;

       
        size = (this->col * this->row);

        mas = new double[size];
    }

matrix::matrix(int valueROW, int valueCOL)       //constructor for matrix 2
{
    col = valueROW;
    row = valueCOL;

    size = (valueROW * valueCOL);

    mas = new double[size] {};
}

matrix::matrix(int valueROW, int valueCOL, const double* arr)              //constructor for matrix 3
{
    col = valueROW;
    row = valueCOL;
    size = (valueROW * valueCOL);
    mas = new double[size];

    for (int i = 0; i < size; i++)
    {
        this->mas[i] = arr[i];
    }
}

void matrix::fini()                                     //function for int matrix
{
   
        for (int i = 0; i < this->size; i++)
        {
            int d;
            cout << "int element " << i + 1 << " of matrix" << " \n";               cin >> d;
            this->mas[i] = d;
        }
}
  

  void matrix::fini(int valueROW, int valueCOL)                                     //function for int matrix  '2'
  {
      if ((valueROW * valueCOL) == this->size)
      {
          for (int i = 0; i < (valueROW * valueCOL); i++)
          {
              int d;
              cout << "int element " << i + 1 << " of matrix" << " \n";               cin >> d;
              this->mas[i] = d;
          }
      }
      else
      {
          cout << "size of matrix andsize of arr nor equal\n\n";
      }
  }

  void matrix::fini(int valueROW, int valueCOL, double* arr)                        //function for int matrix  '3'
  {
      if ((valueROW * valueCOL) == this->size)
      {
          for (int i = 0; i < (valueROW * valueCOL); i++)
          {
              this->mas[i] = arr[i];
          }
      }
      else
      {
          cout << "size of matrix andsize of arr nor equal\n\n";
      }
  }

  void matrix::fouti()                                            //function for cout matrix
  {


      /*                                                            //liney variant
          for (int i = 0; i < this->size; i++)
          {
              cout << this->mas[i] << "\t";
          }
          cout << endl;

      cout << endl;
      cout << endl;*/

     
      int k = 0;
      for (int i = 0; i < this->size; i++)
      {
          if (k == col)
          {
              cout << endl;
              k = 0;
          }
          cout << this->mas[i]<<"\t";
          k++;
      }
      cout << "\n\n";
     
  }

  void matrix::funch()                                          //function for umnozhenie matrix on number
  {
      cout << "int number for umnozhenie" << endl;
      int d;                                                 cin >> d;
      for (int i = 0; i < size; i++)
      {
          this->mas[i] = (mas[i] * d);
      }

  }

  
      void matrix::func_sum_mat(matrix& f)                                                        //function for sum matrix on matrix
  {
      for (int i = 0; i < size; i++)
      {
          this->mas[i] += f.mas[i];
      }
  }

  
      void matrix::func_sum_mat(const double* arr)
  {
      for (int i = 0; i < this->size; i++)
      {
          this->mas[i] += arr[i];
      }
  }

  void matrix::func_sum_mat(const double* arr, int size)
  {
      if (this->size == size)
      {
          for (int i = 0; i < this->size; i++)
          {
              this->mas[i] += arr[i];
          }
      }
      else
      {
          cout << "size of matrix andsize of arr nor equal\n\n";
      }
  }

  void matrix::func_umn_mat(matrix& q)                                       //umnoxhenie two matrix                   
  {
      for (int i = 0; i < size; i++)
      {
          this->mas[i] *= q.mas[i];
      }
  }

 
      void matrix::func_umn_mat(const double* arr, int size)
  {
      if (this->size == size)
      {
          for (int i = 0; i < size; i++)
          {
              this->mas[i] *= arr[i];
          }
      }
      else
      {
          cout << "size of matrix andsize of arr nor equal\n\n";
      }
  }

  double matrix::func_sled_mat(const matrix& d)                                              //sled matrix of formula: ((i*k)+k)+((i*k)-k); i=rows or column 
  {
      if (row == col)
      {
          int k = 0;   int i = 0;   double sum = 0;
          while (i < size - 1)
          {
              i = (row * k) + k;
              sum += d.mas[i];
              k++;
          }
          /* k = 1;   i = 0;
           while (i < size - row)
           {
               i = (row * k) - k;
               sum += d.mas[i];
               k++;
           }*/
          return sum;
      }
      else
      {
          cout << "ne kvadr\n";
      }
      return 0;
  }

  
      int matrix::func_get_elem(int j, int i)
  {
      int ind = (j * i) - 1;
      cout << "N[i,j]=" << this->mas[ind] << "\n\n";
      return 0;
  }

  
      int matrix::func_get_col()
  {
      cout << "columns= " << this->col << "\n\n";
      return 0;
  }

  
      int matrix::func_get_row()
  {
      cout << "rows= " << this->row << "\n\n";
      return 0;
  }

  
      double matrix::func_det_matrix()     // opredelitel
  {
      double resultat = 0;
      if (this->col == 3 && this->row == 3)
      {
          int k = 0;   int i = 0;   double sum = 1;
          while (i < size - 1)
          {
              i = (row * k) + k;
              sum *= this->mas[i];
              k++;
          }

          while (i < size - 1)
          {
              i = (row * k) + k;
              sum *= this->mas[i];
              k++;
          }

          sum += (this->mas[2] * this->mas[3] * this->mas[7]) + (this->mas[1] * this->mas[5] * this->mas[6]);
          resultat = sum;
          k = 1;   i = 0; sum = 1;
          while (i < size - row)
          {
              i = (row * k) - k;
              sum *= this->mas[i];
              k++;
          }

          while (i < size - row)
          {
              i = (row * k) - k;
              sum *= this->mas[i];
              k++;
          }

          sum += (this->mas[0] * this->mas[5] * this->mas[7]) + (this->mas[8] * this->mas[1] * this->mas[3]);
          return resultat - sum;
      }
      else
      {
          cout << "net";
          cout << "matrix not 3x3";
          return 0;
      }

  }