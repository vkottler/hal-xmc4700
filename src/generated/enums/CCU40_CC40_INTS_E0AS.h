/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Event 0 not detected",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Event 0 detected",
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

enum class CCU40_CC40_INTS_E0AS : uint8_t
{
    value1 /*!< Event 0 not detected */,
    value2 = 1 /*!< Event 0 detected */
};
static_assert(sizeof(CCU40_CC40_INTS_E0AS) == 1);

static constexpr uint16_t CCU40_CC40_INTS_E0AS_id = 1409;

/**
 * Converts CCU40_CC40_INTS_E0AS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_INTS_E0AS instance)
{
    const char *result = "UNKNOWN CCU40_CC40_INTS_E0AS";

    switch (instance)
    {
    case CCU40_CC40_INTS_E0AS::value1:
        result = "value1";
        break;
    case CCU40_CC40_INTS_E0AS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_INTS_E0AS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_INTS_E0AS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_INTS_E0AS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_INTS_E0AS::value2;
    }

    return result;
}

}; // namespace XMC4700
