/*
 * util.h
 *
 * Licensed under MIT license
 *
 */

#ifndef UTIL_H
#define UTIL_H

#define ROOT_MACHINE_EPSILON (double) 1.48996644E-8

#define LENNARDJONES_CUTOFF 2.5

#define C_BOLTZMANN (double)(1.380649E-23)
#define C_AVOGADRO  (double)(6.02214076E23)
#define C_IDEALGAS  (double)(8.31446261)
#define C_ELEC      (double)(8.98755*10E9)
#define C_PI        (double)(3.14159265359)

#define POW3(x) (x*x*x)
#define POW6(x) (POW3(x)*POW3(x))
#define POW12(x) (POW6(x)*POW6(x))

#define MODE_ANALYTICAL 0
#define MODE_NUMERICAL 1

#define ARGS_NUMERICAL_DEFAULT   MODE_ANALYTICAL      /* Disable numerical differentiation solving by default */
#define ARGS_TIMESTEP_DEFAULT    (double)1E-15        /* Use 1 femtosecond steps */
#define ARGS_MAX_TIME_DEFAULT    (double)1E-9         /* Simulate 1 nanosecond */
#define ARGS_MOLECULES_DEFAULT   (uint64_t)1          /* Number of molecules in the universe */
#define ARGS_TEMPERATURE_DEFAULT (uint64_t)273.15     /* Temperature of the universe */
#define ARGS_PRESSURE_DEFAULT    (double)1E5          /* Pressure of the universe */

#define FLAG_NUMERICAL "--numerical"
#define FLAG_INPUT     "--in"
#define FLAG_OUTPUT    "--out"
#define FLAG_TIMESTEP  "--dt"
#define FLAG_TIME      "--time"
#define FLAG_MOL       "--mol"
#define FLAG_TEMP      "--temp"
#define FLAG_PRESSURE  "--pressure"

void *retstr(void *ret, const char *str, const char *file, const int line);
int retstri(int ret, const char *str, const char *file, const int line);
double retstrf(double ret, const char *str, const char *file, const int line);

#endif
