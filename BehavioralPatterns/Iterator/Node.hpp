#pragma once
#include <memory>
class Node {
public:
	float num{};
	std::shared_ptr<Node> left{}, right{};
	Node() = default;
	Node(float num_) : num(num_) {}
	void set(float num);
	std::shared_ptr<Node> makeLeft(float num);
	std::shared_ptr<Node> makeRight(float num);
};


