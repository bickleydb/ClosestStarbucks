#include <iostream>

	BST<Entry> tree;



	void bickledbStarbucks::build(Entry* c, int n) {

	  for (int i = 0; i < n; i++) {
	    tree.add(c[i]);
		}
		std::cout<<tree.size()<<std::endl;
		std::cout<<n<<std::endl;
	}


    Entry* bickledbStarbucks::getNearest(double x, double y) {
		std::cout<<tree.find(-86.295369,32.35012).address<<std::endl;
		std::cout<<tree.find(-79.608705,43.699195).address<<std::endl;
		std::cout<<tree.find(-79.617586,43.696273).address<<std::endl;
		std::cout<<tree.find(-79.617586,43.696273).address<<std::endl;
		std::cout<<tree.find(-76.481867,37.125912).city<<std::endl;
		//std::cout<<tree.find(-86.295369,32.35012).address<<std::endl;
		//std::cout<<tree.find(-86.295369,32.35012).address<<std::endl;
		//std::cout<<tree.find(-86.295369,32.35012).address<<std::endl;
//std::cout<<tree.find(-86.295369,32.35012).city<<std::endl;
	//	std::cout<<tree.find(-86.295369,32.35012).address<<std::endl;


		return NULL;

	}

