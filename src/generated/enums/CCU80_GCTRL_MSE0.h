/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GCTRL_MSE0 : uint8_t
{
    value1 /*!< Shadow transfer can only be requested by SW */,
    value2 = 1 /*!< Shadow transfer can be requested via SW and via the
                  CCU8x.MCSS input. */
};
static_assert(sizeof(CCU80_GCTRL_MSE0) == 1);

static constexpr uint16_t CCU80_GCTRL_MSE0_id = 1722;

/**
 * Converts CCU80_GCTRL_MSE0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GCTRL_MSE0 instance)
{
    const char *result = "UNKNOWN CCU80_GCTRL_MSE0";

    switch (instance)
    {
    case CCU80_GCTRL_MSE0::value1:
        result = "value1";
        break;
    case CCU80_GCTRL_MSE0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GCTRL_MSE0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GCTRL_MSE0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GCTRL_MSE0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GCTRL_MSE0::value2;
    }

    return result;
}

}; // namespace XMC4700
