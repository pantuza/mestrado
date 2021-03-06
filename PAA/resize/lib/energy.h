/*
 * energy.h
 *
 * @author: Gustavo Pantuza Coelho Pinto
 * @since: 17.05.2013
 *
 */
#ifndef ENERGY_H
#define ENERGY_H

#include "ppm.h"

/* Human eyes sensibility to RGB colors */
#define R_SENS 0.30
#define G_SENS 0.59
#define B_SENS 0.11

/* Weight matrix used on Sobel Calculation */
typedef struct
{
    int width;
    int height;
    Energy **matrix;
} WeightMatrix;

/* The Sobel Type with two weight matrices */ 
typedef struct
{
    WeightMatrix Mx;
    WeightMatrix My;
} Sobel;


/* Public Functions */
void energise(PPMImage *, char *);
#endif
