#ifndef MARINARA_SAUCE_H_
#define MARINARA_SAUCE_H_

#include "sauce.h"

class MarinaraSauce: public Sauce {
 public:
  MarinaraSauce() {
    name_ = "Marinara sauce";
  }
};

#endif  // MARINARA_SAUCE_H_