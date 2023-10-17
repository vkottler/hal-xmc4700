/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GSTAT_PCRB : uint8_t
{
    stopped /*!< Parity Checker is stopped */,
    running = 1 /*!< Parity Checker is running */
};
static_assert(sizeof(CCU80_GSTAT_PCRB) == 1);

/**
 * Converts CCU80_GSTAT_PCRB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GSTAT_PCRB instance)
{
    const char *result = "UNKNOWN CCU80_GSTAT_PCRB";

    switch (instance)
    {
    case CCU80_GSTAT_PCRB::stopped:
        result = "stopped";
        break;
    case CCU80_GSTAT_PCRB::running:
        result = "running";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GSTAT_PCRB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GSTAT_PCRB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "stopped", 7)))
    {
        output = CCU80_GSTAT_PCRB::stopped;
    }
    else if ((result = !strncmp(data, "running", 7)))
    {
        output = CCU80_GSTAT_PCRB::running;
    }

    return result;
}

}; // namespace XMC4700
