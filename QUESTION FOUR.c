
 //QUESTION FOUR (a)

 void addarrays(int array1[], int array2[], int array3[], int SIZE)
 {
     for(int i = 0; i < SIZE; i++)
     {
         array3[i] = array1[i] + array2[i];
     }
 }



 //QUESTION FOUR (b)

 #include <stdio.h>

 int *addarrays(int array1[], int array2[], int SIZE);

 main ()
 {
     int array1[] = {2, 3, 4, 7, 9};

     int array2[] = {23, 34, 17, 12, 18};

     int *array3 = addarrays(array1, array2, 5);

     for(int i = 0; i < 5; i++)
     {
         printf("%d\n", array3[i]);
     }
 }
     int *addarrays(int array1[], int array2[], int length)

     {
         int *array3 = malloc(length * sizeof(int));

         for(int i = 0; i< length; i++)
         {

         array3[i] = array1[i] + array2[i];
         }


     return array3;
      }
