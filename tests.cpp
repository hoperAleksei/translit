#include "gtest/gtest.h"
#include "lib.h"

TEST(getTranslitedText, noChangesExpected) {
	char inp[100] = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 1234567890 .!?*%;@^:()-+=<>";
	char exp[100] = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 1234567890 .!?*%;@^:()-+=<>";
	char *result = translit(inp, strlen(inp));
	
	ASSERT_STREQ(exp, result);
	delete [] result;
}


TEST(getTranslitedText, lowerLettersTransliterationExpected) {
	char inp[100] = "а б в г д е ё ж з и й к л м н о п р с т у ф х ц ч ш щ ы э ю я";
	char exp[100] = "a b v g d e yo zh z i j k l m n o p r s t u f h ts ch sh sc i e yu ya";
	char *result = translit(inp, strlen(inp));
	
	ASSERT_STREQ(exp, result);
	delete [] result;
}


TEST(getTranslitedText, higherLettersTransliterationExpected) {
	char inp[100] = "А Б В Г Д Е Ё Ж З И Й К Л М Н О П Р С Т У Ф Х Ц Ч Ш Щ Ы Э Ю Я";
	char exp[100] = "A B V G D E Yo Zh Z I J K L M N O P R S T U F H Ts Ch Sh Sc I E Yu Ya";
	char *result = translit(inp, strlen(inp));
	
	ASSERT_STREQ(exp, result);
	delete [] result;
}

TEST(getTranslitedText, noTransliterationExpected) {
	char inp[100] = "ьъЬЪ";
	char exp[100] = "";
	char *result = translit(inp, strlen(inp));
	
	ASSERT_STREQ(exp, result);
	delete [] result;
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
