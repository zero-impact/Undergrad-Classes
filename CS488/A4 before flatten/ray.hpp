#ifndef RAY_HPP
#define RAY_HPP

#include "algebra.hpp"
#include "scene.hpp"

class Ray;

struct Intersection
{
	Intersection() : node(NULL), ray(NULL), t(DBL_INF), normal(Vector3D()) {}

	Point3D getPoint() const;

	GeometryNode *node;
	const Ray *ray; //incident ray
	double t;
	Vector3D normal;
};

inline bool operator<(const Intersection& a, const Intersection& b) {
	return a.t < b.t && a.t > MIN_INTERSECT_DIST;
}

class Ray {
public:
  	Ray(const Point3D &origin, const Vector3D &direction)
  		: mOrigin(origin), mDirection(direction) {}

  	Ray() : mOrigin(Point3D()), mDirection(Vector3D(0.0, 1.0, 0.0)) {}

  	Point3D getPoint(const double &t) const { return mOrigin + t * mDirection; }

  	const Point3D &origin() const { return mOrigin; }
  	const Vector3D &direction() const { return mDirection; }

private:
	Point3D mOrigin;
	Vector3D mDirection;
};

inline std::ostream& operator <<(std::ostream& os, const Ray& r)
{
  	return os << "Origin: " << toString(r.origin()) << " Direction: " << toString(r.direction());
}

#endif