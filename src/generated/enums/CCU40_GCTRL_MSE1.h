/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_GCTRL_MSE1 : uint8_t
{
    value1 /*!< Shadow transfer can only be requested by SW */,
    value2 = 1 /*!< Shadow transfer can be requested via SW and via the CCU4x.MCSS input. */
};
static_assert(sizeof(CCU40_GCTRL_MSE1) == 1);

static constexpr uint16_t CCU40_GCTRL_MSE1_id = 60;

/**
 * Converts CCU40_GCTRL_MSE1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_GCTRL_MSE1 instance)
{
    const char *result = "UNKNOWN CCU40_GCTRL_MSE1";

    switch (instance)
    {
    case CCU40_GCTRL_MSE1::value1:
        result = "value1";
        break;
    case CCU40_GCTRL_MSE1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_GCTRL_MSE1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_GCTRL_MSE1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_GCTRL_MSE1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_GCTRL_MSE1::value2;
    }

    return result;
}

}; // namespace XMC4700
