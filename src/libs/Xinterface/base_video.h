#ifndef _BASE_VIDEO_H_
#define _BASE_VIDEO_H_

#include "dx8render.h"
#include "vmodule_api.h"

class xiBaseVideo : public ENTITY
{
  public:
    virtual void SetShowVideo(bool bShowVideo)
    {
    }
    virtual IDirect3DTexture9 *GetCurrentVideoTexture()
    {
        return null;
    }
};

#endif