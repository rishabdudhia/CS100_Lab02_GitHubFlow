#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest, Test_My_Name_All_CAPS){
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "FADI"; test_val[2] = "ZAKI";
    EXPECT_EQ("FADI ZAKI", echo(3, test_val));
}
TEST(EchoTest, Number_and_Letters){
	char* test_val[5]; test_val[0] = "./c-echo"; test_val[1] = "A"; test_val[2] = "2"; test_val[3] = "3L"; test_val[4] = "r";
	EXPECT_EQ("A 2 3L r", echo(5, test_val));
}
TEST(EchoTest, No_Space_Multiple_WORDS){
	char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "HelloFadiZaki";
	EXPECT_EQ("HelloFadiZaki", echo(2, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
