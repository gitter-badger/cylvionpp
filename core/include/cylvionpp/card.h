#ifndef CYLVIONPP_CARD_H
#define CYLVIONPP_CARD_H

#include <memory>

namespace cylvionpp {
namespace core {

class Content;
class Actor;

class Card {
public:
    virtual ~Card() = 0;

    virtual unsigned GetCost() const = 0;
    virtual unsigned GetStrength() const = 0;
    virtual unsigned GetVitality() const = 0;

    virtual bool IsCylvan() const = 0;
    virtual bool IsRavage() const = 0;

    virtual bool OnBeforeMove(Content & content, const Actor & actor, std::unique_ptr<Card> && transfer) = 0;
    virtual bool OnUse(Content & content, const Actor & actor, std::unique_ptr<Card> && transfer) = 0;

    static std::unique_ptr<Card> NewFountain(unsigned cost, unsigned strength);
    static std::unique_ptr<Card> NewTree(unsigned cost, unsigned vitality);
    // static std::unique_ptr<Card> NewAnimal(unsigned cost, ...);
    static std::unique_ptr<Card> NewElemental(unsigned strength, unsigned enhancedStrength);
    // static std::unique_ptr<Card> NewSupport(...);
};

} // namespace core
} // namespace cylvionpp

#endif // CYLVIONPP_CARD_H
