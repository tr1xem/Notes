#include <iostream>
#include <map>
#include <utility>

int main() {
    std::multimap<std::string, int> mymultimap;
    mymultimap.insert(std::make_pair("Saumya", 10));
    mymultimap.insert(std::make_pair("Saumya", 11));
    mymultimap.insert(std::make_pair("Saumya", 12));
    mymultimap.insert(std::make_pair("Saumya", 13));
    mymultimap.insert(std::make_pair("Great", 15));
    mymultimap.insert(std::make_pair("Nick", 17));

    std::cout << "================" << std::endl;
    for (auto& [key, value] : mymultimap) {
        std::cout << key << "," << value << std::endl;
    }
    std::cout << "================" << std::endl;

    auto it = mymultimap.find("Saumya");

    // This would erase all Saumya from the map
    // mymultimap.erase("Saumya"); This would rease 1st Saumya from the map
    // which it points to
    std::cout << " COUNT IS " << mymultimap.count("Saumya") << std::endl;
    mymultimap.erase(it);
    std::cout << " COUNT IS " << mymultimap.count("Saumya") << std::endl;

    // Priting between bound
    auto first = mymultimap.lower_bound("Saumya");
    auto last = mymultimap.upper_bound("Saumya");

    std::cout << "================" << std::endl;
    // NOLINTNEXTLINE(cppcoreguidelines-avoid-do-while)
    do {
        std::cout << first->first << "," << first->second << std::endl;
        first++;
    } while (first != last);
    std::cout << "================" << std::endl;

    // More efficent way to doing it
    auto range = mymultimap.equal_range("Saumya");
    std::cout << "================" << std::endl;
    // NOLINTNEXTLINE(cppcoreguidelines-avoid-do-while)
    do {
        std::cout << range.first->first << "," << range.first->second
                  << std::endl;
        range.first++;
    } while (range.first != range.second);
    std::cout << "================" << std::endl;

    return 0;
}
