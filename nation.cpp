#include "nation.h"
string Nation::get_name()
{
return name;
}

void Nation::set_name(string n)
{
	name = n;
}

string Nation::get_nationality()
{
return nationality;
}

void Nation::set_nationality(string n)
{
	nationality = n;
}

string Nation::get_nationality_plural()
{
return nationality_plural;
}

void Nation::set_nationality_plural(string n)
{
	nationality_plural = n;
}

double Nation::get_money()
{
return money;
}

void Nation::set_money(double n)
{
	money = n;
}

double Nation::get_manpower()
{
return manpower;
}

void Nation::set_manpower(double n)
{
	manpower = n;
}

double Nation::get_happiness()
{
return happiness;
}

void Nation::set_happiness(double n)
{
	happiness = n;
}

double get_security()
{
	return security;
}

void set_security(double n)
{
	security = n;
}

double get_intelligence()
{
	return intelligence;
}

void set_intelligence(double n)
{
	intelligence = n;
}

double get_suspicion()
{
	return suspicion;
}

void set_suspicion(double n)
{
	suspicion = n;
}

int Nation::get_silos()
{
return silos;
}

void Nation::set_silos(int n)
{
	silos= n;
}

int Nation::get_radars()
{
return radars;
}

void Nation::set_radars(int n)
{
	radars= n;
}

int Nation::get_spies()
{
return spies;
}

void Nation::set_spies(int n)
{
	spies= n;
}

int Nation::get_forts()
{
return forts;
}

void Nation::set_forts(int n)
{
	forts= n;
}

int Nation::get_cities()
{
return cities;
}

void Nation::set_cities(int n)
{
	cities= n;
}

int Nation::get_bases()
{
return bases;
}

void Nation::set_bases(int n)
{
	bases= n;
}

int Nation::get_homeland()
{
return homeland;
}

void Nation::set_homeland(int n)
{
	homeland = n;
}



Nation::Nation()
{

}

Nation::Nation(string nam, string nationl, string nati_plu, double r, double m, double h, double inte, double sus, double sec, int si, int ra, int sp, int fo, int ci, int ba, int ho)
{
	name = nam;
	nationality = nationl;
	nationality_plural = nati_plu;

	money = r;
	manpower = m;
	happiness = h;
	intelligence = inte;
	suspicion = sus;
	security = sec;

	silos = si;
	radars = ra;
	spies = sp;
	forts = fo;
	cities = ci;
	homeland = ho;

}
