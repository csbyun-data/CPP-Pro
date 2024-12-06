#include <iostream.h>
#include <math.h>
 
double x_avg(double *x, int n);  // Calculates Average of x array
double sum_x(double *x, int n); // Calculates sum of x array
double sum_x_squared(double *x, int n);  // Calculates the sum of the squares of each element
double sample(double *x, int n);  // Calculates sample stanard deviation
double stan_dev(double *x, int n);  // Calculates standard deviation
int number(int n);  // Returns array size
double xmin(double *x, int n);  // Returns smallest x value
double xmax(double *x, int n);  // Returns largest x value
 
int main()
{
  unsigned int n;
 
  cout << "Enter amount of x value:";
  cin >> n;
 
  double x[n];
 
  for (int i = 0; i < n; i++)
  {
    cout << "Enter value for x[" << i << "]:";
    cin >> x[i];
  }
 
  cout << "Mean of x[i]:\t\t\t" << x_avg(x, n) << endl;
  cout << "Sum of x[i]:\t\t\t" << sum_x(x, n) << endl;
  cout << "Sum of x[i] squared:\t\t" << sum_x_squared(x, n) << endl;
  cout << "Sample Standard Deviation:\t" << sample(x, n) << endl;
  cout << "Standard Deviation:\t\t" << stan_dev(x, n) << endl;
  cout << "Number of x values:\t\t" << number(n) << endl;
  cout << "Minimum value of x:\t\t" << xmin(x, n) << endl;
  cout << "Maximum value of x:\t\t" << xmax(x, n) << endl;
 
  return 0;
}
 
double x_avg(double x[], int n)
{
  return (sum_x(x, n)/n);
}
 
double sum_x(double x[], int n)
{
  double sum;
 
  for (int i = 0; i < n; i++)
  {
    sum += x[i];
  }
 
  return sum;
}
 
double sum_x_squared(double x[], int n)
{
  double sum_x_2;
 
  for (int i = 0; i < n; i++)
  {
    sum_x_2 += pow(x[i], 2);
  }
 
  return sum_x_2;
}
 
double sample(double x[], int n)
{
  double sample_stan_dev, sum_xi_x_2;
 
  for (int i = 0; i < n; i++)
  {
    sum_xi_x_2 += pow(x[i] - x_avg(x, n), 2);
  }
 
  sample_stan_dev = sqrt(1/((double)n-1) * sum_xi_x_2);
 
  return sample_stan_dev;
}
 
double stan_dev(double x[], int n)
{
  double stan_deviation, sum_xi_x_2;
 
  for (int i = 0; i < n; i++)
  {
    sum_xi_x_2 += pow(x[i] - x_avg(x, n), 2);
  }
 
  stan_deviation = sqrt(sum_xi_x_2 / n);
 
  return stan_deviation;
}
 
int number(int n)
{
  return n;
}
 
double xmin(double x[], int n)
{
  double minx = x[0];
 
  for (int i = 0; i < n; i++)
  {
    if (x[i] < minx)
      minx = x[i];
  }
 
  return minx;
}
 
double xmax(double x[], int n)
{
  double maxx = x[0];
 
  for (int i = 0; i < n; i++)
  {
    if (x[i] > maxx)
      maxx = x[i];
  }
 
  return maxx;
}
