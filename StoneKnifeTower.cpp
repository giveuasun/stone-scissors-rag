#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()

{
	char gamer; // ��ҳ�ȭ
	int computer; //���Գ�ȭ
	int result; //�������
	bool isplay = true;

	/*Ϊ�˱�����һ����Ϸ���˳����򣬿��Խ��������ѭ����*/
	while (isplay)
	{
		printf("����һ����ȭ��С��Ϸ����������Ҫ����ȭͷ��\n");
		printf("A:����\nB:ʯͷ\nC:��\nD:������\n");
		//scanf("%c%*c", &gamer);
		cin >> gamer;
		switch (gamer)
		{
		case 65: //A
		case 97: //a
			gamer = 4;
			break;
		case 66: //B
		case 98: //b
			gamer = 7;
			break;
		case 67: //C
		case 99: //c
			gamer = 10;
			break;
		case 68: //D
		case 100: //d
			return 0;//ָʾ�˳�
		default:
			printf("���ѡ��Ϊ %c ѡ�����,�˳�...\n", gamer);
			//getchar();
			//system("cls"); // ����
			return 0;
			break;
		}
		/*���������*/
		srand((unsigned)time(NULL));
		/*�����������ȡ�࣬�õ����Գ�ȭ*/
		computer = rand() % 3;
		/*gamerΪchar���ͣ���ѧ����ʱҪǿ��ת������*/
		result = (int)gamer + computer;
		printf("���Գ�ȭ");
		switch (computer)
		{
		case 0:printf("����\n"); break; //4 1
		case 1:printf("ʯͷ\n"); break; //7 2
		case 2:printf("��\n"); break; //10 3
		}
		printf("�����");
		switch (gamer)
		{
		case 4:printf("����\n"); break;
		case 7:printf("ʯͷ\n"); break;
		case 10:printf("��\n"); break;
		}
		if (result == 6 || result == 7 || result == 11)
		{
			printf("��Ӯ��!");
		}
		else if (result == 5 || result == 9 || result == 10)

		{
			printf("����Ӯ��!");
		}
		else
		{
			printf("ƽ��");
		}
		/*��ͣ������*/
		system("pause>nul&&cls");
	}
	return 0;
}