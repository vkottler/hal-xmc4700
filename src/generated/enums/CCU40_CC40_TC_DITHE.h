/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_TC_DITHE : uint8_t
{
    value1 /*!< Dither is disabled */,
    value2 = 1 /*!< Dither is applied to the Period */,
    value3 = 2 /*!< Dither is applied to the Compare */,
    value4 = 3 /*!< Dither is applied to the Period and Compare */
};
static_assert(sizeof(CCU40_CC40_TC_DITHE) == 1);

/**
 * Converts CCU40_CC40_TC_DITHE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_TC_DITHE instance)
{
    const char *result = "UNKNOWN CCU40_CC40_TC_DITHE";

    switch (instance)
    {
    case CCU40_CC40_TC_DITHE::value1:
        result = "value1";
        break;
    case CCU40_CC40_TC_DITHE::value2:
        result = "value2";
        break;
    case CCU40_CC40_TC_DITHE::value3:
        result = "value3";
        break;
    case CCU40_CC40_TC_DITHE::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_TC_DITHE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_TC_DITHE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_TC_DITHE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_TC_DITHE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU40_CC40_TC_DITHE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_CC40_TC_DITHE::value4;
    }

    return result;
}

}; // namespace XMC4700
