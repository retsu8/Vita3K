// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include "SceProcessmgr.h"

#include <psp2/kernel/error.h>
#include <psp2/kernel/processmgr.h>

EXPORT(int, sceKernelGetStderr) {
    return unimplemented("sceKernelGetStderr");
}

EXPORT(int, sceKernelGetStdin) {
    return unimplemented("sceKernelGetStdin");
}

EXPORT(int, sceKernelGetStdout) {
    return unimplemented("sceKernelGetStdout");
}

EXPORT(int, sceKernelIsCDialogAvailable) {
    return unimplemented("sceKernelIsCDialogAvailable");
}

EXPORT(int, sceKernelIsGameBudget) {
    return unimplemented("sceKernelIsGameBudget");
}

EXPORT(int, sceKernelLibcClock) {
    return unimplemented("sceKernelLibcClock");
}

EXPORT(int, sceKernelLibcGettimeofday) {
    return unimplemented("sceKernelLibcGettimeofday");
}

EXPORT(int, sceKernelLibcGmtime_r) {
    return unimplemented("sceKernelLibcGmtime_r");
}

EXPORT(int, sceKernelLibcLocaltime_r) {
    return unimplemented("sceKernelLibcLocaltime_r");
}

EXPORT(int, sceKernelLibcMktime) {
    return unimplemented("sceKernelLibcMktime");
}

EXPORT(int, sceKernelLibcTime) {
    return unimplemented("sceKernelLibcTime");
}

EXPORT(int, sceKernelPowerLock) {
    return unimplemented("sceKernelPowerLock");
}

EXPORT(int, sceKernelPowerTick, SceKernelPowerTickType type) {
    return SCE_KERNEL_OK;
}

EXPORT(int, sceKernelPowerUnlock) {
    return unimplemented("sceKernelPowerUnlock");
}

EXPORT(int, sceKernelRegisterProcessTerminationCallback) {
    return unimplemented("sceKernelRegisterProcessTerminationCallback");
}

EXPORT(int, sceKernelUnregisterProcessTerminationCallback) {
    return unimplemented("sceKernelUnregisterProcessTerminationCallback");
}

BRIDGE_IMPL(sceKernelGetStderr)
BRIDGE_IMPL(sceKernelGetStdin)
BRIDGE_IMPL(sceKernelGetStdout)
BRIDGE_IMPL(sceKernelIsCDialogAvailable)
BRIDGE_IMPL(sceKernelIsGameBudget)
BRIDGE_IMPL(sceKernelLibcClock)
BRIDGE_IMPL(sceKernelLibcGettimeofday)
BRIDGE_IMPL(sceKernelLibcGmtime_r)
BRIDGE_IMPL(sceKernelLibcLocaltime_r)
BRIDGE_IMPL(sceKernelLibcMktime)
BRIDGE_IMPL(sceKernelLibcTime)
BRIDGE_IMPL(sceKernelPowerLock)
BRIDGE_IMPL(sceKernelPowerTick)
BRIDGE_IMPL(sceKernelPowerUnlock)
BRIDGE_IMPL(sceKernelRegisterProcessTerminationCallback)
BRIDGE_IMPL(sceKernelUnregisterProcessTerminationCallback)
