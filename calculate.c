#include <stdio.h>

int main(void) {
	int num1, num2, choice, status, answer, right, i;
	right = 0;
	srand(time(0));

	printf("欢迎!\n");
	printf("1、加法题\n2、减法题\nq、退出程序\n");
	printf("请选择对应选项的序号：");
	status = scanf_s("%d", &choice);
	while (status == 1) {
		if (choice == 1) {
			for (i = 1; i <= 3; i++) {
				printf("%d + %d = ", num1 = rand() % 10, num2 = rand() % 10);
				scanf_s("%d", &answer);
				if (answer == num1 + num2) {
					printf("答对了！\n\n");
					right++;
				}
				else {
					printf("答错了。\n\n");
				}	
			}
			printf("已答对%d题！\n", right);
			printf("1、加法题\n2、减法题\nq、退出程序\n");
			printf("请选择对应选项的序号：");
			status = scanf_s("%d", &choice);
		}
		else if (choice == 2) {
			for (i = 1; i <= 3; i++) {
				printf("%d - %d = ", num1 = rand() % 10, num2 = rand() % 10);
				scanf_s("%d", &answer);
				if (answer == num1 - num2) {
					printf("答对了！\n\n");
					right++;
				}
				else {
					printf("答错了。\n\n");
				}
			}
			printf("已答对%d题！\n", right);
			printf("1、加法题\n2、减法题\nq、退出程序\n");
			printf("请选择对应选项的序号：");
			status = scanf_s("%d", &choice);
		}
		else {
			printf("请输入正确的选项：");
			status = scanf_s("%d", &choice);
		}
	}
	printf("程序结束。你一共答对了%d道题", right);

	return 0;
}