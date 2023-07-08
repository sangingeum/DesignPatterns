#include "Node.hpp"
void Node::set(float num) {
	this->num = num;
}
std::shared_ptr<Node> Node::makeLeft(float num) {
	left = std::make_shared<Node>(num);
	return left;
}
std::shared_ptr<Node> Node::makeRight(float num) {
	right = std::make_shared<Node>(num);
	return right;
}