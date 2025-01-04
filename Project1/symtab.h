#pragma once
#ifndef SYMTAB_H_INCLUDED
#define SYMTAB_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"parse.h"

extern treenode* tree_gen;


typedef struct symboltable
{
    char name[20]; //����
    char type[10]; //����
    char val[10];  //ֵ
    int  location;
    struct symboltable* next;
}symboltable;

/*extern lquad tac_head;
 ��ϣ��Ĵ�С������Ϊ����200����С���� Loudon P229*/
 /* Procedure st_insert inserts line numbers and
  * memory locations into the symbol table
  * loc = memory location is inserted only the
  * first time, otherwise ignored
  */


#endif // GOBALS_H_INCLUDED
