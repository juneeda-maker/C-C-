#include <stdio.h>

//선언
void p(int num);
void function_without_return();

int main(void)
{
    /*
    //function
    // 계산기

    int num = 2;
    //printf("num은 %d 입니다 \n", num);
    p(num);

    // 2+3
    num = num + 3; // num += 3;
    //printf("num은 %d 입니다 \n"), num; //5
    p(num);

    // 5-1
    num -= 1; //num = num -1
    //printf("num은 %d 입니다\n", num);
    p(num);

    // 4 x 3은?
    num *= 3;
    //printf("num은 %d 입니다\n",num); //12
    p(num);


    // 12/6 은?
    num /= 6;
    //printf("num은 %d 입니다\n", num); //2
    p(num);
    */


   //함수 종류
   //반환값이 없는 함수
    function_without_return();


    return 0;
}

//정의
void p(int num)
{
    printf("num 은 %d 입니다\n", num);
}


//전달값 : 36
//함수: num + 4
//반환형:  int
//반환형 함수이름(전달값)

void function_without_return(){
    printf("반환값이 없는 함수입니다\n");
}