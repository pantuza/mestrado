/*
 * color.h
 *
 * @author: Gustavo Pantuza Coelho Pinto
 * @since: 17.05.2013
 *
 */
#ifndef COLOR_H_
#define COLOR_H_

typedef struct {
        int r, g, b;;
        float hue, step;
        float start, end;
} Color;

#define RED2BLUE(c,n) color_init_range(c,n, 000.0, 240.0, 0);
#define BLUE2RED(c,n) color_init_range(c,n, 240.0, 000.0, 1);
#define BLUE(c,n)     color_init_range(c,n, 240.0, 180.0, 0);
#define RED(c,n)      color_init_range(c,n, 000.0, 300.0, 0);
#define GREEN(c,n)    color_init_range(c,n, 120.0, 180.0, 0);
#define R2G2B(c,n)    color_init_range(c,n, 300.0, 300.0, 1);

void Hue2RGB(Color *);
void color_init_range(Color *, const int, const float, const float, const int);
void color_init(Color *, const int);
void color_next(Color *);

#endif