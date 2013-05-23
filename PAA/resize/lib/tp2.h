#ifndef OPTIONS_H
#define OPTIONS_H


/* Allowed methods of exection */
enum methods
{
    // Based on graphs
    GRAPH,
    // Dynamic Programming aproach
    DYNAMIC
};


/* Command line options that configures the program exection */
typedef struct
{
    // Running Method
    enum methods method;
    // Width of the resized image
    int width;
    // Height of the resized image
    int height;
    // Input file with matrices to calculate pixel intensity
    char *matrix;
    // Input file with the image to be resized
    char *ppmfile;
} Options;

#endif
