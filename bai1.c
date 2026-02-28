/******************************************************************************
 * Họ và tên: [Nguyễn Thành Tâm]
 * MSSV:      [PS48578]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowelCount = 0, consonantCount = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    // Loại bỏ ký tự newline nếu có
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
            vowelCount++;
        } else if (isalpha(ch)) {
            consonantCount++;
        }
    }

    printf("So nguyen am: %d\n", vowelCount);
    printf("So phu am: %d\n", consonantCount);

    return 0;
}   