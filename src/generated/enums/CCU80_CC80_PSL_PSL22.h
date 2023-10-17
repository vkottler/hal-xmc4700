/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_PSL_PSL22 : uint8_t
{
    low /*!< Passive Level is LOW */,
    high = 1 /*!< Passive Level is HIGH */
};
static_assert(sizeof(CCU80_CC80_PSL_PSL22) == 1);

/**
 * Converts CCU80_CC80_PSL_PSL22 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_PSL_PSL22 instance)
{
    const char *result = "UNKNOWN CCU80_CC80_PSL_PSL22";

    switch (instance)
    {
    case CCU80_CC80_PSL_PSL22::low:
        result = "low";
        break;
    case CCU80_CC80_PSL_PSL22::high:
        result = "high";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_PSL_PSL22.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_PSL_PSL22 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "low", 3)))
    {
        output = CCU80_CC80_PSL_PSL22::low;
    }
    else if ((result = !strncmp(data, "high", 4)))
    {
        output = CCU80_CC80_PSL_PSL22::high;
    }

    return result;
}

}; // namespace XMC4700
