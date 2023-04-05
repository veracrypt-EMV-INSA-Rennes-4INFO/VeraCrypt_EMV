#pragma once
#include "gtest\gtest.h"

class EMVTokenTest :
	public ::testing::Test
{
public:
	EMVTokenTest(void);
	~EMVTokenTest(void);

protected:
  void SetUp() override;

};

