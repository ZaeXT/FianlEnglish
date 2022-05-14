#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>
using namespace std;
void Exam7U()
{
    cout << "您选择： 七上 单词" << endl;
    cout << "请选择 Modules"
         << "M 1 - 12(Revision module A&B 对应 M 11&12)" << endl;
    int chs;
    cin >> chs;
    system("cls");
    if (chs == 1)
    {
        string arr[25][2] =
            {
                {"n. 中国人；汉语\nadj. 中国的；中国人的", "Chinese"},
                {"prep. 从……来，来自", "from"},
                {"adv. 在哪里，去哪里", "where"},
                {"n. 年龄；年", "year"},
                {"prep. 关于", "about"},
                {"n. 女士", "Ms"},
                {"美国；美洲", "America"},
                {"adv. 不，不是，没有", "not"},
                {"英格兰", "England"},
                {"int. 嘿、喂", "hi"},
                {"n. 美国人；美洲人\nadj. 美国的；美国人的；美洲", "American"},
                {"pron. 我们的", "our"},
                {"n. 年级", "grade"},
                {"pron. 他", "he"},
                {"中国", "China"},
                {"pron. 大家；每人", "everyone"},
                {"n. 首都；省会", "capital"},
                {"conj. 但是，然而", "but"},
                {"adv. 很；非常", "very"},
                {"adj. 大的", "big"},
                {"n. 城市", "city"},
                {"adj. 小的", "small"},
                {"adj. 第一（位）的，首要的\nadv. 先；首先", "first"},
                {"adj. 最后的；最末的", "last"},
                {"pron. 每个；全体", "all"}};
        for (int i = 0; i < 25; i++)
        {
            cout << arr[i][0] << endl;
            cout << "请输入单词：" << endl;
            string words;
            Err:
            cin >> words;
            if (words == arr[i][1])
            {
                cout << "正确！请按任意键继续" << endl;
                cin.get();
                system("cls");
            }
            else
            {
                cout << "错误！请重新输入！！！" << endl;
                goto Err;
            }
            
        }
        cout << "测试完成！" << endl;
    }
    else
    {
        cout << "NULL..." << endl;
    }
}

void Exam()
{
    cout << "请选择学段：\n"
         << "1、七上\n"
         << "2、..."
         << endl;
    int chsa;
    cin >> chsa;
    system("cls");
    if (chsa == 1)
    {
        Exam7U();
    }
    else
    {
        cout << "NULL.." << endl;
    }
    
}