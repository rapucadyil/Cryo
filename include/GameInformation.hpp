#include <stdint.h>


class GameInformation {

private:
    int32_t m_ScreenWidth;
    int32_t m_ScreenHeight;

    const char * m_AppTitle;

public:
    GameInformation();
    GameInformation(int32_t width, int32_t height, const char *title);
    ~GameInformation();

    int32_t GetScreenWidth() { return this->m_ScreenWidth;}
    void SetScreenWidth(int32_t value) {this->m_ScreenWidth = value;}

    int32_t GetScreenHeight() { return this->m_ScreenHeight;}
    void SetScreenHeight(int32_t value) {this->m_ScreenHeight = value;}

    const char * GetAppTitle() { return this->m_AppTitle;}
    void SetAppTitle(const char * value) {this->m_AppTitle = value;}
};