/***************************************************************/
/**                                                           **/
/**   Lucas Pates Rodrigues                     11545304      **/
/**   Exercício-Programa 02                                   **/
/**   Professor: Yoshiharu Kohayakawa                         **/
/**   Turma: 03                                               **/
/**                                                           **/
/***************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define G 6.67e-11

double dist(double p1x, double p1y, double p2x, double p2y);
double forca(char c, int i,
             double x0, double y0, double m0,
             double x1, double y1, double m1,
             double x2, double y2, double m2);

void atualize(double *x, double *y, double *vx, double *vy,
              double ax, double ay, double dt);

int main()
{

    /// Corpo 0
    double rx0;
    double ry0;
    double vx0;
    double vy0;
    double m0;

    scanf("%lf %lf %lf %lf %lf", &rx0, &ry0, &vx0, &vy0, &m0);

    /// corpo 1
    double rx1;
    double ry1;
    double vx1;
    double vy1;
    double m1;

    scanf("%lf %lf %lf %lf %lf", &rx1, &ry1, &vx1, &vy1, &m1);

    /// corpo 2
    double rx2;
    double ry2;
    double vx2;
    double vy2;
    double m2;

    scanf("%lf %lf %lf %lf %lf", &rx2, &ry2, &vx2, &vy2, &m2);

    int T;
    scanf("%d", &T);
    int dt;
    scanf("%d", &dt);

    for (int t = 0; t <= T; t += dt)
    {
        double Fx0;
        double Fy0;
        double Fx1;
        double Fy1;
        double Fx2;
        double Fy2;
        double Ax0;
        double Ay0;
        double Ax1;
        double Ay1;
        double Ax2;
        double Ay2;

        printf("%e  %e  %e  %e %e  %e\n", rx0, ry0, rx1, ry1, rx2, ry2);

        /// corpo B0://///
        Fx0 = forca('x', 0, rx0, ry0, m0, rx1, ry1, m1, rx2, ry2, m2);
        Ax0 = Fx0 / m0;
        Fy0 = forca('y', 0, rx0, ry0, m0, rx1, ry1, m1, rx2, ry2, m2);
        Ay0 = Fy0 / m0;

        /// corpo B1://///
        Fx1 = forca('x', 1, rx0, ry0, m0, rx1, ry1, m1, rx2, ry2, m2);
        Ax1 = Fx1 / m1;
        Fy1 = forca('y', 1, rx0, ry0, m0, rx1, ry1, m1, rx2, ry2, m2);
        Ay1 = Fy1 / m1;

        /// corpo B2://///
        Fx2 = forca('x', 2, rx0, ry0, m0, rx1, ry1, m1, rx2, ry2, m2);
        Ax2 = Fx2 / m2;
        Fy2 = forca('y', 2, rx0, ry0, m0, rx1, ry1, m1, rx2, ry2, m2);
        Ay2 = Fy2 / m2;

        atualize(&rx0, &ry0, &vx0, &vy0, Ax0, Ay0, dt);
        atualize(&rx1, &ry1, &vx1, &vy1, Ax1, Ay1, dt);
        atualize(&rx2, &ry2, &vx2, &vy2, Ax2, Ay2, dt);
    }

    return 0;
}

double dist(double p1x, double p1y, double p2x, double p2y)
{

    double distancia;

    distancia = sqrt((p2x - p1x) * (p2x - p1x) + (p2y - p1y) * (p2y - p1y));

    return distancia;
}

double forca(char c, int i, double x0, double y0, double m0, double x1, double y1, double m1, double x2, double y2, double m2)
{

    double fa;
    double fb;
    double lenght1;
    double lenght2;

    if (i == 0)
    {

        if (c == 'x')
        {
            lenght1 = dist(x0, y0, x1, y1);
            fa = (G * m0 * m1) / ((lenght1) * (lenght1));
            fa = fa * ((x1 - x0) / lenght1);

            lenght2 = dist(x0, y0, x2, y2);
            fb = (G * m0 * m2) / ((lenght2) * (lenght2));
            fb = fb * ((x2 - x0) / lenght2);

            return (fa + fb);
        }
        else
        {
            lenght1 = dist(x0, y0, x1, y1);
            fa = (G * m0 * m1) / ((lenght1) * (lenght1));
            fa = fa * ((y1 - y0) / lenght1);

            lenght2 = dist(x0, y0, x2, y2);
            fb = (G * m0 * m2) / ((lenght2) * (lenght2));
            fb = fb * ((y2 - y0) / lenght2);

            return (fa + fb);
        }
    }

    if (i == 1)
    {

        if (c == 'x')
        {
            lenght1 = dist(x1, y1, x0, y0);
            fa = (G * m1 * m0) / ((lenght1) * (lenght1));
            fa = fa * ((x0 - x1) / lenght1);

            lenght2 = dist(x1, y1, x2, y2);
            fb = (G * m1 * m2) / ((lenght2) * (lenght2));
            fb = fb * ((x2 - x1) / lenght2);

            return (fa + fb);
        }
        else
        {
            lenght1 = dist(x1, y1, x0, y0);
            fa = (G * m1 * m0) / ((lenght1) * (lenght1));
            fa = fa * ((y0 - y1) / lenght1);

            lenght2 = dist(x1, y1, x2, y2);
            fb = (G * m1 * m2) / ((lenght2) * (lenght2));
            fb = fb * ((y2 - y1) / lenght2);

            return (fa + fb);
        }
    }

    if (i == 2)
    {

        if (c == 'x')
        {
            lenght1 = dist(x2, y2, x0, y0);
            fa = (G * m2 * m0) / ((lenght1) * (lenght1));
            fa = fa * ((x0 - x2) / lenght1);

            lenght2 = dist(x2, y2, x1, y1);
            fb = (G * m1 * m2) / ((lenght2) * (lenght2));
            fb = fb * ((x1 - x2) / lenght2);

            return (fa + fb);
        }
        else
        {
            lenght1 = dist(x2, y2, x0, y0);
            fa = (G * m2 * m0) / ((lenght1) * (lenght1));
            fa = fa * ((y0 - y2) / lenght1);

            lenght2 = dist(x2, y2, x1, y1);
            fb = (G * m1 * m2) / ((lenght2) * (lenght2));
            fb = fb * ((y1 - y2) / lenght2);

            return (fa + fb);
        }
    }
}

void atualize(double *x, double *y, double *vx, double *vy,
              double ax, double ay, double dt)
{

    *vx = *vx + (ax * dt);
    *vy = *vy + (ay * dt);
    *x = *x + ((*vx) * dt);
    *y = *y + ((*vy) * dt);
}
