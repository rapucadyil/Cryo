#include "../include/GameInformation.hpp"

GameInformation::GameInformation() { }

GameInformation::GameInformation(int32_t width, int32_t height, const char *title) {
    this->m_ScreenWidth = width;
    this->m_ScreenHeight = height;
    this->m_AppTitle = title;
}

GameInformation::~GameInformation() {
    delete this->m_AppTitle;
}