/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_ECRD0_VPTR : uint8_t
{
    value1 /*!< Capture register 0 */,
    value2 = 1 /*!< Capture register 1 */,
    value3 = 2 /*!< Capture register 2 */,
    value4 = 3 /*!< Capture register 3 */
};
static_assert(sizeof(CCU80_CC80_ECRD0_VPTR) == 1);

/**
 * Converts CCU80_CC80_ECRD0_VPTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_ECRD0_VPTR instance)
{
    const char *result = "UNKNOWN CCU80_CC80_ECRD0_VPTR";

    switch (instance)
    {
    case CCU80_CC80_ECRD0_VPTR::value1:
        result = "value1";
        break;
    case CCU80_CC80_ECRD0_VPTR::value2:
        result = "value2";
        break;
    case CCU80_CC80_ECRD0_VPTR::value3:
        result = "value3";
        break;
    case CCU80_CC80_ECRD0_VPTR::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_ECRD0_VPTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_ECRD0_VPTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_ECRD0_VPTR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_ECRD0_VPTR::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU80_CC80_ECRD0_VPTR::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU80_CC80_ECRD0_VPTR::value4;
    }

    return result;
}

}; // namespace XMC4700
