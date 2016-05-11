#pragma once


/**
 * MQL-Interface zum Zugriff auf ein struct PROCESS_INFORMATION.
 *
 *
 * struct PROCESS_INFORMATION {
 *    HANDLE hProcess;              //  4
 *    HANDLE hThread;               //  4
 *    DWORD  dwProcessId;           //  4
 *    DWORD  dwThreadId;            //  4
 * };                               // 16 byte = int[4]
 */
HANDLE WINAPI pi_hProcess (const PROCESS_INFORMATION* pi);
HANDLE WINAPI pi_hThread  (const PROCESS_INFORMATION* pi);
DWORD  WINAPI pi_ProcessId(const PROCESS_INFORMATION* pi);
DWORD  WINAPI pi_ThreadId (const PROCESS_INFORMATION* pi);
