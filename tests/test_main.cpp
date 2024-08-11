#include <gtest/gtest.h>  // Include the GoogleTest framework header

// Dummy test
// Define a test case named 'ExampleTest' and a test named 'test'
TEST(ExampleTest, test)
{
    // Verify that true is equal to true
    EXPECT_EQ(true, true);
}

int main(int argc, char **argv) {
    // Initialize the GoogleTest framework with command-line arguments
    ::testing::InitGoogleTest(&argc, argv);

    // Run all the tests that have been defined and return the result
    return RUN_ALL_TESTS();
}
