#include "../Example.hpp"
#include<gtest/gtest.h>

struct ExampleTests 
  : public ::testing::Test
{
    int *x;
    int GetX()
    {
        return *x;
    }
    virtual void SetUp() override
    {
        fprintf(stderr,"Begining of ExampleTests\n");
        x = new int(5);
    }
    virtual void TearDown() override
    {
        delete x;
        fprintf(stderr,"End of ExampleTests\n");
    }
};
TEST_F(ExampleTests,Square)
{
    EXPECT_EQ(25, square(GetX()));
}