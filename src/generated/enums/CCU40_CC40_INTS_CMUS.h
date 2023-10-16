/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_INTS_CMUS : uint8_t
{
    value1 /*!< Compare match while counting up not detected */,
    value2 = 1 /*!< Compare match while counting up detected */
};
static_assert(sizeof(CCU40_CC40_INTS_CMUS) == 1);

/**
 * Converts CCU40_CC40_INTS_CMUS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_INTS_CMUS instance)
{
    const char *result = "UNKNOWN CCU40_CC40_INTS_CMUS";

    switch (instance)
    {
    case CCU40_CC40_INTS_CMUS::value1:
        result = "value1";
        break;
    case CCU40_CC40_INTS_CMUS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_INTS_CMUS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_INTS_CMUS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_INTS_CMUS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_INTS_CMUS::value2;
    }

    return result;
}

}; // namespace XMC4700
