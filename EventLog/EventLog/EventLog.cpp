// EventLog.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"


int main()
{
    LPCWSTR message = L"Hello from EventLogTest";

    HANDLE eventLog = RegisterEventSource(NULL, L"EventLogTest");
    ReportEvent(eventLog, EVENTLOG_INFORMATION_TYPE, 0, 0, NULL, 1, 0, &message, NULL);
    DeregisterEventSource(eventLog);

    return 0;
}
