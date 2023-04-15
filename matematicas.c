double potencia (double x, double y)
{
  double potencia = 1;
  for (int i = 1; i <= y; i++)
    potencia *= x;

  return potencia;
}

double sumatoria (int n, int m, double *datos_sumatoria)
{
  double suma = 0;
  for (int i = n; i <= m; i++)
    suma += i;
  return suma;

}

double multiplicatoria (int n, int m, double *datos_multiplicatoria)
{
  double multiplicacion = 1;
  for (int i = n; i <= m; i++)
    multiplicacion *= i;
  return multiplicacion;
}

