#include "cxxopts.hpp"
#include "fts.hpp"

#include <iostream>

int main(int argc, const char *argv[]) {
    try {
        cxxopts::Options options("test", "A brief description");

        options.add_options()("f,first", "first param",
                              cxxopts::value<double>()->default_value("0"))(
            "s,second", "second param",
            cxxopts::value<double>()->default_value("0"))("h,help",
                                                          "Print usage");

        auto result = options.parse(argc, argv);

        if (result.count("help") != 0 ||
            (result.count("first") == 0 || result.count("second") == 0)) {
            std::cout << options.help() << std::endl;
            exit(0);
        }

        double res = fts::sum(result["first"].as<double>(),
                              result["second"].as<double>());
        std::cout << res << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
