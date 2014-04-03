#ifndef SSPHYS2D_H
#define SSPHYS2D_H

class ssPhys2D
{
	public:
		ssPhys2D();
		virtual ~ssPhys2D();

		double Scale;		// Screen's Scale
		const double PI;	// Pi number
		const double e;		// Euler-Napier's number
		const double g;		// Earth's gravity constant
		const double G;		// Universal gravity constant
		const double c;		// Light's velocity
		const double EARTH_MASS;// Earth's mass
		const int EARTH_RADIUS; // Earth's radius
		typedef enum SI_Units;

		double Conversion(double n, SI_Units from, SI_Units to);
		void Scale(double m, int pixels);
	//protected:
	//private:
};
#endif // SSPHYS2D_H
