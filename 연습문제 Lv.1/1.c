#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s, const char* skip, int index) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(10000);
    int i, k;

    for (i = 0; s[i] != '\0'; i++) {
        int num = s[i];
        for (int j = 0; j < index; j++) {
            k = 0;
            num++;
            if (num == 123) {
                num = 97;
            }

            for (int a = 0; skip[a] != '\0'; a++) { // az, za�� ����� ���, �� �� num�� �Ծ��� ��� �� �� �� ���ֱ�
                for (int z = 0; skip[z] != '\0'; z++) {
                    int sutza = skip[z];
                    if (sutza == num) {
                        num++;
                        if (num == 123) {
                            num = 97;
                        }
                        break;
                    }

                }
            }


        }
        answer[i] = num;
    }

    answer[i] = '\0';
    return answer;
}