/*
 * TreeNode.hpp
 *
 *  Created on: Nov 16, 2014
 *  Author: Parul Awasthy (<pawasthy@gatech.edu>)
 * 			Young Jin Kim (<ykim362@gatech.edu>)
 * 			Ankit Srivastava (<asrivast@gatech.edu>)
 */

#ifndef TREENODE_HPP_
#define TREENODE_HPP_

#include <vector>
#include <ostream>
#include "Edge.hpp"
#include <vector>

class TreeNode {
public:
	static std::vector<Edge> s_listEdges;

	static std::vector<std::vector<unsigned>> s_distances;

public:
	TreeNode(unsigned size);

	void
	calcLowerBound();

	bool
	isSolution();

	void
	recordSolution();

	double
	getCost();

	double
	getLowerBound();

	void
	setConstraint(std::vector<std::vector<char>> constraint);

	std::vector<std::vector<char>>
	getConstraint();

	unsigned
	addEdge(unsigned idxEdge);

	void
	expand();

	void
	setAlive(bool alive) {
		m_alive = alive;
	}

	bool
	getAlive() {
		return m_alive;
	}

	std::vector<unsigned>
	getTour() {
		return m_travelPath;
	}

private:
	static unsigned MAX_UINT;

private:
	unsigned
	m_dimension;

	std::vector<std::vector<char>>
	m_constraint;

	double
	m_totalCost;

	double
	m_lowerBound;

	std::vector<unsigned>
	m_travelPath;

	bool
	m_alive;


	void
	setIndConstraint(unsigned city1, unsigned city2, char val);

	unsigned
	checkCycle(unsigned city1, unsigned city2);

	void
	findSmallestTwo(unsigned* costOfNode, unsigned& smallest, unsigned& secondSmallest);

};


#endif /* TREENODE_HPP_ */
