#include "Starbucks.h"

class bickledbStarbucks : public Starbucks {
public:
     void build(Entry* c, int n);
	 Entry* getNearest(double x, double y);
 };

#include "bickledbStarbucks.ipp"