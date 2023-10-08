/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Multi Channel Mode in Channel 1 is disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Multi Channel Mode in Channel 1 is enabled",
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

enum class CCU80_CC80_TC_MCME1 : uint8_t
{
    value1 /*!< Multi Channel Mode in Channel 1 is disabled */,
    value2 = 1 /*!< Multi Channel Mode in Channel 1 is enabled */
};
static_assert(sizeof(CCU80_CC80_TC_MCME1) == 1);

static constexpr uint16_t CCU80_CC80_TC_MCME1_id = 1848;

/**
 * Converts CCU80_CC80_TC_MCME1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_MCME1 instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_MCME1";

    switch (instance)
    {
    case CCU80_CC80_TC_MCME1::value1:
        result = "value1";
        break;
    case CCU80_CC80_TC_MCME1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_MCME1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_MCME1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_TC_MCME1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_TC_MCME1::value2;
    }

    return result;
}

}; // namespace XMC4700
