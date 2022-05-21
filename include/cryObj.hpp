#include <SFML/Graphics.hpp>
#include <vector>

class cryOBJECT {

private:

    sf::Vector2f m_Position;

    float m_ScaleX;
    float m_ScaleY;
    float m_ScaleZ;
    
    float m_RotationX;
    float m_RotationY;
    float m_RotationZ;

    const char *m_Name;
    std::vector<const char *> m_Tags;


public:

    cryOBJECT(float x, float y, float scx, float scy, float scz, float rotx, 
                float roty, float rotz, const char *name, const char *tag);

    cryOBJECT(float x, float y, float scx, float scy, float scz, float rotx, 
                float roty, float rotz, const char *name, std::vector<const char*> tags);
    
    ~cryOBJECT();

    void Tick(float dt);

public:

    sf::Vector2f GetPosition() {return this->m_Position;}
    void SetPosition(sf::Vector2f value) {this->m_Position = value;}

    float Get_XScale() {return this->m_ScaleX;}
    void Set_XScale(float value) {this->m_ScaleX = value;}

    float Get_YScale() {return this->m_ScaleY;}
    void Set_YScale(float value) {this->m_ScaleY = value;}

    float Z_Scale() {return this->m_ScaleZ;}

};