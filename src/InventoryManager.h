//
// Created by felip on 24/8/2020.
//

#ifndef LAB04_SOLID_INVENTORYMANAGER_H
#define LAB04_SOLID_INVENTORYMANAGER_H
#include <iomanip>
#include <fstream>
class InventoryManager {
public:

   virtual std::string save() = 0;

   virtual ~InventoryManager(){};
};

#endif //LAB04_SOLID_INVENTORYMANAGER_H
