#include "gtest/gtest.h"
#include "ParseCommandTests.h"

TEST(CommandUtilsTests, pluralTest) {
	EXPECT_EQ("-s", CommandUtils::processPlural("-es"));
	EXPECT_EQ("-s", CommandUtils::processPlural("-s"));
	EXPECT_EQ("shouldNotChange", CommandUtils::processPlural("shouldNotChange"));
}

TEST(CommandUtilsTests, articleTest) {
	EXPECT_EQ("a", CommandUtils::processArticle("an"));
	EXPECT_EQ("a", CommandUtils::processArticle("a"));
	EXPECT_EQ("shouldNotChange", CommandUtils::processArticle("shouldNotChange"));
}

TEST(CommandUtilsTests, stringUtilsTest) {
	EXPECT_TRUE(CommandUtils::startsWith("abcdef", 'a'));
	EXPECT_FALSE(CommandUtils::startsWith("abcdef", 'f'));

	EXPECT_TRUE(CommandUtils::endsWith("abcdef", 'f'));
	EXPECT_FALSE(CommandUtils::endsWith("abcdef", 'a'));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
