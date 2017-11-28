// kadai.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#define STRING_SIZE 500

int main()
{
	FILE *fp;
	char string[STRING_SIZE];
	//char *p;
	char str[STRING_SIZE];
	int i;  //ループカウンター
	int point = 0;
	//入力ファイルのオープン
	fopen_s(&fp, "BlockInfo.csv", "r");

	//エラーチェック
	if (fp == NULL)
	{
		printf("ファイルが見つかりません\n");
		return 0;
	}
	while (fgets(string, STRING_SIZE, fp))
	{
		for (i = 0; i < STRING_SIZE; i++)
		{
			if (string[i] == ',')
			{				
				string[i] = '\0';
				strncpy_s(str, string + point, i - point);
				printf("-------------------\n");
				printf("%s\n", str);
				point = i + 1;		
			}
			
		}
		//p = strtok_s(string, ", ", &str);
		
	}

	fclose(fp);
    return 0;
}