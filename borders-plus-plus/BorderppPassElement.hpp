#pragma once
#include <hyprland/src/render/pass/PassElement.hpp>

class CBordersPlusPlus;

class CBorderPPPassElement : public IPassElement {
  public:
    struct SBorderPPData {
        CBordersPlusPlus* deco = nullptr;
        float             a    = 1.F;
    };

    CBorderPPPassElement(const SBorderPPData& data_);
    virtual ~CBorderPPPassElement() = default;

    virtual std::vector<UP<IPassElement>> draw();
    virtual bool        needsLiveBlur();
    virtual bool        needsPrecomputeBlur();
    virtual ePassElementType type() {
        return EK_CUSTOM;
    }

    virtual const char* passName() {
        return "CBorderPPPassElement";
    }

  private:
    SBorderPPData data;
};
