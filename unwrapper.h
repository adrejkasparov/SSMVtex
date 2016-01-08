#ifndef UNWRAPPER_H
#define UNWRAPPER_H

#include "mesh3d.h"
#include "chart.h"

class Unwrapper{

public:

	// Transforms the 3D mesh into a group
	// of 2D charts
	static void unwrapMesh(const Mesh3D& mesh_, std::vector<Chart>& charts_);

	// Transforms the 3D splats into individual
	// 2D charts that can get packed later
	static void unwrapSplats(const Mesh3D& mesh_, std::vector<Chart>& charts_);


private:

	// Searchs for the neighbors of each triangle
	// filling in two given vectors:
	// _adj_count: number of neighbours each triangle has
	// _triNeighbor: contains the index of each triangle neighbors
	static void findTriangleNeighbors(const Mesh3D& mesh_, std::vector<unsigned int>& _adj_count, std::vector<int>& _triNeighbor);

	// Checks if 2D vector v1 (from v1a to v1b) intersects with v2 or not
	static bool vectorIntersec(const Vector2f& _v1a, const Vector2f& _v1b, const Vector2f& _v2a, const Vector2f& _v2b);


};



#endif