#define  _CRT_SECURE_NO_WARNINGS
/*************************************************
** ���� : ѧ���ɼ�����ϵͳ
** ���� : Yu Duan
** �汾 : v1.0
** ��Ȩ : GNU General Public License(GNU GPL)
/**************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"
/*----------------------------------*
		������
*-----------------------------------*/
int main()
{
	printf("******************************\n");
	printf("       student information management system        \n");
	printf("         Yu Duan          \n");
	printf("******************************\n\n");

	/*-1.������ʼ��-*/
	int N = 0;            //ѧ������
	SS* pstu = NULL;    //ѧ������-�ṹ������ָ��ʵ��

	//2.��ȡѧ����Ϣ
	pstu = readDataFromFile(&N);
	printf("please press Enter again");

	/*-3.����ѧ���ܳɼ����ܳɼ� = 0.2*ƽʱ�ɼ� + 0.8*��ĩ�ɼ�)--*/
	calcuScore(pstu, N);

	/*-4.����ѧ���ɼ�����-*/
	sortScore(pstu, N);

	/*-5.�����������ѧ����Ϣ-*/
	printOut(pstu, N);

	/*-6.�ͷŶ�̬�ڴ�ռ�-*/
	free(pstu);
	system("pause");
	return 0;
}