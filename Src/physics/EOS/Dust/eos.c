/**
 * @file eos.c
 *
 * @author Alejandro Aguayo-Ortiz
 *
 * @brief Equation of state for Dust
 *
 */

#include"main.h"

void EoS(eos_ *eos, double *u, gauge_ *local_grid)
{
   double rho, p;
   rho = u[RHO];
   p   = 0.0;

   eos->e = p / (rho * (K - 1.0));

#if PHYSICS == HD
   eos->cs = sqrt(K * p / rho);
#elif PHYSICS == RHD
   eos->h  = 1.0 + eos->e + p/rho;
   eos->cs = sqrt(K * p / (rho * eos->h));
#endif
}
