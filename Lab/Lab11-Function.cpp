/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/

#include <stdio.h>

int isArmstrong( int num ) {
    int i = 0, sum = 0, n = num ;

    while ( n != 0 ) {
        n /= 10 ;
        i++ ;
    }
    n = num ;
    while ( n != 0 ) {
        int digit = n % 10 ;
        int powered = 1 ;
        for ( int j = 0 ; j < i ; j++ ) {
            powered *= digit ;
        }
        sum += powered ;
        n /= 10 ;
    }
    return ( sum == num ) ;
}

int main() {
    int num ;

    printf( "Enter a number:\n" ) ;
    scanf( "%d", &num ) ;

    if ( isArmstrong( num ) ) {
        printf( "Pass.\n" ) ;
    } else {
        printf( "Not Pass.\n" ) ;
    }

    return 0 ;
}
