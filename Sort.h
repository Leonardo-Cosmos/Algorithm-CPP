#pragma once
class CSortSample
{
public:
	CSortSample();
	~CSortSample();

	void Exec();
};

class CSortHandler
{
public:
	CSortHandler();
	~CSortHandler();

	virtual void Sort(int* array, int length) = 0;
};

