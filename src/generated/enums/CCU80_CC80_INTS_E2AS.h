/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_INTS_E2AS : uint8_t
{
    not_detected /*!< Event 2 not detected */,
    detected = 1 /*!< Event 2 detected */
};
static_assert(sizeof(CCU80_CC80_INTS_E2AS) == 1);

/**
 * Converts CCU80_CC80_INTS_E2AS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_INTS_E2AS instance)
{
    const char *result = "UNKNOWN CCU80_CC80_INTS_E2AS";

    switch (instance)
    {
    case CCU80_CC80_INTS_E2AS::not_detected:
        result = "not_detected";
        break;
    case CCU80_CC80_INTS_E2AS::detected:
        result = "detected";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_INTS_E2AS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_INTS_E2AS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_detected", 12)))
    {
        output = CCU80_CC80_INTS_E2AS::not_detected;
    }
    else if ((result = !strncmp(data, "detected", 8)))
    {
        output = CCU80_CC80_INTS_E2AS::detected;
    }

    return result;
}

}; // namespace XMC4700
