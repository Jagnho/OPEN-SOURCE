#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include "title.h"
#include "titleMenu.h"

int main()
{
	system("mode con: cols=150 lines=50");
	title();
	twinkle();
	titleMenu();
}