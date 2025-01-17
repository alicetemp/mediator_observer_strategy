#pragma once
#include <vector>
#include <string>

struct Vec { double x, y, z; };

struct Vertex
{
	Vec pos;
	Vec normal;
};

using TriangleSoup = std::vector<Vertex>;

class STLParser
{
public:
	TriangleSoup read(const std::string& filename);
	void write(const TriangleSoup& triangleSoup, const std::string& filename);
private:
	
};




