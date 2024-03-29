#include <iostream>
using std::endl;
using std::cin;
using std::cout;

//#define STRUCT_POINT
#define DISTANCE_CHECK
class Point 
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	double distance(Point other)
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;
	}
};



double distance (Point A, Point B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}

std::istream& operator >> (std::istream& is,Point & obj)
{
	double x, y;
	is >> x >> y;
	obj(x, y);
	return is;
}

void main() 
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT
	Point A;
	A.x = 2;
	A.y = 3;

	//Point* pA = &A;
	//cout << pA->x << "\t" << pA->y << endl;
#endif 
#ifdef DISTANCE_CHECK
	
	Point A;
	A.set_x(2);
	A.set_y(3);
	Point B;
	B.set_x(7);
	B.set_y(8);
	cout << A.get_x() << "\t" << A.get_y() << endl;
	cout << "���������� ����� � �� ����� B �����: " << A.distance(B) << endl;
	cout << "���������� ����� ������� � � �: " << distance(A,B) << endl;
#endif


}