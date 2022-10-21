#include<iostream>
using namespace std;


int func (int a)
{
    if (a==0)return 0; if (a==1) return 1;
    return a*func(a-1);
}
int fonc (int b, int c)
{   if (b==c) return 1;
    if (c==(b-1)) return b;
    int d;
    d=func(b)/(func(c)*func(b-c));
    return d;
}


int main ()
{
    int c,f,g;
    cout<<"viberite deystvie:\n 1-chislovoy treugolnik\n 2-binomialniy koefficient\n 3-srednee arifmeticheskoe\n 4-EXIT"<<endl;

    cin>>c;
    switch (c)
    {case 1:
    cout<<"vvedite chislo"<<endl;
    int n;
    cin>>n;
    cout<<"----------------"<<endl;
     for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=i; j++)
        {

           cout<<j;
        }
     cout<<endl;

    }
        break;

    case 2:
      cout<<"vvedite znachenie N"<<endl;
      cin>>f;
      cout<<"vvedite znachenie K"<<endl;
      cin>>g;
      cout<<"BIN koeff= "<<fonc(f,g)<<endl;
        break;

    case 3:
     cout<<"vvedite chislo"<<endl;
     int a, r, t;  a=1;  r=0;  t=0;
      
           while (a!=0) 
         {
            cin >> a;
              r+=a;
                t++;
         }
         t--;
                   
        cout<<(double)r/t<<endl;

        break;

    case 4:

      return 0;

        break;
    }
}
