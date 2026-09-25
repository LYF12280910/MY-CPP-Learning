#include <iostream>
#include <string>
#include <vector>

// 定义一个简单的游戏角色结构体（类似游戏里的角色数据）
struct Character {
    std::string name;
    int health;
    int attack;
};

int main() {
    std::cout << "=== 欢迎来到库洛游戏开发学习计划 ===\n";

    // 创建一个玩家角色
    Character player;
    player.name = "新兵";
    player.health = 100;
    player.attack = 20;

    std::cout << "初始角色信息：" << std::endl;
    std::cout << "名字: " << player.name << "，生命值: " << player.health << "，攻击力: " << player.attack << std::endl;

    // 用 vector 替代数组，展示 C++ 标准库的便利
    std::vector<int> skillDamages = {15, 30, 50};

    std::cout << "\n你的技能伤害列表: ";
    for (int damage : skillDamages) { // 范围 for 循环，现代 C++ 写法
        std::cout << damage << " ";
    }
    std::cout << std::endl;

    std::cout << "\n请输入你在游戏中的新名字: ";
    std::string newName;
    std::cin >> newName; // 获取用户输入

    std::cout << "\n你好，" << newName << "！准备好在 GitHub 开启你的 C++ 修炼之路了吗？\n";
    std::cout << "项目进度：已成功配置 GitHub，成功上传第一个代码！\n";

    return 0;
}
