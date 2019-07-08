#include <stdio.h>


void main_munu() {

	char a[6][20] = { "菜单","凉菜","经典菜","主食","饭后甜点","饮料" };
	int i;
	printf("%s\n", a[0]);
	for (i = 1; i<6; i++)
	{
		printf("\t%d.%s\n", i, a[i]);
	}
	printf("\t0.选择结束\n");
}

void menu_liangcai() {

	char a[3][20] = { "清炒木耳","卤皮蛋","肉丝苦菊" };
	printf("请具体选择菜品：\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.返回上层菜单\n");
}

void menu_jingdian() {

	char a[3][20] = { "葱烧排骨","麻婆豆腐","小河虾蒸蛋" };
	printf("请具体选择菜品：\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.返回上层菜单\n");
}

void menu_zhushi() {

	char a[3][20] = { "香肠焖饭","海鲜炒面","玉米馒头" };
	printf("请具体选择菜品：\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.返回上层菜单\n");
}

void menu_tiandian() {
	char a[3][20] = { "草莓冰淇淋","布丁","橙味果冻" };
	printf("请具体选择菜品：\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.返回上层菜单\n");
}

void menu_yinliao() {
	
	char a[3][20] = { "橙汁","无糖可口可乐","王老吉凉茶" };
	printf("请具体选择菜品：\n");
	for (int i = 0; i < 3; i++) {
		printf("\t\t%d.%s\n", i + 1, a[i]);
	}
	printf("\t\t0.返回上层菜单\n");
}

int main(int argc, const char * argv[]) {
	printf("***** 减脂配套快餐点选系统 *****\n");
	printf(" ***********  欢迎您 ************\n");
	int M;
	int n;
	int x[5][3] = { 0 };
	int calorie1[5][3] = { 0 };
	int calorie[5][3] = { { 53,148,65 },{ 234,137,112 },{ 186,104,261 },{ 251,138,73 },{ 45,0,15 } };//定义每样菜品单价
	int total = 0;
	char name[5][3][20] = { { "清炒木耳","卤皮蛋","肉丝苦菊" },{ "葱烧排骨","麻婆豆腐","小河虾蒸蛋" },{ "香肠焖饭","海鲜炒面","玉米馒头" },{ "草莓冰淇淋","布丁","橙味果冻" },{ "橙汁","无糖可口可乐","王老吉凉茶" } };
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

	//打印相关信息
	printf("菜名\t\t\t卡路里数（kcal）\t数量\t总卡路里量（kcal）\n-----------------------------------\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			if (calorie1[i][j] != 0) {
				printf("%s\t\t%3d\t\t%3d\t%3d\n", name[i][j], calorie[i][j], x[i][j], calorie1[i][j]);
				total += calorie1[i][j];
			}
		}
	}
	printf("总卡路里数：\t\t\t\t\t%3d\n", total);
	printf("祝您用餐愉快，减脂需要坚持！\n");
	getch();
	return 0;
}
