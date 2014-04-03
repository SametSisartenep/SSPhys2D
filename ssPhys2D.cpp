#include "ssPhys2D.h"

ssPhys2D::ssPhys2D()
{
	Scale = 1;			// m/pixel
	PI = 3.1415926535897932;
	e = 2.718281828459;
	g = 9.780327;			// m/s²
	G = 6.67259e-11;		// m³/kg·s²
	c = 2.99792458e8;		// m/s
	EARTH_MASS = 5.97219e24;	// kg
	EARTH_RADIUS = 6371000;		// m
	SI_Units = enum {KM, HM, DAM, M, DM, CM, MM, UM, NM,
			KG, HG, DAG, G, DG, CG, MG, UG, NG
			HOUR, MIN, SECS,
			RADS, DEGREES};
}

double ssPhys2D::Conversion(double n, SI_Units from, SI_Units to)
{
	switch(from)
	{
	//LENGTH
		case KM:
			switch(to)
			{
				case HM:
					return n * 10;
				case DAM:
					return n * 100;
				case M:
					return n * 1000;
				case DM:
					return n * 10000;
				case CM:
					return n * 100000;
				case MM:
					return n * 1000000;
				case UM:
					return n * 1000000000;
				case NM:
					return n * 1000000000000;
			}
		case HM:
			switch(to)
			{
				case KM:
					return n / 10;
				case DAM:
					return n * 10;
				case M:
					return n * 100;
				case DM:
					return n * 1000;
				case CM:
					return n * 10000;
				case MM:
					return n * 100000;
				case UM:
					return n * 100000000;
				case NM:
					return n * 100000000000;
			}
		case DAM:
			switch(to)
			{
				case KM:
					return n / 100;
				case HM:
					return n / 10;
				case M:
					return n * 10;
				case DM:
					return n * 100;
				case CM:
					return n * 1000;
				case MM:
					return n * 10000;
				case UM:
					return n * 10000000;
				case NM:
					return n * 10000000000;
			}
		case M:
			switch(to)
			{
				case KM:
					return n / 1000;
				case HM:
					return n / 100;
				case DAM:
					return n / 10;
				case DM:
					return n * 10;
				case CM:
					return n * 100;
				case MM:
					return n * 1000;
				case UM:
					return n * 1000000;
				case NM:
					return n * 1000000000;
			}
		case DM:
			switch(to)
			{
				case KM:
					return n / 10000;
				case HM:
					return n / 1000;
				case DAM:
					return n / 100;
				case M:
					return n / 10;
				case CM:
					return n * 10;
				case MM:
					return n * 100;
				case UM:
					return n * 100000;
				case NM:
					return n * 100000000;
			}
		case CM:
			switch(to)
			{
				case KM:
					return n / 100000;
				case HM:
					return n / 10000;
				case DAM:
					return n / 1000;
				case M:
					return n / 100;
				case DM:
					return n / 10;
				case MM:
					return n * 10;
				case UM:
					return n * 10000;
				case NM:
					return n * 10000000;
			}
		case MM:
			switch(to)
			{
				case KM:
					return n / 1000000;
				case HM:
					return n / 100000;
				case DAM:
					return n / 10000;
				case M:
					return n / 1000;
				case DM:
					return n / 100;
				case CM:
					return n / 10;
				case UM:
					return n * 1000;
				case NM:
					return n * 1000000;
			}
		case UM:
			switch(to)
			{
				case KM:
					return n / 1000000000;
				case HM:
					return n / 100000000;
				case DAM:
					return n / 10000000;
				case M:
					return n / 1000000;
				case DM:
					return n / 100000;
				case CM:
					return n / 10000;
				case MM:
					return n / 1000;
				case NM:
					return n * 1000;
			}
		case NM:
			switch(to)
			{
				case KM:
					return n / 1000000000000;
				case HM:
					return n / 100000000000;
				case DAM:
					return n / 10000000000;
				case M:
					return n / 1000000000;
				case DM:
					return n / 100000000;
				case CM:
					return n / 10000000;
				case MM:
					return n / 1000000;
				case UM:
					return n / 1000;
			}
	//MASS
		case KG:
			switch(to)
			{
				case HG:
					return n * 10;
				case DAG:
					return n * 100;
				case G:
					return n * 1000;
				case DG:
					return n * 10000;
				case CG:
					return n * 100000;
				case MG:
					return n * 1000000;
				case UG:
					return n * 1000000000;
				case NG:
					return n * 1000000000000;
			}
		case HG:
			switch(to)
			{
				case KG:
					return n / 10;
				case DAG:
					return n * 10;
				case G:
					return n * 100;
				case DG:
					return n * 1000;
				case CG:
					return n * 10000;
				case MG:
					return n * 100000;
				case UG:
					return n * 100000000;
				case NG:
					return n * 100000000000;
			}
		case DAG:
			switch(to)
			{
				case KG:
					return n / 100;
				case HG:
					return n / 10;
				case G:
					return n * 10;
				case DG:
					return n * 100;
				case CG:
					return n * 1000;
				case MG:
					return n * 10000;
				case UG:
					return n * 10000000;
				case NG:
					return n * 10000000000;
			}
		case G:
			switch(to)
			{
				case KG:
					return n / 1000;
				case HG:
					return n / 100;
				case DAG:
					return n / 10;
				case DG:
					return n * 10;
				case CG:
					return n * 100;
				case MG:
					return n * 1000;
				case UG:
					return n * 1000000;
				case NG:
					return n * 1000000000;
			}
		case DG:
			switch(to)
			{
				case KG:
					return n / 10000;
				case HG:
					return n / 1000;
				case DAG:
					return n / 100;
				case G:
					return n / 10;
				case CG:
					return n * 10;
				case MG:
					return n * 100;
				case UG:
					return n * 100000;
				case NG:
					return n * 100000000;
			}
		case CG:
			switch(to)
			{
				case KG:
					return n / 100000;
				case HG:
					return n / 10000;
				case DAG:
					return n / 1000;
				case G:
					return n / 100;
				case DG:
					return n / 10;
				case MG:
					return n * 10;
				case UG:
					return n * 10000;
				case NG:
					return n * 10000000;
			}
		case MG:
			switch(to)
			{
				case KG:
					return n / 1000000;
				case HG:
					return n / 100000;
				case DAG:
					return n / 10000;
				case G:
					return n / 1000;
				case DG:
					return n / 100;
				case CG:
					return n / 10;
				case UG:
					return n * 1000;
				case NG:
					return n * 1000000;
			}
		case UG:
			switch(to)
			{
				case KG:
					return n / 1000000000;
				case HG:
					return n / 100000000;
				case DAG:
					return n / 10000000;
				case G:
					return n / 1000000;
				case DG:
					return n / 100000;
				case CG:
					return n / 10000;
				case MG:
					return n / 1000;
				case NG:
					return n * 1000;
			}
		case NG:
			switch(to)
			{
				case KG:
					return n / 1000000000000;
				case HG:
					return n / 100000000000;
				case DAG:
					return n / 10000000000;
				case G:
					return n / 1000000000;
				case DG:
					return n / 100000000;
				case CG:
					return n / 10000000;
				case MG:
					return n / 1000000;
				case UG:
					return n / 1000;
			}
	//TIME
		case HOUR:
			switch(to)
			{
				case MIN:
					return n * 60;
				case SECS:
					return n * 3600;
			}
		case MIN:
			switch(to)
			{
				case HOUR:
					return n / 60;
				case SECS:
					return n * 60;
			}
		case SECS:
			switch(to)
			{
				case HOUR:
					return n / 3600;
				case MIN:
					return n / 60;
			}
	//ANGLES
		case RADS:
			if(to == DEGREES)
				return n * 180 / PI;
		case DEGREES:
			if(to == RADS)
				return n * PI / 180;

	}
}

void ssPhys2D::Scale(double m, double pixels)
{
	Scale = m / pixels;
}

ssPhys2D::~ssPhys2D()
{
	
}
