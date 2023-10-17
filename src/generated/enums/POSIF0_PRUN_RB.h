/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PRUN_RB : uint8_t
{
    idle /*!< IDLE */,
    running = 1 /*!< Running */
};
static_assert(sizeof(POSIF0_PRUN_RB) == 1);

/**
 * Converts POSIF0_PRUN_RB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PRUN_RB instance)
{
    const char *result = "UNKNOWN POSIF0_PRUN_RB";

    switch (instance)
    {
    case POSIF0_PRUN_RB::idle:
        result = "idle";
        break;
    case POSIF0_PRUN_RB::running:
        result = "running";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PRUN_RB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PRUN_RB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "idle", 4)))
    {
        output = POSIF0_PRUN_RB::idle;
    }
    else if ((result = !strncmp(data, "running", 7)))
    {
        output = POSIF0_PRUN_RB::running;
    }

    return result;
}

}; // namespace XMC4700
