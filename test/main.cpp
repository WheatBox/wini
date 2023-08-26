#include "../source/wini.h"

#include <iostream>

int main() {
	system("chcp 65001");

	wini::wini ini;

	std::cout << (int)ini.load("./test/test.ini") << std::endl;
	
	std::cout << "---------------------" << std::endl;
	std::cout << ini.get("sectiontest", "key1", false) << std::endl;
	std::cout << ini.get("sectiontest", "key2", 10) << std::endl;
	std::cout << ini.get("sectiontest", "key3", 1.2) << std::endl;
	std::cout << ini.get("sectiontest", "key4", "error") << std::endl;
	std::cout << "---------------------" << std::endl;

	ini.set("sectiontest", "key1", true);
	ini.set("sectiontest", "key2", 123);
	ini.set("sectiontest", "key3", 114.514);
	ini.set("sectiontest", "key4", "你好，世;#界！\"你好，世;#界！\"你好，世;#界！");

	std::cout << (int)ini.save("./test/test2.ini") << std::endl;

	return 0;
}
