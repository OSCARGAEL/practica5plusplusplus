#include <stdio.h>
#include "matematicas.h"

int main ()
{
  double x, y;
  double datos_sumatoria[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  double datos_multiplicatoria[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int opcion, n, m;
  do
    {
      printf
	("Ingrese una de las opciones:\n1)Potencia\n2)Sumatoria\n3)Multiplicatoria\n4)Salir");
      scanf ("%d", &opcion);
      switch (opcion)
	{
	case 1:
	  printf ("Ingrese el valor de X y Y");
	  scanf ("%lf %lf", &x, &y);
	  printf ("La potencia de %.2lf a la %.2lf es: %.2lf\n", x, y,
		  potencia (x, y));
	  break;
	case 2:
	  printf ("Ingrese el valor de n y m");
	  scanf ("%d %d", &n, &m);
	  printf ("La sumatoria de %d a %d es: %.2lf\n", n, m,
		  sumatoria (n, m, datos_sumatoria));
	  break;
	case 3:
	  printf ("Ingrese el valor de n y m");
	  scanf ("%d %d", &n, &m);
	  printf ("La multiplicatoria de %d a %d es: %.2lf\n", n, m,
		  multiplicatoria (n, m, datos_multiplicatoria));
	  break;
	case 4:
	  break;

	default:
	  printf ("Error, ingrese un valor valido\n");
	}
    }
  while (opcion != 4);

  return 0;
}
