//array rotations- rotating the index of a given arrays.
#include<iostream>
using namespace std;

class array{
   public:

   int n;
   int a[5];
 
   void insertion(int a[],int n)
   {   
       int i;
       cout<<"enter the elemnets in the array:";
       for(i=0;i<n;i++)
            cin>>a[i];
   }

   void rotation(int a[], int n, int d )
   {
       // de be the number of rotation in array
       //for rotation from front we store the d elemnts in temp
       
       int temp[4];//best to make array of n-1 if static array
       int i;
       for(i=0;i<d;i++)
            temp[i]=a[i];
       //after storing we are shifting the main array
       for(i=0;i<5;i++)
             a[i]=a[i-2];
        //now storing the same values again
        a[3]=temp[0];
        a[4]=temp[1];

   }

   void show(int a[], int n)
   {
       int i;
       cout<<"the final array after rotation is\n";
       for(i=0;i<n;i++)
       cout<<a[i]<<"\n";
   }
};

int main()
   {   int aar[5],d;
       class array t;
       t.insertion(aar,5);
       cout<<"\nenter the value of d:";
       cin>>d;
       t.rotation(aar,5,d);
       t.show(aar,5);

       return 0;
   }
