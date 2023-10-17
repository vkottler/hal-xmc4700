/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_GSTAT_PRB : uint8_t
{
    stopped /*!< Prescaler is stopped */,
    running = 1 /*!< Prescaler is running */
};
static_assert(sizeof(CCU40_GSTAT_PRB) == 1);

/**
 * Converts CCU40_GSTAT_PRB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_GSTAT_PRB instance)
{
    const char *result = "UNKNOWN CCU40_GSTAT_PRB";

    switch (instance)
    {
    case CCU40_GSTAT_PRB::stopped:
        result = "stopped";
        break;
    case CCU40_GSTAT_PRB::running:
        result = "running";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_GSTAT_PRB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_GSTAT_PRB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "stopped", 7)))
    {
        output = CCU40_GSTAT_PRB::stopped;
    }
    else if ((result = !strncmp(data, "running", 7)))
    {
        output = CCU40_GSTAT_PRB::running;
    }

    return result;
}

}; // namespace XMC4700
