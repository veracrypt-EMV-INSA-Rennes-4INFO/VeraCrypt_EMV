#include "EMVTokenTest.h"
#include "EMVToken.h"


EMVTokenTest::EMVTokenTest(void)
{
}


EMVTokenTest::~EMVTokenTest(void)
{
}

void EMVTokenTest::SetUp()
{

}

TEST_F(EMVTokenTest, noCard)
{
	vector<VeraCrypt::EMVTokenKeyfile> availableKeyfile;
	availableKeyfile = VeraCrypt::EMVToken::GetAvailableKeyfiles();
	EXPECT_EQ(0, availableKeyfile.size());

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
