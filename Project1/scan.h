#pragma once
#ifndef SCAN_H_INCLUDED
#define SCAN_H_INCLUDED
#include "global.h"
typedef enum {
    INT, FLOAT, CHAR, DOUBLE, VOID, MAIN, IF, ELSE, WHILE, PRINTF, SCANF, FOR,
    EQUAL, PLUS, pPLUS, MINUS, mMINUS, TIMES, DIVIDE, MODE,        ///= + - * / %
    SMALLER, SMALLEREQU, BIGGER, BIGGEREQU, NOTEQU, IFEQU,///< <= > >= != ==
    L_DA, R_DA, L_ZH, R_ZH, L_XI, R_XI,///{}[]()
    FENH, DOUH, DIAN,           ///;, .
    NUM, ID, COMMENT, RETURN,
    AUTO, BREAK, CASE, CONST, CONTINUE,
    STRUCT, MAOH, DEFAULT, SWITCH, ///���油��� �ṹ��struct �Լ�switch���
    HUO, ADE
}tokentype;  ///���油��� &&  ||
typedef struct
{
    tokentype tokenval;         /**һ��token��**/
    char stringval[100];        /**token��ֵ ����,��ĸ,�ؼ��ֵȻ���ֵ��������{ ; ��û��ֵ***/
    double numval;              /**ֵ����Ϊdouble���п���Ϊ������**/
}tokenrecord;
#endif



