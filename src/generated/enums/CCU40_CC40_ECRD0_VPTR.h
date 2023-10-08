/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Capture register 0",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Capture register 1",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Capture register 2",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Capture register 3",
 *       "value": 3
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

enum class CCU40_CC40_ECRD0_VPTR : uint8_t
{
    value1 /*!< Capture register 0 */,
    value2 = 1 /*!< Capture register 1 */,
    value3 = 2 /*!< Capture register 2 */,
    value4 = 3 /*!< Capture register 3 */
};
static_assert(sizeof(CCU40_CC40_ECRD0_VPTR) == 1);

static constexpr uint16_t CCU40_CC40_ECRD0_VPTR_id = 1428;

/**
 * Converts CCU40_CC40_ECRD0_VPTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_ECRD0_VPTR instance)
{
    const char *result = "UNKNOWN CCU40_CC40_ECRD0_VPTR";

    switch (instance)
    {
    case CCU40_CC40_ECRD0_VPTR::value1:
        result = "value1";
        break;
    case CCU40_CC40_ECRD0_VPTR::value2:
        result = "value2";
        break;
    case CCU40_CC40_ECRD0_VPTR::value3:
        result = "value3";
        break;
    case CCU40_CC40_ECRD0_VPTR::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_ECRD0_VPTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_ECRD0_VPTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_ECRD0_VPTR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_ECRD0_VPTR::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU40_CC40_ECRD0_VPTR::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_CC40_ECRD0_VPTR::value4;
    }

    return result;
}

}; // namespace XMC4700
