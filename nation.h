#include <iostream>
#include <string>

using namespace std;

class Nation
{
	private:
		string name;
		string nationality;
		string nationality_plural;

		double money;
		double manpower;
		double happiness;

		double security;
		double intelligence;
		double suspicion;

		int silos;
		int radars;
		int spies;
		int forts;
		int cities;
		int bases;
		int homeland;


	public:
		string get_name();
		void set_name(string n);
		string get_nationality();
		void set_nationality(string n);
		string get_nationality_plural();
		void set_nationality_plural(string n);

		double get_money();
		void set_money(double n);
		double get_manpower();
		void set_manpower(double n);
		double get_happiness();
		void set_happiness(double n);
		double get_security();
		void set_security(double n);
		double get_intelligence();
		void set_intelligence(double n);
		double get_suspicion();
		void set_suspicion(double n);
		
		int get_silos();
		void set_silos(int n);
		int get_radars();
		void set_radars(int n);
		int get_spies();
		void set_spies(int n);
		int get_forts();
		void set_forts(int n);
		int get_cities();
		void set_cities(int n);
		int get_bases();
		void set_bases(int n);
		int get_homeland();
		void set_homeland(int n);

		Nation();
		Nation(string name, string nationl, string nati_plu, double n, double m, double h, double inte, double sus, double sec, int si, int ra, int sp, int fo, int ci, int ba, int ho);
};