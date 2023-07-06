#include "Proxy.hpp"
#include <vector>
/*
Virtual proxy example
Load resources on-demand
*/

int main() {
	std::vector<std::unique_ptr<Subject>> proxyVector;
	proxyVector.push_back(std::make_unique<Proxy>("./text1.txt"));
	proxyVector.push_back(std::make_unique<Proxy>("./text2.txt"));
	proxyVector.push_back(std::make_unique<Proxy>("./text3.txt"));
	proxyVector.push_back(std::make_unique<Proxy>("./text4.txt"));
	for (const auto& proxy : proxyVector) {
		proxy->request(); // Lazily load files and show them.
		proxy->clear(); // (optional) clear the loaded file.
	}
	
	return 0;
}