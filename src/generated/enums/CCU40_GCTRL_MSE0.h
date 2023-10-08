/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Shadow transfer can only be requested by SW",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Shadow transfer can be requested via SW and via the CCU4x.MCSS input.",
 *       "value": 1
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_GCTRL_MSE0 : uint8_t
{
    value1 /*!< Shadow transfer can only be requested by SW */,
    value2 = 1 /*!< Shadow transfer can be requested via SW and via the CCU4x.MCSS input. */
};
static_assert(sizeof(CCU40_GCTRL_MSE0) == 1);

static constexpr uint16_t CCU40_GCTRL_MSE0_id = 2506;

/**
 * Converts CCU40_GCTRL_MSE0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_GCTRL_MSE0 instance)
{
    const char *result = "UNKNOWN CCU40_GCTRL_MSE0";

    switch (instance)
    {
    case CCU40_GCTRL_MSE0::value1:
        result = "value1";
        break;
    case CCU40_GCTRL_MSE0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_GCTRL_MSE0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_GCTRL_MSE0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_GCTRL_MSE0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_GCTRL_MSE0::value2;
    }

    return result;
}

}; // namespace XMC4700
