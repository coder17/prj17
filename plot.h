#pragma once


class Plot
{
public:
	Plot();
	Plot(const char *name);
	virtual ~Plot();

protected:
	char m_name[32];
	int m_age;
	int m_num;

public:
	void set_name(const char *name);
	char* get_name();

	void set_age(int age);
	int get_age();

	void set_num(int num);
	int get_num();

	Plot& operator=(Plot &right);
};
