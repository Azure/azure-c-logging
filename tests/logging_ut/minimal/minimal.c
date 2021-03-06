// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "windows.h"

#include "c_logging/xlogging.h"

int main(void)
{
    LogCritical("Hello World from LogCritical, here's a value: %d", 4546);

    LogError("Hello World from LogError, here's a value: %d", 42);

    LogWarning("Hello World from LogWarning, here's a value: %d", 4242);

    LogInfo("Hello World from LogInfo, here's a value: %d", 0x42);

    LogVerbose("Hello World from LogVerbose, here's a value: %d", 0x4242);

    SetLastError(ERROR_ACCESS_DENIED);

    LogLastError("Hello World from LogLastError, some access was denied! here's a value: 0x%x", '3');

    SetLastError(ERROR_SUCCESS);

    LogLastError("Hello World from LogLastError, everything is fine now! here's a value: 0x%x", '3');

    return 0;
}
