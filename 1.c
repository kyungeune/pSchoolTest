#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s, const char* skip, int index) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
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

            for (int a = 0; skip[a] != '\0'; a++) { // az, za로 담겼을 경우, 한 번 num을 먹었을 경우 한 번 더 해주기
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