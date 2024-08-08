#include <iostream>
#include <string>

class Cat {
private:
    std::string name; 
public:
    Cat(const std::string& name) : name(name) {}

    // 重载 + 运算符
    Cat operator+(const Cat& other) const {
        return Cat(name.substr(0, name.length() - 3) + other.name);
    }

    // 显示猫的名字
    void show() const {
        std::cout << name << std::endl;
    }
};

int main() {
    Cat blackCat("blackcat");
    Cat whiteCat("whitecat");
    Cat blackWhiteCat = blackCat + whiteCat;
    blackWhiteCat.show(); 

    return 0;
}

