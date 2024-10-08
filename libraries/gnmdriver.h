// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h" 

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::GnmDriver {

int PS4_SYSV_ABI sceGnmAddEqEvent();
int PS4_SYSV_ABI sceGnmAreSubmitsAllowed();
int PS4_SYSV_ABI sceGnmBeginWorkload();
int PS4_SYSV_ABI sceGnmComputeWaitOnAddress();
int PS4_SYSV_ABI sceGnmComputeWaitSemaphore();
int PS4_SYSV_ABI sceGnmCreateWorkloadStream();
int PS4_SYSV_ABI sceGnmDebuggerGetAddressWatch();
int PS4_SYSV_ABI sceGnmDebuggerHaltWavefront();
int PS4_SYSV_ABI sceGnmDebuggerReadGds();
int PS4_SYSV_ABI sceGnmDebuggerReadSqIndirectRegister();
int PS4_SYSV_ABI sceGnmDebuggerResumeWavefront();
int PS4_SYSV_ABI sceGnmDebuggerResumeWavefrontCreation();
int PS4_SYSV_ABI sceGnmDebuggerSetAddressWatch();
int PS4_SYSV_ABI sceGnmDebuggerWriteGds();
int PS4_SYSV_ABI sceGnmDebuggerWriteSqIndirectRegister();
int PS4_SYSV_ABI sceGnmDebugHardwareStatus();
int PS4_SYSV_ABI sceGnmDeleteEqEvent();
int PS4_SYSV_ABI sceGnmDestroyWorkloadStream();
int PS4_SYSV_ABI sceGnmDingDong();
int PS4_SYSV_ABI sceGnmDingDongForWorkload();
int PS4_SYSV_ABI sceGnmDisableMipStatsReport();
int PS4_SYSV_ABI sceGnmDispatchDirect();
int PS4_SYSV_ABI sceGnmDispatchIndirect();
int PS4_SYSV_ABI sceGnmDispatchIndirectOnMec();
int PS4_SYSV_ABI sceGnmDispatchInitDefaultHardwareState();
int PS4_SYSV_ABI sceGnmDrawIndex();
int PS4_SYSV_ABI sceGnmDrawIndexAuto();
int PS4_SYSV_ABI sceGnmDrawIndexIndirect();
int PS4_SYSV_ABI sceGnmDrawIndexIndirectCountMulti();
int PS4_SYSV_ABI sceGnmDrawIndexIndirectMulti();
int PS4_SYSV_ABI sceGnmDrawIndexMultiInstanced();
int PS4_SYSV_ABI sceGnmDrawIndexOffset();
int PS4_SYSV_ABI sceGnmDrawIndirect();
int PS4_SYSV_ABI sceGnmDrawIndirectCountMulti();
int PS4_SYSV_ABI sceGnmDrawIndirectMulti();
int PS4_SYSV_ABI sceGnmDrawInitDefaultHardwareState();
int PS4_SYSV_ABI sceGnmDrawInitDefaultHardwareState175();
int PS4_SYSV_ABI sceGnmDrawInitDefaultHardwareState200();
int PS4_SYSV_ABI sceGnmDrawInitDefaultHardwareState350();
int PS4_SYSV_ABI sceGnmDrawInitToDefaultContextState();
int PS4_SYSV_ABI sceGnmDrawInitToDefaultContextState400();
int PS4_SYSV_ABI sceGnmDrawOpaqueAuto();
int PS4_SYSV_ABI sceGnmDriverCaptureInProgress();
int PS4_SYSV_ABI sceGnmDriverInternalRetrieveGnmInterface();
int PS4_SYSV_ABI sceGnmDriverInternalRetrieveGnmInterfaceForGpuDebugger();
int PS4_SYSV_ABI sceGnmDriverInternalRetrieveGnmInterfaceForGpuException();
int PS4_SYSV_ABI sceGnmDriverInternalRetrieveGnmInterfaceForHDRScopes();
int PS4_SYSV_ABI sceGnmDriverInternalRetrieveGnmInterfaceForReplay();
int PS4_SYSV_ABI sceGnmDriverInternalRetrieveGnmInterfaceForResourceRegistration();
int PS4_SYSV_ABI sceGnmDriverInternalRetrieveGnmInterfaceForValidation();
int PS4_SYSV_ABI sceGnmDriverInternalVirtualQuery();
int PS4_SYSV_ABI sceGnmDriverTraceInProgress();
int PS4_SYSV_ABI sceGnmDriverTriggerCapture();
int PS4_SYSV_ABI sceGnmEndWorkload();
int PS4_SYSV_ABI sceGnmFindResourcesPublic();
int PS4_SYSV_ABI sceGnmFlushGarlic();
int PS4_SYSV_ABI sceGnmGetCoredumpAddress();
int PS4_SYSV_ABI sceGnmGetCoredumpMode();
int PS4_SYSV_ABI sceGnmGetCoredumpProtectionFaultTimestamp();
int PS4_SYSV_ABI sceGnmGetDbgGcHandle();
int PS4_SYSV_ABI sceGnmGetDebugTimestamp();
int PS4_SYSV_ABI sceGnmGetEqEventType();
int PS4_SYSV_ABI sceGnmGetEqTimeStamp();
int PS4_SYSV_ABI sceGnmGetGpuBlockStatus();
int PS4_SYSV_ABI sceGnmGetGpuCoreClockFrequency();
int PS4_SYSV_ABI sceGnmGetGpuInfoStatus();
int PS4_SYSV_ABI sceGnmGetLastWaitedAddress();
int PS4_SYSV_ABI sceGnmGetNumTcaUnits();
int PS4_SYSV_ABI sceGnmGetOffChipTessellationBufferSize();
int PS4_SYSV_ABI sceGnmGetOwnerName();
int PS4_SYSV_ABI sceGnmGetPhysicalCounterFromVirtualized();
int PS4_SYSV_ABI sceGnmGetProtectionFaultTimeStamp();
int PS4_SYSV_ABI sceGnmGetResourceBaseAddressAndSizeInBytes();
int PS4_SYSV_ABI sceGnmGetResourceName();
int PS4_SYSV_ABI sceGnmGetResourceShaderGuid();
int PS4_SYSV_ABI sceGnmGetResourceType();
int PS4_SYSV_ABI sceGnmGetResourceUserData();
int PS4_SYSV_ABI sceGnmGetShaderProgramBaseAddress();
int PS4_SYSV_ABI sceGnmGetShaderStatus();
int PS4_SYSV_ABI sceGnmGetTheTessellationFactorRingBufferBaseAddress();
int PS4_SYSV_ABI sceGnmGpuPaDebugEnter();
int PS4_SYSV_ABI sceGnmGpuPaDebugLeave();
int PS4_SYSV_ABI sceGnmInsertDingDongMarker();
int PS4_SYSV_ABI sceGnmInsertPopMarker();
int PS4_SYSV_ABI sceGnmInsertPushColorMarker();
int PS4_SYSV_ABI sceGnmInsertPushMarker();
int PS4_SYSV_ABI sceGnmInsertSetColorMarker();
int PS4_SYSV_ABI sceGnmInsertSetMarker();
int PS4_SYSV_ABI sceGnmInsertThreadTraceMarker();
int PS4_SYSV_ABI sceGnmInsertWaitFlipDone();
int PS4_SYSV_ABI sceGnmIsCoredumpValid();
int PS4_SYSV_ABI sceGnmIsUserPaEnabled();
int PS4_SYSV_ABI sceGnmLogicalCuIndexToPhysicalCuIndex();
int PS4_SYSV_ABI sceGnmLogicalCuMaskToPhysicalCuMask();
int PS4_SYSV_ABI sceGnmLogicalTcaUnitToPhysical();
int PS4_SYSV_ABI sceGnmMapComputeQueue();
int PS4_SYSV_ABI sceGnmMapComputeQueueWithPriority();
int PS4_SYSV_ABI sceGnmPaDisableFlipCallbacks();
int PS4_SYSV_ABI sceGnmPaEnableFlipCallbacks();
int PS4_SYSV_ABI sceGnmPaHeartbeat();
int PS4_SYSV_ABI sceGnmQueryResourceRegistrationUserMemoryRequirements();
int PS4_SYSV_ABI sceGnmRaiseUserExceptionEvent();
int PS4_SYSV_ABI sceGnmRegisterGdsResource();
int PS4_SYSV_ABI sceGnmRegisterGnmLiveCallbackConfig();
int PS4_SYSV_ABI sceGnmRegisterOwner();
int PS4_SYSV_ABI sceGnmRegisterResource();
int PS4_SYSV_ABI sceGnmRequestFlipAndSubmitDone();
int PS4_SYSV_ABI sceGnmRequestFlipAndSubmitDoneForWorkload();
int PS4_SYSV_ABI sceGnmRequestMipStatsReportAndReset();
int PS4_SYSV_ABI sceGnmResetVgtControl();
int PS4_SYSV_ABI sceGnmSdmaClose();
int PS4_SYSV_ABI sceGnmSdmaConstFill();
int PS4_SYSV_ABI sceGnmSdmaCopyLinear();
int PS4_SYSV_ABI sceGnmSdmaCopyTiled();
int PS4_SYSV_ABI sceGnmSdmaCopyWindow();
int PS4_SYSV_ABI sceGnmSdmaFlush();
int PS4_SYSV_ABI sceGnmSdmaGetMinCmdSize();
int PS4_SYSV_ABI sceGnmSdmaOpen();
int PS4_SYSV_ABI sceGnmSetCsShader();
int PS4_SYSV_ABI sceGnmSetCsShaderWithModifier();
int PS4_SYSV_ABI sceGnmSetEmbeddedPsShader();
int PS4_SYSV_ABI sceGnmSetEmbeddedVsShader();
int PS4_SYSV_ABI sceGnmSetEsShader();
int PS4_SYSV_ABI sceGnmSetGsRingSizes();
int PS4_SYSV_ABI sceGnmSetGsShader();
int PS4_SYSV_ABI sceGnmSetHsShader();
int PS4_SYSV_ABI sceGnmSetLsShader();
int PS4_SYSV_ABI sceGnmSetPsShader();
int PS4_SYSV_ABI sceGnmSetPsShader350();
int PS4_SYSV_ABI sceGnmSetResourceRegistrationUserMemory();
int PS4_SYSV_ABI sceGnmSetResourceUserData();
int PS4_SYSV_ABI sceGnmSetSpiEnableSqCounters();
int PS4_SYSV_ABI sceGnmSetSpiEnableSqCountersForUnitInstance();
int PS4_SYSV_ABI sceGnmSetupMipStatsReport();
int PS4_SYSV_ABI sceGnmSetVgtControl();
int PS4_SYSV_ABI sceGnmSetVsShader();
int PS4_SYSV_ABI sceGnmSetWaveLimitMultiplier();
int PS4_SYSV_ABI sceGnmSetWaveLimitMultipliers();
int PS4_SYSV_ABI sceGnmSpmEndSpm();
int PS4_SYSV_ABI sceGnmSpmInit();
int PS4_SYSV_ABI sceGnmSpmInit2();
int PS4_SYSV_ABI sceGnmSpmSetDelay();
int PS4_SYSV_ABI sceGnmSpmSetMuxRam();
int PS4_SYSV_ABI sceGnmSpmSetMuxRam2();
int PS4_SYSV_ABI sceGnmSpmSetSelectCounter();
int PS4_SYSV_ABI sceGnmSpmSetSpmSelects();
int PS4_SYSV_ABI sceGnmSpmSetSpmSelects2();
int PS4_SYSV_ABI sceGnmSpmStartSpm();
int PS4_SYSV_ABI sceGnmSqttFini();
int PS4_SYSV_ABI sceGnmSqttFinishTrace();
int PS4_SYSV_ABI sceGnmSqttGetBcInfo();
int PS4_SYSV_ABI sceGnmSqttGetGpuClocks();
int PS4_SYSV_ABI sceGnmSqttGetHiWater();
int PS4_SYSV_ABI sceGnmSqttGetStatus();
int PS4_SYSV_ABI sceGnmSqttGetTraceCounter();
int PS4_SYSV_ABI sceGnmSqttGetTraceWptr();
int PS4_SYSV_ABI sceGnmSqttGetWrapCounts();
int PS4_SYSV_ABI sceGnmSqttGetWrapCounts2();
int PS4_SYSV_ABI sceGnmSqttGetWritebackLabels();
int PS4_SYSV_ABI sceGnmSqttInit();
int PS4_SYSV_ABI sceGnmSqttSelectMode();
int PS4_SYSV_ABI sceGnmSqttSelectTarget();
int PS4_SYSV_ABI sceGnmSqttSelectTokens();
int PS4_SYSV_ABI sceGnmSqttSetCuPerfMask();
int PS4_SYSV_ABI sceGnmSqttSetDceEventWrite();
int PS4_SYSV_ABI sceGnmSqttSetHiWater();
int PS4_SYSV_ABI sceGnmSqttSetTraceBuffer2();
int PS4_SYSV_ABI sceGnmSqttSetTraceBuffers();
int PS4_SYSV_ABI sceGnmSqttSetUserData();
int PS4_SYSV_ABI sceGnmSqttSetUserdataTimer();
int PS4_SYSV_ABI sceGnmSqttStartTrace();
int PS4_SYSV_ABI sceGnmSqttStopTrace();
int PS4_SYSV_ABI sceGnmSqttSwitchTraceBuffer();
int PS4_SYSV_ABI sceGnmSqttSwitchTraceBuffer2();
int PS4_SYSV_ABI sceGnmSqttWaitForEvent();
int PS4_SYSV_ABI sceGnmSubmitAndFlipCommandBuffers();
int PS4_SYSV_ABI sceGnmSubmitAndFlipCommandBuffersForWorkload();
int PS4_SYSV_ABI sceGnmSubmitCommandBuffers();
int PS4_SYSV_ABI sceGnmSubmitCommandBuffersForWorkload();
int PS4_SYSV_ABI sceGnmSubmitDone();
int PS4_SYSV_ABI sceGnmUnmapComputeQueue();
int PS4_SYSV_ABI sceGnmUnregisterAllResourcesForOwner();
int PS4_SYSV_ABI sceGnmUnregisterOwnerAndResources();
int PS4_SYSV_ABI sceGnmUnregisterResource();
int PS4_SYSV_ABI sceGnmUpdateGsShader();
int PS4_SYSV_ABI sceGnmUpdateHsShader();
int PS4_SYSV_ABI sceGnmUpdatePsShader();
int PS4_SYSV_ABI sceGnmUpdatePsShader350();
int PS4_SYSV_ABI sceGnmUpdateVsShader();
int PS4_SYSV_ABI sceGnmValidateCommandBuffers();
int PS4_SYSV_ABI sceGnmValidateDisableDiagnostics();
int PS4_SYSV_ABI sceGnmValidateDisableDiagnostics2();
int PS4_SYSV_ABI sceGnmValidateDispatchCommandBuffers();
int PS4_SYSV_ABI sceGnmValidateDrawCommandBuffers();
int PS4_SYSV_ABI sceGnmValidateGetDiagnosticInfo();
int PS4_SYSV_ABI sceGnmValidateGetDiagnostics();
int PS4_SYSV_ABI sceGnmValidateGetVersion();
int PS4_SYSV_ABI sceGnmValidateOnSubmitEnabled();
int PS4_SYSV_ABI sceGnmValidateResetState();
int PS4_SYSV_ABI sceGnmValidationRegisterMemoryCheckCallback();
int PS4_SYSV_ABI sceRazorCaptureCommandBuffersOnlyImmediate();
int PS4_SYSV_ABI sceRazorCaptureCommandBuffersOnlySinceLastFlip();
int PS4_SYSV_ABI sceRazorCaptureImmediate();
int PS4_SYSV_ABI sceRazorCaptureSinceLastFlip();
int PS4_SYSV_ABI sceRazorIsLoaded();
int PS4_SYSV_ABI Func_063D065A2D6359C3();
int PS4_SYSV_ABI Func_0CABACAFB258429D();
int PS4_SYSV_ABI Func_150CF336FC2E99A3();
int PS4_SYSV_ABI Func_17CA687F9EE52D49();
int PS4_SYSV_ABI Func_1870B89F759C6B45();
int PS4_SYSV_ABI Func_26F9029EF68A955E();
int PS4_SYSV_ABI Func_301E3DBBAB092DB0();
int PS4_SYSV_ABI Func_30BAFE172AF17FEF();
int PS4_SYSV_ABI Func_3E6A3E8203D95317();
int PS4_SYSV_ABI Func_40FEEF0C6534C434();
int PS4_SYSV_ABI Func_416B9079DE4CBACE();
int PS4_SYSV_ABI Func_4774D83BB4DDBF9A();
int PS4_SYSV_ABI Func_50678F1CCEEB9A00();
int PS4_SYSV_ABI Func_54A2EC5FA4C62413();
int PS4_SYSV_ABI Func_5A9C52C83138AE6B();
int PS4_SYSV_ABI Func_5D22193A31EA1142();
int PS4_SYSV_ABI Func_725A36DEBB60948D();
int PS4_SYSV_ABI Func_8021A502FA61B9BB();
int PS4_SYSV_ABI Func_9D002FE0FA40F0E6();
int PS4_SYSV_ABI Func_9D297F36A7028B71();
int PS4_SYSV_ABI Func_A2D7EC7A7BCF79B3();
int PS4_SYSV_ABI Func_AA12A3CB8990854A();
int PS4_SYSV_ABI Func_ADC8DDC005020BC6();
int PS4_SYSV_ABI Func_B0A8688B679CB42D();
int PS4_SYSV_ABI Func_B489020B5157A5FF();
int PS4_SYSV_ABI Func_BADE7B4C199140DD();
int PS4_SYSV_ABI Func_D1511B9DCFFB3DD9();
int PS4_SYSV_ABI Func_D53446649B02E58E();
int PS4_SYSV_ABI Func_D8B6E8E28E1EF0A3();
int PS4_SYSV_ABI Func_D93D733A19DD7454();
int PS4_SYSV_ABI Func_DE995443BC2A8317();
int PS4_SYSV_ABI Func_DF6E9528150C23FF();
int PS4_SYSV_ABI Func_ECB4C6BA41FE3350();
int PS4_SYSV_ABI sceGnmDebugModuleReset();
int PS4_SYSV_ABI sceGnmDebugReset();
int PS4_SYSV_ABI Func_C4C328B7CF3B4171();
int PS4_SYSV_ABI sceGnmDrawInitToDefaultContextStateInternalCommand();
int PS4_SYSV_ABI sceGnmDrawInitToDefaultContextStateInternalSize();
int PS4_SYSV_ABI sceGnmFindResources();
int PS4_SYSV_ABI sceGnmGetResourceRegistrationBuffers();
int PS4_SYSV_ABI sceGnmRegisterOwnerForSystem();
int PS4_SYSV_ABI Func_1C43886B16EE5530();
int PS4_SYSV_ABI Func_81037019ECCD0E01();
int PS4_SYSV_ABI Func_BFB41C057478F0BF();
int PS4_SYSV_ABI Func_E51D44DB8151238C();
int PS4_SYSV_ABI Func_F916890425496553();

void RegisterlibSceGnmDriver(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::GnmDriver