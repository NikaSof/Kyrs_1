#pragma once
class eq2 {
private:
	double a, b, c, D;
public:
	eq2();
	eq2(double a1, double b1);
	eq2(double a1, double b1, double c1);

	double get_c();
	double find_X();
	double find_Y(double x);
	double find_YS(double i, double j);

	void set_c(double c1);
	void set(double a1, double b1, double c1);
	void rand_abc(int i, int j);

	friend std::ostream& operator<<(std::ostream& stream, eq2& obj) {
		if (obj.a != 0) {
			if (obj.b < 0 && obj.c < 0) {
				stream << obj.a << "x^2" << " - " << abs(obj.b) << "x" << " - " << abs(obj.c) << " = 0" << std::endl;
			}
			else if (obj.b > 0 && obj.c > 0) {
				stream << obj.a << "x^2" << " + " << obj.b << "x" << " + " << obj.c << " = 0" << std::endl;
			}
			else if (obj.b > 0 && obj.c < 0) {
				stream << obj.a << "x^2" << " + " << abs(obj.b) << "x" << " - " << obj.c << " = 0" << std::endl;
			}
			else if (obj.b < 0 && obj.c > 0) {
				stream << obj.a << "x^2" << " - " << abs(obj.b) << "x" << " + " << obj.c << " = 0" << std::endl;
			}
			else if (obj.b == 0) {
				if (obj.c > 0) {
					stream << obj.a << "x^2" << " + " << obj.c << " = 0" << std::endl;
				}
				else if (obj.c < 0) {
					stream << obj.a << "x^2" << " - " << abs(obj.c) << " = 0" << std::endl;
				}
				else {
					stream << obj.a << "x^2 = 0" << std::endl;
				}
			}
			else if (obj.c == 0) {
				if (obj.b > 0) {
					stream << obj.a << "x^2" << " + " << obj.b << "x = 0" << std::endl;
				}
				else if (obj.b < 0) {
					stream << obj.a << "x^2" << " - " << abs(obj.b) << "x = 0" << std::endl;
				}
			}
		}
		else {
			if (obj.b < 0 && obj.c < 0) {
				stream << " - " << abs(obj.b) << "x" << " - " << abs(obj.c) << " = 0" << std::endl;
			}
			else if (obj.b > 0 && obj.c > 0) {
				stream << obj.b << "x" << " + " << obj.c << " = 0" << std::endl;
			}
			else if (obj.b > 0 && obj.c < 0) {
				stream << abs(obj.b) << "x" << " - " << obj.c << " = 0" << std::endl;
			}
			else if (obj.b < 0 && obj.c > 0) {
				stream << " - " << abs(obj.b) << "x" << " + " << obj.c << " = 0" << std::endl;
			}
			else if (obj.b == 0) {
				stream << "График функции прямая, параллельня оси Ox и находящаяся на расстоинии: " << abs(obj.c) << std::endl;
			}
			else if (obj.c == 0) {
				stream << obj.b << "x = 0" << std::endl;
			}
		}
		return stream;
	}
};