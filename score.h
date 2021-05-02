#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//in header file, uasually we put following information:
//	1.constant definition
//	2.data structure definition
//	3.function prototypes

#define MAX 30
#define MIN 10
//we don't use complex data structure in this program

void input_scores(int[]);
void evaluation(int[], int[]);
void classification(int[], int[]);
void output_results(int[], int[]);
//commit again from shell
