#pragma once
#ifndef MAINMENU_H
#define MAINMENU_H

#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <cmath>
#include <iostream>
#include <cstdio>

#include "client/uipage.h"

#ifdef _WIN32
#define snprintf sprintf_s
#endif

class MainMenu : public UIPage
{
    public:
        MainMenu(sf::RenderWindow *app);
        void ItemSelected(std::string Label);
};

#endif
