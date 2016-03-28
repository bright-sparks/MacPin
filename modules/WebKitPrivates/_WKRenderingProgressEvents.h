/*
 *  https://github.com/WebKit/webkit/blob/67985c34ffc405f69995e8a35f9c38618625c403/Source/WebKit2/Shared/API/Cocoa/_WKRenderingProgressEvents.h
 * Copyright (C) 2014 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#import "WKFoundation.h"

#if WK_API_ENABLED

typedef NS_OPTIONS(NSUInteger, _WKRenderingProgressEvents) {
    _WKRenderingProgressEventFirstLayout = 1 << 0,
    _WKRenderingProgressEventFirstVisuallyNonEmptyLayout WK_ENUM_AVAILABLE(10_11, 9_0) = 1 << 1,
    _WKRenderingProgressEventFirstPaintWithSignificantArea = 1 << 2,
    _WKRenderingProgressEventReachedSessionRestorationRenderTreeSizeThreshold WK_ENUM_AVAILABLE(10_11, 9_0) = 1 << 3,
    _WKRenderingProgressEventFirstLayoutAfterSuppressedIncrementalRendering WK_ENUM_AVAILABLE(10_11, 9_0) = 1 << 4,
    _WKRenderingProgressEventFirstPaintAfterSuppressedIncrementalRendering WK_ENUM_AVAILABLE(10_11, 9_0) = 1 << 5,
    _WKRenderingProgressEventFirstPaint WK_ENUM_AVAILABLE(10_11, 9_0) = 1 << 6,
} WK_ENUM_AVAILABLE(10_10, 8_0);

#endif
