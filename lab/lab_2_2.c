/*
    1. รับค่าแรกเก็บในตัวแปร x
    2. รับค่าตัวแปรที่ 2 เก็บในตัวแปร y
    3. กำหนดผล ห.ร.ม. ตอนแรกเท่ากับ 1
    4. ทำงานซ้ำเมื่อ (m <= ค่า x+y) 
        1. ทำงานซ้ำเมื่อ (m หาร x ลงตัว และ m หาร y ลงตัว)
            1. x = x / m
            2. y = y / m
            3. result = result * m 
        2. m มีค่าเพิ่มขึ้น 1
    5. แสดงผล ห.ร.ม. จากตัวแปร result


*/

#include <stdio.h>

int main(){
    int x,y;
    int m = 2;
    int result = 1;
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    while(m<=x+y){
        while(x%m==0 && y%m==0){
            x = x/m;
            y = y/m;
            result = m * result;
        }
        m++;
    }
    printf("Greatest common divisor : %d", result);
    return 0;
}