#include<stdio.h>
#include<vector>
#include<list>

//�Լ� �̸� : standardWeight
//�ɹ� ���� : float height
//���� �� : float
//���� : (height - 100) * 0.9

float standardWeight(float height)
{
   return (height - 100) * 0.9;
}
//�Լ� �̸� : GetBMI
//�ɹ� ���� : float weight, float standardWeight
//���� �� : float
//���� : (weight - standardWeight)  * 100 / standardWeight
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
    printf("�ֹι�ȣ���Է��Ͻðڽ��ϱ�? 0) No  1)Yes\n");
    scanf_s("%d", &aaa);
    
    switch (aaa)
    {
    case 0:
        bRun = 0;
        break;
    case 1:

        int num3 = 0;
        printf("�ֹι�ȣ �տ� �ڸ��� �Է����ּ���");
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
        bbb = (cd*10) + de; //��
        ccc = (ef*10) +fg ;     //��
        printf("%d�� %d�� \n", bbb,ccc);

        if (bbb > 13)
        {
            printf("�߸��Էµƽ��ϴ�.\n");
        }
        else if (bbb == 02)
        {
            if (ccc > 28)
            {
                printf("�߸��Էµƽ��ϴ�.\n");

            }
        }
      
    }

    break;
   }



    //=============================================================================
  /*  int num1=0;
    printf("���� �ϳ��� �Է����ּ���\n");
    scanf_s("%d", &num1);

    int num2 = 0;
    printf("���� �ϳ��� �� �Է����ּ���\n");
    scanf_s("%d", &num2);
    int R = 0;
    for (int i =num1 ; i<= num2; ++i)
    {
              R += i;
     }
    R -= num1 + num2;
    printf("ù��° ���ڿ� �ι�° ���� ���̸� ��� ���� ���� %d �Դϴ�.\n", R);
   
 */
    //=========================================
   /* while (bRun)
    {
     int aa=0;
        printf("�ҵ漼�� ����Ͻðڽ��ϱ�? 0) No  1)Yes\n");
        scanf_s("%d", &aa);
        switch (aa)
        {
        case 0:
            bRun = 0;
            break;
        case 1:
        int per = 0;   
         int value = 0;
        printf("���� �� �ҵ��� �Է��ϼ���.(������)");
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
        printf("����� �ҵ漼�� %d �Դϴ�.", per);
       }
     
        
    }*/
               

                









// ���� �ݺ�, 0 �Է½� ����
  /*  BMI�� ����Ͻðڽ��ϱ� ? 0)No 1)Yes
    �����Ը� �Է����ּ��� : weight�� �� �Է�
        Ű�� �Է����ּ��� : height�� �� �Է�
        bmi�� ���� ��� ����
        ���        �񸸵� ��ġ
        10����        ����
        10�ʰ� 20����    ��ü��
        20 �ʰ�        ��*/



    //while (bRun)
    //{

    //    int aa = 0;
    //    printf("BMI �� ����Ͻðڽ��ϱ�? 0) No  1)Yes\n");
    //    scanf_s("%d", &aa);
    //    switch (aa)
    //    {
    //    case 0:
    //        bRun = 0;
    //        break;
    //    case 1:
    //       float bmi, cc;
    //       float weight, height;
    //        printf("�����Ը� �Է����ּ��� :\n");
    //        scanf_s("%f", &weight);
    //        printf("Ű�� �Է����ּ��� :\n");
    //        scanf_s("%f", &height);
    //        cc = standardWeight(height);
    //        bmi = GetBMI(weight, cc);
    //        if (bmi < 10)
    //        {
    //            printf("����\n");
    //        }
    //        else if (10 < bmi && bmi <= 20)
    //        {
    //            printf("��ü��\n");

    //        }
    //        else if (bmi >20)
    //        {
    //            printf("��\n");


    //        }
    //        break;
    //       
    //    }
    //}

}