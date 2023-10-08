/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Event 2 detection interrupt is disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Event 2 detection interrupt is enabled",
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

enum class CCU80_CC80_INTE_E2AE : uint8_t
{
    value1 /*!< Event 2 detection interrupt is disabled */,
    value2 = 1 /*!< Event 2 detection interrupt is enabled */
};
static_assert(sizeof(CCU80_CC80_INTE_E2AE) == 1);

static constexpr uint16_t CCU80_CC80_INTE_E2AE_id = 1896;

/**
 * Converts CCU80_CC80_INTE_E2AE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_INTE_E2AE instance)
{
    const char *result = "UNKNOWN CCU80_CC80_INTE_E2AE";

    switch (instance)
    {
    case CCU80_CC80_INTE_E2AE::value1:
        result = "value1";
        break;
    case CCU80_CC80_INTE_E2AE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_INTE_E2AE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_INTE_E2AE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_INTE_E2AE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_INTE_E2AE::value2;
    }

    return result;
}

}; // namespace XMC4700
