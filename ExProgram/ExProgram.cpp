#include<stdio.h>
#include<vector>
#include<list>

//함수 이름 : standardWeight
//맴버 변수 : float height
//리턴 값 : float
//공식 : (height - 100) * 0.9

float standardWeight(float height)
{
   return (height - 100) * 0.9;
}
//함수 이름 : GetBMI
//맴버 변수 : float weight, float standardWeight
//리턴 값 : float
//공식 : (weight - standardWeight)  * 100 / standardWeight
float GetBMI(float weight, float standardWeight)
{
   return (weight - standardWeight) * 100 / standardWeight;
}

int main()
{
    bool bRun = true;
while (bRun)
    {
    int aaa = 0;
    printf("주민번호를입력하시겠습니까? 0) No  1)Yes\n");
    scanf_s("%d", &aaa);
    
    switch (aaa)
    {
    case 0:
        bRun = 0;
        break;
    case 1:

        int num3 = 0;
        printf("주민번호 앞에 자리를 입력해주세요");
        scanf_s("%d", &num3);
        int ab, bc, cd, de, ef, fg;
        ab = num3 / 100000;
        bc = num3 % 100000 / 10000;
        cd = num3 % 10000 / 1000;
        de = num3 % 1000 / 100;
        ef = num3 % 100 / 10;
        fg = num3 % 10 / 1;
        printf("%d %d %d %d %d %d\n", ab, bc,cd,de,ef,fg);
        
        int bbb=0, ccc=0;
        bbb = (cd*10) + de; //월
        ccc = (ef*10) +fg ;     //일
        printf("%d월 %d일 \n", bbb,ccc);

        if (bbb > 13)
        {
            printf("잘못입력됐습니다.\n");
        }
        else if (bbb == 02)
        {
            if (ccc > 28)
            {
                printf("잘못입력됐습니다.\n");

            }
        }
      
    }

    break;
   }



    //=============================================================================
  /*  int num1=0;
    printf("숫자 하나를 입력해주세요\n");
    scanf_s("%d", &num1);

    int num2 = 0;
    printf("숫자 하나를 더 입력해주세요\n");
    scanf_s("%d", &num2);
    int R = 0;
    for (int i =num1 ; i<= num2; ++i)
    {
              R += i;
     }
    R -= num1 + num2;
    printf("첫번째 숫자와 두번째 숫자 사이를 모두 더한 값은 %d 입니다.\n", R);
   
 */
    //=========================================
   /* while (bRun)
    {
     int aa=0;
        printf("소득세를 계산하시겠습니까? 0) No  1)Yes\n");
        scanf_s("%d", &aa);
        switch (aa)
        {
        case 0:
            bRun = 0;
            break;
        case 1:
        int per = 0;   
         int value = 0;
        printf("연간 총 소득을 입력하세요.(만단위)");
        scanf_s("%d", &value);
            if (value > 100000)
            {
                per = 45;
            }    
            else if(50000< value && value<= 100000)
            {
                
                
                    per = 42;
                
            }
            else if (30000<value && value <= 50000)
            {
              
                    per = 40;
                
            }
            else if (15000<value && value <= 30000)
            {
               
                    per = 38;
                
            }
            else if (8800<value&& value <= 15000)
            {
              
                    per = 35;
                  

                
            }
            else if (4600<value && value <= 8800)
            {
              
                    per = 24;
                    

                
            }
            else if (1200<value && value <= 4600)
            {
              
                    per = 15;

            }
            else if (value <= 1200)
            {
               
                    per = 6;
                 
            }
        printf("당신의 소득세는 %d 입니다.", per);
       }
     
        
    }*/
               

                









// 개속 반복, 0 입력시 종료
  /*  BMI를 계산하시겠습니까 ? 0)No 1)Yes
    몸무게를 입력해주세요 : weight에 값 입력
        키를 입력해주세요 : height에 값 입력
        bmi에 따른 등급 판정
        등급        비만도 수치
        10이하        정상
        10초과 20이하    과체중
        20 초과        비만*/



    //while (bRun)
    //{

    //    int aa = 0;
    //    printf("BMI 를 계산하시겠습니까? 0) No  1)Yes\n");
    //    scanf_s("%d", &aa);
    //    switch (aa)
    //    {
    //    case 0:
    //        bRun = 0;
    //        break;
    //    case 1:
    //       float bmi, cc;
    //       float weight, height;
    //        printf("몸무게를 입력해주세요 :\n");
    //        scanf_s("%f", &weight);
    //        printf("키를 입력해주세요 :\n");
    //        scanf_s("%f", &height);
    //        cc = standardWeight(height);
    //        bmi = GetBMI(weight, cc);
    //        if (bmi < 10)
    //        {
    //            printf("정상\n");
    //        }
    //        else if (10 < bmi && bmi <= 20)
    //        {
    //            printf("과체중\n");

    //        }
    //        else if (bmi >20)
    //        {
    //            printf("비만\n");


    //        }
    //        break;
    //       
    //    }
    //}

}