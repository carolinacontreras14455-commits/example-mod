#include <Geode/Geode.hpp>
using namespace geode::prelude;

class $modify(PlayLayer) {
    void update(float dt) {
        PlayLayer::update(dt);
        
        if (!m_player1 || m_player1->m_isDead) return;
        
        float percent = this->getCurrentPercent();
        
        if (percent >= 0.0f) {
            m_player1->killPlayer(false);
        }
    }
};
