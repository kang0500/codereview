#include "./shopping.h"
#include <gtest/gtest.h>

// TEST (testCaseName, testName){
//   ... test body ...
// }


TEST(shopping_list_test, goods_object_test) {
  
  // Test 2 - Set Member Variable 
  Goods testobject(1, 1000);    
  EXPECT_EQ(testobject.GetIndex(), 1);
  ASSERT_EQ(testobject.GetPrice(), 1000);
}

TEST(shopping_list_test, shopping_object_test) {
  Shopping shopping_object;
  
  // Make 5 Sample datas
  Goods goods_test_object1(3, 2500);
  Goods goods_test_object2(1, 10000);
  Goods goods_test_object3(5, 4500);
  Goods goods_test_object4(4, 49900);
  Goods goods_test_object5(2, 30000);

 
  shopping_object.PushList(goods_test_object1);
  shopping_object.PushList(goods_test_object2);
  shopping_object.PushList(goods_test_object3);
  shopping_object.PushList(goods_test_object4);
  shopping_object.PushList(goods_test_object5);

  // Test 0 - Last element test
  EXPECT_EQ((shopping_object.GetLastElement()).GetPrice(), 30000);
  ASSERT_EQ((shopping_object.GetLastElement()).GetIndex(), 2);

  // Test 1 - Sort by Price
  shopping_object.SortByPrice();

  // Price of last element is 49900
  EXPECT_EQ((shopping_object.GetLastElement()).GetPrice(), 49900);
  ASSERT_EQ((shopping_object.GetLastElement()).GetIndex(), 4);

  // Test 2 - Sort by Index
  shopping_object.SortByIndex();

  // Index of last element is 5
  EXPECT_EQ((shopping_object.GetLastElement()).GetPrice(), 4500);
  ASSERT_EQ((shopping_object.GetLastElement()).GetIndex(), 5);
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
