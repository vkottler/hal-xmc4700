/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_INTS_E2AS : uint8_t
{
    value1 /*!< Event 2 not detected */,
    value2 = 1 /*!< Event 2 detected */
};
static_assert(sizeof(CCU80_CC80_INTS_E2AS) == 1);

static constexpr uint16_t CCU80_CC80_INTS_E2AS_id = 1887;

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
    case CCU80_CC80_INTS_E2AS::value1:
        result = "value1";
        break;
    case CCU80_CC80_INTS_E2AS::value2:
        result = "value2";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_INTS_E2AS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_INTS_E2AS::value2;
    }

    return result;
}

}; // namespace XMC4700
