#include <iostream>
#include "./shopping.h"

int main(int argc, char* argv[]) {
  Goods goods1(2, 3000);
  Goods goods2(1, 5000);
  Goods goods3(3, 1000);
  Shopping shoppingList;

  shoppingList.PushList(goods1);
  shoppingList.PushList(goods2);
  shoppingList.PushList(goods3);

  shoppingList.PrintList();

  shoppingList.SortByPrice();

  shoppingList.PrintList();

  shoppingList.SortByIndex();

  shoppingList.PrintList();

  return 0;
}
