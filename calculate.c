#include <stdio.h>

int main(void) {
	int num1, num2, choice, status, answer, right, i;
	right = 0;
	srand(time(0));

	printf("��ӭ!\n");
	printf("1���ӷ���\n2��������\nq���˳�����\n");
	printf("��ѡ���Ӧѡ�����ţ�");
	status = scanf_s("%d", &choice);
	while (status == 1) {
		if (choice == 1) {
			for (i = 1; i <= 3; i++) {
				printf("%d + %d = ", num1 = rand() % 10, num2 = rand() % 10);
				scanf_s("%d", &answer);
				if (answer == num1 + num2) {
					printf("����ˣ�\n\n");
					right++;
				}
				else {
					printf("����ˡ�\n\n");
				}	
			}
			printf("�Ѵ��%d�⣡\n", right);
			printf("1���ӷ���\n2��������\nq���˳�����\n");
			printf("��ѡ���Ӧѡ�����ţ�");
			status = scanf_s("%d", &choice);
		}
		else if (choice == 2) {
			for (i = 1; i <= 3; i++) {
				printf("%d - %d = ", num1 = rand() % 10, num2 = rand() % 10);
				scanf_s("%d", &answer);
				if (answer == num1 - num2) {
					printf("����ˣ�\n\n");
					right++;
				}
				else {
					printf("����ˡ�\n\n");
				}
			}
			printf("�Ѵ��%d�⣡\n", right);
			printf("1���ӷ���\n2��������\nq���˳�����\n");
			printf("��ѡ���Ӧѡ�����ţ�");
			status = scanf_s("%d", &choice);
		}
		else {
			printf("��������ȷ��ѡ�");
			status = scanf_s("%d", &choice);
		}
	}
	printf("�����������һ�������%d����", right);

	return 0;
}