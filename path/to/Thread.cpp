#include "Kangaroo.h"
#include <iostream>
#include <chrono>

bool Kangaroo::hasStarted(TH_PARAM *p) {
    return m_bStarted;
}

bool Kangaroo::isWaiting(TH_PARAM *p) {
    return m_bWaiting;
}

uint64_t Kangaroo::getGPUCount() {
    return m_nGPUCount;
}

uint64_t Kangaroo::getCPUCount() {
    return m_nCPUCount;
}

std::string Kangaroo::GetTimeStr(double dTime) {
    auto now = std::chrono::system_clock::now();
    auto epoch = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch());
    auto ms = static_cast<uint64_t>(epoch.count());

    char buffer[20];
    sprintf(buffer, "%lld", ms);
    return std::string(buffer);
}

void Kangaroo::ProcessServer() {
    // Process server logic here
}

void Kangaroo::Process(TH_PARAM *params, std::string unit) {
    // Process logic here
}
