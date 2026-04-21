#pragma once
#include <hyprland/src/render/pass/PassElement.hpp>

class CHyprBar;

class CBarPassElement : public IPassElement {
  public:
    struct SBarData {
        CHyprBar* deco = nullptr;
        float     a    = 1.F;
    };

    CBarPassElement(const SBarData& data_);
    virtual ~CBarPassElement() = default;

    virtual std::vector<UP<IPassElement>> draw();
    virtual bool                needsLiveBlur();
    virtual bool                needsPrecomputeBlur();
    virtual std::optional<CBox> boundingBox();
    virtual ePassElementType    type() {
        return EK_CUSTOM;
    }

    virtual const char*         passName() {
        return "CBarPassElement";
    }

  private:
    SBarData data;
};
