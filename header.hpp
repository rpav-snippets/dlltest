#pragma once

#include "thelib_export.h"

struct S { };

inline S* GetS() {
    static S s;
    return &s;
}

THELIB_EXPORT bool isS(const S*);