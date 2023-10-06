#include <stdio.h>
#include <iostream>

int cSum(int a, int b) {
    return a + b;
}

int cMinus(int a, int b) {
    return a - b;
}

int cMulti(int a, int b) {
    return a * b;
}

float cDivide(float a, float b) {
    return a / b;
}

enum InputType
{
    Quit = 0,
    Sum,
    Minus,
    Multi,
    Divide
};

void ScanfinputNum(int& a, int& b)
{
    printf("\n���� �ϳ��� �Է��ϼ���:");
    scanf_s("%d", &a);
    printf("\n���� �ϳ� �� �Է��ϼ���:");
    scanf_s("%d", &b);
}

int main()
{
    bool bRun = true;

    while (bRun)
    {
        InputType nInput = InputType::Quit;
        int a = 0, b = 0;
        printf("� ������ �Ͻðڽ��ϱ�? 0)���� 1)���ϱ� 2)���� 3)���ϱ� 4)������ : ");
        scanf_s("%d", &nInput);

        system("cls");

        switch (nInput)
        {
        case InputType::Quit:
            bRun = false;
            break;

        case InputType::Sum:
            ScanfinputNum(a, b);
            printf("\nSum ����� %d �Դϴ�.\n", cSum(a, b));
            break;

        case InputType::Minus:
            ScanfinputNum(a, b);
            printf("\nMinus ����� %d �Դϴ�.\n", cMinus(a, b));
            break;

        case InputType::Multi:
            ScanfinputNum(a, b);
            printf("\nMulti ����� %d �Դϴ�.\n", cMulti(a, b));
            break;

        case InputType::Divide:
            ScanfinputNum(a, b);
            printf("\nDivide ����� %f �Դϴ�.\n", cDivide(a, b));
            break;

        default:
            break;
        }
    }
}
