/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PRUN_RB : uint8_t
{
    value1 /*!< IDLE */,
    value2 = 1 /*!< Running */
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
    case POSIF0_PRUN_RB::value1:
        result = "value1";
        break;
    case POSIF0_PRUN_RB::value2:
        result = "value2";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF0_PRUN_RB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF0_PRUN_RB::value2;
    }

    return result;
}

}; // namespace XMC4700