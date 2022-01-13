module BPZ1902.Klevtsova.Lab3.Task1;


namespace RBPO {
	namespace Lab3{
		namespace Task1 {
			double f1(double x) {
				return (sin(((atan(1) * 4)/2.0)+3.0*x))/(1-sin(3.0*x-(atan(1) * 4)));
			}

			double f2(double x) {
				return (x > 3) ? (-3.0 * x + 9.0)  : (pow(x,3)/(x * x + 8.0));
			}

			double a(int i) {
				return (pow(-1.0, i) * ((i+1.0)/(pow(i,3.0)-pow(i,2.0)+1.0)));
			}

			double f3(int n) {
				double acc = 0.0;
				for (int i = 0; i <= n; i++) {
					acc += a(i);
				}
				return acc;
			}

			double f4(double eps) {
				double prev = a(0);
				double curr = a(1);
				double acc = prev + curr;
				for (int i = 2; abs(prev - curr) > eps; i++) {
					prev = curr;
					curr = a(i);
					acc += curr;
				}
				return acc;
			}
		}
	}
}