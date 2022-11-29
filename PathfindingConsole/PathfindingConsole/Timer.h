#pragma once
#include <chrono>
#include <iostream>

class Timer {
public:
    Timer() {
        m_StartTimePoint = std::chrono::high_resolution_clock::now();
    }
    
    Timer(std::string beingTimed) {
        std::cout << "Starting timer for " << beingTimed << std::endl;
        
        m_StartTimePoint = std::chrono::high_resolution_clock::now();
        thingToTime = beingTimed;
    }
    
    ~Timer() {
        // Stop();
    }

    void Stop() {
        auto endTimePoint = std::chrono::high_resolution_clock::now();

        auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimePoint).time_since_epoch().count();
        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimePoint).time_since_epoch().count();
        auto duration = end - start;

        if (!thingToTime.empty())
        {
            std::cout << thingToTime << " took ";
        }
        std::cout << duration << "us\n";

        thingToTime = "";
        // delete this;
    }
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTimePoint;
    std::string thingToTime = "";
};
