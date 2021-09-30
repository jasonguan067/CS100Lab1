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

TEST(EchoTest, MultipleWords) {
    char* test_val[7]; test_val[0] = "./c-echo"; test_val[1] = "this"; test_val[2] = "is"; test_val[3] = "a"; test_val[4] = "lot"; test_val[5] = "of"; test_val[6] = "words";  
    EXPECT_EQ("this is a lot of words", echo(7, test_val));
}

TEST(EchoTest, VeryLongWord){
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "pneumonoultramicroscopicsilicovolcanoconiosis";
    EXPECT_EQ("pneumonoultramicroscopicsilicovolcanoconiosis", echo(2, test_val));
}

TEST(EchoTest, BlankSpace){
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "IsThere"; test_val[2] = " "; test_val[3] = "ABlankSpace?";
    EXPECT_EQ("IsThere   ABlankSpace?", echo(4, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
