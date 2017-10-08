#pragma once
#include "Types.h"
#include <cmath>

//��������һЩ��Ϸ�еĹ�ʽ������ʹ����Ʒ��Ч�����˺���ʽ��
//ͨ����˵Ӧ��ȫ���Ǿ�̬����
class GameUtil
{
private:
    GameUtil();
    ~GameUtil();
    static GameUtil game_util_;
    std::vector<int> level_up_list_;
    //std::vector<int> level_up_list_;
public:
    //��������ֵ
    static int limit(int current, int min_value, int max_value)
    {
        if (current < min_value) { current = min_value; }
        if (current > max_value) { current = max_value; }
        return current;
    }

    //limit2��ֱ���޸�����ֵ������������
    static void limit2(int& current, int min_value, int max_value)
    {
        current = limit(current, min_value, max_value);
    }

    static void limit2(int16_t& current, int min_value, int max_value)
    {
        current = limit(current, min_value, max_value);
    }

    //����ĳ����ֵ��λ��
    static int digit(int x)
    {
        int n = floor(log10(0.5 + abs(x)));
        if (x >= 0)
        {
            return n;
        }
        else
        {
            return n + 1;
        }
    }

    static bool canUseItem(Role* r, Item* i);
    static void useItem(Role* r, Item* i);
    static void levelUp(Role* r);
    static bool canLevelUp(Role* r);
    static bool canLearnBook(Role* r);

    //����3�������ķ���ֵΪ��Ҫ��ʾ����ֵ
    static int medcine(Role* r1, Role* r2);
    static int detoxification(Role* r1, Role* r2);
    static int usePoison(Role* r1, Role* r2);
};
