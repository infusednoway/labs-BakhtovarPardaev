#include <iostream>
using namespace std;
void fini(int, int);      //vvod   
void finch(char, int);    //vvod   
void fouti(int, int);     //vivod  
void foutch(char, int);   //vivod
void fspu(int, int);      //sortirovka    puzirkom
void fspo(char, int);     //sortirovka    podschetom

void fini(int * mas, int size)
{
    for (int i=0; i<size; i++)
    {
      int f; 
      cout<<"vvedite "<<i+1<<"-y element massiva"<<endl;
      cin>>f; 
      mas[i]=f;
    }


}
void finch(char* mas, int size)
{
    for (int i=0; i<size; i++)
    {
      char f; 
      cout<<"vvedite "<<i+1<<"-y element massiva"<<endl;
      cin>>f; 
      mas[i]=f;
    }


}
void fouti(int * mas, int size)
{
  for (int i=0; i<size; i++)
{
  cout<<mas[i]<<"\t";
}

}
void foutch(char * mas, int size)
{
  for (int i=0; i<size; i++)
{
  cout<<mas[i]<<"\t";
}

}
void fspu(int * mas, int size)
{
   for (int j=0; j<size; j++)
   {
       for (int i=0; i<size-j; i++)
       {
          if (mas[i]>mas[i+1]) 
             { 
             int d; d=mas[i];
              mas[i]=mas[i+1];

              mas[i+1]=d;
             }
       }
   }

}
void fspo(char * mas, int size) 
{

	int j; int letter = 26;
	int count[26] = { 0 };
	for (int i = 0; i < size; i++) {
		j = int(mas[i] - 'a');
		count[j]++;
	}
	int i = 0;
	for (j = 0; j < letter;) {
		if (count[j] > 0) {
			mas[i] = char((int)('a') + j);
			i++;
			count[j]--;
		}
		else j++;
	}
	cout << endl;
	
}

int main()
{
  int c;
  cout<<"viberite metod sortirovki:\n 1-puzirkom dlya chisel.\n 2-podschetom dlya angliyskikh bukv.\n 3-sliyaniem dlya cifr\n";
  cin>>c;
   
  switch(c)
  {case 1: 
  {
     int size;

      cout<<"vvedite razmer massiva"<<endl;    cin>>size;

     int mas[size] {};

        fini(mas, size);

      cout<<"ne otsortirovaniy:"<<endl;        fouti(mas, size); 

        fspu(mas, size);

      cout<<endl<<"----------------------------------------------------------------"<<endl<<"otsortirovaniy:"<<"\n";

        fouti(mas, size);

      cout<<endl;

           break;
  }
   
   case 2:
  {   
    int size;

      cout<<"vvedite razmer massiva"<<endl;        cin>>size;
      
    char mas1[size]{};

        finch(mas1, size);

      cout<<"ne otsortirovaniy:"<<endl;  

        foutch(mas1, size);

        fspo(mas1, size);

      cout<<endl<<"----------------------------------------------------------------"<<endl<<"otsortirovaniy:"<<"\n";

        foutch(mas1, size);

      cout<<endl;

         break;
  }
   case 3:
  {
    return 0;   
         break;
  }

   defaul:
  {
    cout<<"neeverniy vibor. Na eshafot!"<<endl;
  }

         break;
    
  }
  
  
  
}
