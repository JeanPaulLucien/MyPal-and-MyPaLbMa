/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef XREChildData_h
#define XREChildData_h

#include "mozilla/UniquePtr.h"

#ifdef THE_GMP
namespace mozilla {
namespace gmp {
class GMPLoader;
}
}
#endif
/**
 * Data needed to start a child process.
 */
struct XREChildData
{
#if !defined(MOZ_WIDGET_ANDROID) && defined(THE_GMP)
  /**
   * Used to load the GMP binary.
   */
  mozilla::UniquePtr<mozilla::gmp::GMPLoader> gmpLoader;
#endif

};

#endif // XREChildData_h
