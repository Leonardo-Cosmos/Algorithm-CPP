#include "stdafx.h"
#include "Sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int ARRAY_LENGTH = 20;

CSortSample::CSortSample()
{

}


CSortSample::~CSortSample()
{

}

void CSortSample::Exec()
{
	CSortHandler* sortHandler = new CEmptySortHandler();

	int array[ARRAY_LENGTH];
	srand((unsigned)time(NULL));
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		array[i] = rand();
	}

	sortHandler->Sort(array, ARRAY_LENGTH);

	for (int i = 0; i < ARRAY_LENGTH; i++) {
		printf("%d\n", array[i]);
	}

	delete sortHandler;
}


CSortHandler::CSortHandler()
{
}


CSortHandler::~CSortHandler()
{
}

CEmptySortHandler::CEmptySortHandler()
{

}

CEmptySortHandler::~CEmptySortHandler()
{

}

void CEmptySortHandler::Sort(int* array, int length)
{

}

