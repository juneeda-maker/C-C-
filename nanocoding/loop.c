#include <stdio.h>

int main(void) {

    /*printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");
    printf("Hello World\n");*/

    //++ 뿔뿔
    /*int a = 10;
    printf("a는 %d\n", a);
    a++;
    printf("a는 %d\n", a); */

   /* int b = 20;
    //b = b + 1;
    printf("b는 %d\n", ++b); //++ 먼저 수행 그 결과 b = 21
    printf("b는 %d\n", b++); // b = 21이니 출력하고 실행 끝난뒤에 ++ 실행 b = 22
    printf("b는 %d\n", b); //22출력
    */

  // int i = 1;
  // printf("Hello World %d\n", i++); //1
  // printf("Hello World %d\n", i++);
  // printf("Hello World %d\n", i++);
  // printf("Hello World %d\n", i++);
  // printf("Hello World %d\n", i++);
  // printf("Hello World %d\n", i++);
  // printf("Hello World %d\n", i++);
  // printf("Hello World %d\n", i++);
  // printf("Hello World %d\n", i++);
  // printf("Hello World %d\n", i++);

    //반복문
    //for, while, do while

    //for(선언; 조건; 증감) { }
   // for(int i = 1; i <= 10; i++){
   //     printf("Hello World %d\n", i);
   // }
   
   //while (조건) { }
  // int i = 1;
   // while(i <= 10) 
   // {
    //    printf("Hello World %d\n", i++);
        //i++;
    //}


    //do { } while(조건);
    //int i = 1;
    //do{
    //    printf("Hello World %d\n", i++);
    //}while (i <= 10);


    //2중 반복문
    /*for(int i =1; i <= 3; i++)
    {
        printf("첫 번째 반복문 : %d\n", i);

        for(int j = 1; j <= 5; j++){
            printf("   두 번째 반복문 : %d\n", j);
        }
    }*/

    //구구단
    //2 x 1 = 2
    //2 x 2 = 4
    //2 x 3 = 6
    //
    //9 x 9 = 81
    //for(int i = 2; i <= 9; i++)
    //{
    //    printf("%d단 계산\n", i);
    //    for(int j = 1; j <= 9; j++)
    //    {
    //        printf("  %d x %d = %d\n", i, j, i * j);
    //    }
    //}

    /* 
    *
    **
    ***
    ****
    *****
    */

    
    /*for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    //이중 반복문 (거꾸로 별)
    /* 
         *
       * * 
     * * *   
   * * * *
 * * * * *
    */


   /*
    SSSS*
    SSS**
    SS***
    S****
    *****
   */

    for(int i = 0; i < 5; i++)
    {   
       
        for (int j = i; j < 5; j++)
        {
            printf(" ");
        }
        for(int k = 0; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}