/*
 * File Name : user_param.h
 * Description : aztekas user parameters header file for Shock-Tube
 * Creation Date : 27-09-2019
 * Last Modified : 23-10-2019 15:50:59
 * Created By : Alejandro Aguayo-Ortiz
 */

#include"macros.h"

#define periodic_x1        TRUE
#define reflective_x2max   TRUE
#define reflective_x2min   TRUE

#define RECONST            MC
#define FLUX               HLLC
#define GRID               UNIFORM

double rhod, vx1d, vx2d, vx3d;
double rhou, vx1u, vx2u, vx3u;
double p_0, x_0;
double eta, g;
