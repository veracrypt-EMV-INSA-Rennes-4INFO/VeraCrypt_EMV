#include "MultipleEMVTest.h"
#include "EMVToken.h"
#include <string.h>


MultipleEMVTest::MultipleEMVTest(void)
{
}


MultipleEMVTest::~MultipleEMVTest(void)
{
}

void MultipleEMVTest::SetUp()
{

}

TEST_F(MultipleEMVTest, nbCard)
{
	vector<VeraCrypt::EMVTokenKeyfile> availableKeyfile;
	availableKeyfile = VeraCrypt::EMVToken::GetAvailableKeyfiles();
	EXPECT_EQ(availableKeyfile.size(),2);
	cout<<availableKeyfile.size();

}

TEST_F(MultipleEMVTest, Pan)
{
	vector<VeraCrypt::EMVTokenKeyfile> availableKeyfile;
	availableKeyfile = VeraCrypt::EMVToken::GetAvailableKeyfiles();
	EXPECT_EQ(availableKeyfile[0].Token->Label,L"EMV card **** 0645");

}
