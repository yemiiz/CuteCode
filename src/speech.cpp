#include "speechmanager.h"
#include <iostream>
using namespace std;
speechmanager::speechmanager() // 不能加分号
{
    this->init_speech();
    this->create_speaker();
}
void speechmanager::show_menu()
{
    cout << "************************************" << endl;
    cout << "*********  欢迎使用演讲管理系统 *****" << endl;
    cout << "*********  1.开始演讲比赛  *********" << endl;
    cout << "*********  2.查看往届记录  *********" << endl;
    cout << "*********  3.清空比赛记录  *********" << endl;
    cout << "*********  0.退出比赛系统  *********" << endl;
    cout << "************************************" << endl;
}
void speechmanager::exit_system()
{
    cout << "欢迎下次使用！" << endl;
    system("pause");
}

speechmanager::~speechmanager()
{
}
void speechmanager::init_speech() {
    this->pre_speaker.clear();
    this->final_speaker.clear();
    this->win_speaker.clear();
    this->m_speaker.clear();

    this->m_index = 1;
};
void speechmanager::create_speaker()
{
    string nameseed = "ABCDEFGHIJKL";
    for (int i = 0; i < nameseed.size();i++)
    {
        string name = "选手";
        name += nameseed[i];
        speaker sp;
        sp.m_name = name;
        for (int j = 0; j < 2;j++)
        {
            sp.m_score[j] = 0;
        }
        this->pre_speaker.push_back(100001 + i);
        this->m_speaker.insert(std::make_pair(100001 + i, sp));
        this->m_index++;
    }
}