#include"MyClass.h"
#include<stdio.h>

CMyClass2::CMyClass2(int valueA) : a(valueA), m_b(0), c(0)
{
	printf("생성자 A 호출됨 \n");
}

CMyClass2::CMyClass2(int valueA, int valueB) : a(valueA), m_b(valueB), c(0)
{
	printf("생성자 B 호출됨 \n");

}
CMyClass2::~CMyClass2()
{
	printf("파괴자 호출됨 \n ");
}
void CMyClass2:: PrintB2()
{
	printf("B=%d", m_b);
}
void CMyClass2::SecC2(int num)
{
	c = num;
}