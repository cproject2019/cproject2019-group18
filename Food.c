#include <stdio.h>


void main_munu() {

	char a[6][20] = { "�˵�","����","�����","��ʳ","�������","����" };
	int i;
	printf("%s\n", a[0]);
	for (i = 1; i<6; i++)
	{
		printf("\t%d.%s\n", i, a[i]);
	}
	printf("\t0.ѡ�����\n");
}

void menu_liangcai() {

	char a[3][20] = { "�峴ľ��","±Ƥ��","��˿���" };
	printf("�����ѡ���Ʒ��\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.�����ϲ�˵�\n");
}

void menu_jingdian() {

	char a[3][20] = { "�����Ź�","���Ŷ���","С��Ϻ����" };
	printf("�����ѡ���Ʒ��\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.�����ϲ�˵�\n");
}

void menu_zhushi() {

	char a[3][20] = { "�㳦�˷�","���ʳ���","������ͷ" };
	printf("�����ѡ���Ʒ��\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.�����ϲ�˵�\n");
}

void menu_tiandian() {
	char a[3][20] = { "��ݮ�����","����","��ζ����" };
	printf("�����ѡ���Ʒ��\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.�����ϲ�˵�\n");
}

void menu_yinliao() {
	
	char a[3][20] = { "��֭","���ǿɿڿ���","���ϼ�����" };
	printf("�����ѡ���Ʒ��\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.�����ϲ�˵�\n");
}

int main(int argc, const char * argv[]) {
	printf("***** ��֬���׿�͵�ѡϵͳ *****\n");
	printf(" ***********  ��ӭ�� ************\n");
	int M;
	int n;
	int x[5][3] = { 0 };
	int calorie1[5][3] = { 0 };
	int calorie[5][3] = { { 53,148,65 },{ 234,137,112 },{ 186,104,261 },{ 251,138,73 },{ 45,0,15 } };//����ÿ����Ʒ����
	int total = 0;
	char name[5][3][20] = { { "�峴ľ��","±Ƥ��","��˿���" },{ "�����Ź�","���Ŷ���","С��Ϻ����" },{ "�㳦�˷�","���ʳ���","������ͷ" },{ "��ݮ�����","����","��ζ����" },{ "��֭","���ǿɿڿ���","���ϼ�����" } };
	while (1) {
		main_munu();
		scanf("%d", &M);
		if (M == 0) {
			break;
		}
		switch (M) {
		case 1:
		{
			menu_liangcai();
			while (1) {
				scanf("%d", &n);
				if (n == 0) {
					
					break;
				}
			
				calorie1[0][n - 1] += calorie[0][n - 1];
				x[0][n - 1] ++;
			}
		}
		if (n == 0)break;
		case 2:
		{
			menu_jingdian();
			while (1) {
				scanf("%d", &n);
				if (n == 0) {
					
					break;
				}
				calorie1[1][n - 1] += calorie[1][n - 1];
				x[1][n - 1]++;
			}
		}
		if (n == 0)break;
		case 3:
		{
			menu_zhushi();
			while (1) {
				scanf("%d", &n);
				if (n == 0) {
			
					break;
				}
				calorie1[2][n - 1] += calorie[2][n - 1];
				x[2][n - 1]++;
			}
		}
		if (n == 0)break;
		case 4:
		{
			menu_tiandian();
			while (1) {
				scanf("%d", &n);
				if (n == 0) {
				
					break;
				}
				calorie1[3][n - 1] += calorie[3][n - 1];
				x[3][n - 1]++;
			}
		}
		if (n == 0)break;
		case 5:
		{
			menu_yinliao();
			while (1) {
				scanf("%d", &n);
				if (n == 0) {
					
					break;
				}
				calorie1[4][n - 1] += calorie[4][n - 1];
				x[4][n - 1]++;
			}
		}

		if (n == 0)break;
		}

	}

	//��ӡ�����Ϣ
	printf("����\t\t\t��·������kcal��\t����\t�ܿ�·������kcal��\n-----------------------------------\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (calorie1[i][j] != 0) {
				printf("%s\t\t%3d\t\t%3d\t%3d\n", name[i][j], calorie[i][j], x[i][j], calorie1[i][j]);
				total += calorie1[i][j];
			}
		}
	}
	printf("�ܿ�·������\t\t\t\t\t%3d\n", total);
	printf("ף���ò���죬��֬��Ҫ��֣�\n");
	getch();
	return 0;
}
