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

TEST(CommandUtilsTests, startsWithCharTest) {
	EXPECT_TRUE(CommandUtils::startsWith("abcdef", 'a'));
	EXPECT_FALSE(CommandUtils::startsWith("abcdef", 'f'));
}

TEST(CommandUtilsTests, startsWithStringTest) {
	EXPECT_TRUE(CommandUtils::startsWith("abcdef", "abc"));
	EXPECT_TRUE(CommandUtils::startsWith("abcdef", "abcdef"));
	EXPECT_FALSE(CommandUtils::startsWith("abcdef", "bcd"));
}


TEST(CommandUtilsTests, endsWithTest) {
	EXPECT_TRUE(CommandUtils::endsWith("abcdef", 'f'));
	EXPECT_FALSE(CommandUtils::endsWith("abcdef", 'a'));
}

TEST(CommandUtilsTests, removeTrailingTest) {
	EXPECT_EQ("abcde", CommandUtils::removeTrailing("abcdef"));
	EXPECT_EQ("abcdef", CommandUtils::removeTrailing("abcdef", 'x'));
	EXPECT_EQ("abcdef", CommandUtils::removeTrailing("abcdef*", '*'));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
