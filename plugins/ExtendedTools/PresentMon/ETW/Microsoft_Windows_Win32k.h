// This file originally generated by etw_list
//     version:    development branch 1f6ac03eede3e9ab6a6bae5c6de68ad6dd75312d
//     parameters: --show=all --output=c++ --event=TokenCompositionSurfaceObject::Info --event=TokenStateChanged::Info --provider=Microsoft-Windows-Win32k
// Copyright (C) 2020-2021 Intel Corporation
// SPDX-License-Identifier: MIT
#pragma once

namespace Microsoft_Windows_Win32k {

struct __declspec(uuid("{8C416C79-D49B-4F01-A467-E56D3AA8234C}")) GUID_STRUCT;
static const auto GUID = __uuidof(GUID_STRUCT);

enum class Keyword : uint64_t {
    AuditApiCalls                        = 0x400,
    CompatImpact                         = 0x800,
    Updates                              = 0x1000,
    Focus                                = 0x2000,
    UIPI                                 = 0x4000,
    win32Power                           = 0x8000,
    Concurrency                          = 0x10000,
    UserActivity                         = 0x20000,
    UIUnresponsiveness                   = 0x40000,
    ThreadRundown                        = 0x80000,
    Rendering                            = 0x100000,
    ThreadInfo                           = 0x200000,
    MessagePump                          = 0x400000,
    MessagePumpInternalAndInput          = 0x800000,
    TouchInput                           = 0x1000000,
    TimerSurvey                          = 0x2000000,
    PointerInput                         = 0x4000000,
    AutoRotation                         = 0x8000000,
    Contention                           = 0x10000000,
    TimerInfo                            = 0x20000000,
    ComponentHosting                     = 0x40000000,
    TrappedACRendering                   = 0x80000000,
    Fonts                                = 0x100000000,
    NullMessages                         = 0x200000000,
    Visualization                        = 0x400000000,
    DCompDetails                         = 0x800000000,
    PrecisionTouchpad                    = 0x1000000000,
    ContentionTelemetry                  = 0x2000000000,
    ProcessInfo                          = 0x4000000000,
    DCompInput                           = 0x8000000000,
    GdiHandleOperation                   = 0x10000000000,
    UserHandleOperation                  = 0x20000000000,
    WriteClipboard                       = 0x40000000000,
    ReadClipboard                        = 0x80000000000,
    win_ResponseTime                     = 0x1000000000000,
    Microsoft_Windows_Win32k_Tracing     = 0x8000000000000000,
    Microsoft_Windows_Win32k_UIPI        = 0x4000000000000000,
    Microsoft_Windows_Win32k_Power       = 0x2000000000000000,
    Microsoft_Windows_Win32k_Concurrency = 0x1000000000000000,
    Microsoft_Windows_Win32k_Render      = 0x800000000000000,
    Microsoft_Windows_Win32k_Messages    = 0x400000000000000,
    Microsoft_Windows_Win32k_Contention  = 0x200000000000000,
    Microsoft_Windows_Win32k_Operational = 0x100000000000000,
};

enum class Level : uint8_t {
    win_Error         = 0x2,
    win_Informational = 0x4,
    win_Verbose       = 0x5,
};

enum class Channel : uint8_t {
    Microsoft_Windows_Win32k_Tracing     = 0x10,
    Microsoft_Windows_Win32k_UIPI        = 0x11,
    Microsoft_Windows_Win32k_Power       = 0x12,
    Microsoft_Windows_Win32k_Concurrency = 0x13,
    Microsoft_Windows_Win32k_Render      = 0x14,
    Microsoft_Windows_Win32k_Messages    = 0x15,
    Microsoft_Windows_Win32k_Contention  = 0x16,
    Microsoft_Windows_Win32k_Operational = 0x17,
};

// Event descriptors:
#define EVENT_DESCRIPTOR_DECL(name_, id_, version_, channel_, level_, opcode_, task_, keyword_) struct name_ { \
    static uint16_t const Id      = id_; \
    static uint8_t  const Version = version_; \
    static uint8_t  const Channel = channel_; \
    static uint8_t  const Level   = level_; \
    static uint8_t  const Opcode  = opcode_; \
    static uint16_t const Task    = task_; \
    static Keyword  const Keyword = (Keyword) keyword_; \
};

EVENT_DESCRIPTOR_DECL(TokenCompositionSurfaceObject_Info, 0x00c9, 0x01, 0x10, 0x04, 0x00, 0x008a, 0x8000000400001000)
EVENT_DESCRIPTOR_DECL(TokenStateChanged_Info            , 0x012d, 0x01, 0x10, 0x04, 0x00, 0x012d, 0x8000000000001000)

#undef EVENT_DESCRIPTOR_DECL

#pragma warning(push)
#pragma warning(disable: 4200) // nonstandard extension used: zero-sized array in struct

#pragma pack(push)
#pragma pack(1)

template<typename PointerT>
struct TokenCompositionSurfaceObject_Info_Struct {
    PointerT    pToken;
    PointerT    pCompositionSurfaceObject;
    uint32_t    SwapChainIndex;
    uint64_t    PresentCount;
    uint64_t    CompositionSurfaceLuid;
    uint64_t    BindId;
    uint32_t    FlipInterval;   // Added in v1
    uint32_t    DestWidth;      // Added in v1
    uint32_t    DestHeight;     // Added in v1
};

template<typename PointerT>
struct TokenStateChanged_Info_Struct {
    PointerT    pCompositionSurfaceObject;
    uint32_t    SwapChainIndex;
    uint32_t    PresentCount;
    uint64_t    FenceValue;
    uint32_t    NewState;
    uint32_t    IndependentFlip;
    uint32_t    SkipIndependentFlip;
    uint64_t    CompositionSurfaceLuid;
    uint64_t    BindId;
    uint32_t    EarlyComposition; // Added in v1
};

#pragma pack(pop)
#pragma warning(pop)

// Manually added:
enum class TokenState : uint32_t {
    Completed = 2,
    InFrame = 3,
    Confirmed = 4,
    Retired = 5,
    Discarded = 6,
};

}