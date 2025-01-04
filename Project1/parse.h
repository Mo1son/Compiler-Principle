#pragma once
#ifndef PARSE_H_INCLUDED
#define PARSE_H_INCLUDED
#include "scan.h"
typedef enum { stmtk, expk } Nodekind; ///�������

typedef enum {
    ifk, fork, whilek, returnk, assignk,
    funck, defineparak, maink, define_arrayk,
    structk, switchk, casek, breakk, defaultk
} Stmtkind;  ///��������

typedef enum { opk, constk, idk, cite_arrayk } Expkind; ///���ʽ����



typedef struct treenode
{
    struct treenode* child[4];///Ҳ��for�����ĸ�����
    struct treenode* sibling;
    int lineno;
    Nodekind nodekind;
    union { Stmtkind stmt; Expkind exp; }kind;

    union { tokentype op; double val; char name[100]; }attr;
    ///��Expkind������������������ʶ��������������������idk����
    tokentype dtype;
    ///��������������������ֵ������ ����INT,FLOAT,CHAR,DOUBLE,VOID
}treenode;  ///�ο�����ԭ��ʵ�������ṹ�Ķ���



extern int line_num_table[1000];
extern int lineno;
extern int tokenno;
extern tokentype token;


#endif // PARSE_H_INCLUDED
