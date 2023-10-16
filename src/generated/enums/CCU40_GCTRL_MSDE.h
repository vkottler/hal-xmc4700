/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_GCTRL_MSDE : uint8_t
{
    value1 /*!< Only the shadow transfer for period and compare values is requested */,
    value2 = 1 /*!< Shadow transfer for the compare, period and prescaler compare values is requested */,
    value4 = 3 /*!< Shadow transfer for the compare, period, prescaler and dither compare values is requested */
};
static_assert(sizeof(CCU40_GCTRL_MSDE) == 1);

/**
 * Converts CCU40_GCTRL_MSDE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_GCTRL_MSDE instance)
{
    const char *result = "UNKNOWN CCU40_GCTRL_MSDE";

    switch (instance)
    {
    case CCU40_GCTRL_MSDE::value1:
        result = "value1";
        break;
    case CCU40_GCTRL_MSDE::value2:
        result = "value2";
        break;
    case CCU40_GCTRL_MSDE::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_GCTRL_MSDE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_GCTRL_MSDE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_GCTRL_MSDE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_GCTRL_MSDE::value2;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_GCTRL_MSDE::value4;
    }

    return result;
}

}; // namespace XMC4700
