#ifndef _SHADOW_H_
#define _SHADOW_H_

#include "collide.h"
#include "dx8render.h"
#include "geos.h"
#include "model.h"
#include "vmodule_api.h"

class SHADOW : public ENTITY
{
    VDX8RENDER *rs;
    COLLIDE *col;
    void FindPlanes(const CMatrix &view, const CMatrix &proj);
    PLANE planes[6];
    ENTITY_ID entity;
    void Smooth();
    float shading;
    unsigned long blendValue;

  public:
#define SHADOW_FVF (D3DFVF_XYZ | D3DFVF_TEXTUREFORMAT2 | D3DFVF_TEX1)
    struct SHADOW_VERTEX
    {
        CVECTOR pos;
        float tu, tv;
    };
    SHADOW();
    ~SHADOW();
    bool Init();
    void Realize(dword Delta_Time);
    dword _cdecl ProcessMessage(MESSAGE &message);
    void LostRender();
    void RestoreRender();
};

// API_MODULE_START("SHADOW")
//	CREATE_CLASS(0,SHADOW)
// API_MODULE_END

#endif