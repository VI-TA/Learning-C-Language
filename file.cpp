// file.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#define STRING_SIZE 500

int main()
{
	FILE *fp;
	char string[STRING_SIZE];
	//入力ファイルのオープン
	fopen_s(&fp,"BlockInfo.csv", "r");
	//エラーチェック
	if (fp == NULL)
	{
		printf("ファイルが見つかりません\n");
		return 0;
	}
		
	while (fgets(string,STRING_SIZE,fp))
	{
		printf("%s", string);
	}

	fclose(fp);
	return 0;
}

