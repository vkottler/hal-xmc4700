/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Timer is never cleared on a capture event",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Timer is cleared on a capture event into capture registers 2 and 3. (When SCE = 1#, Timer is always cleared in a capture event)",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Timer is cleared on a capture event into capture registers 0 and 1. (When SCE = 1#, Timer is always cleared in a capture event)",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Timer is always cleared in a capture event.",
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

enum class CCU40_CC40_TC_CAPC : uint8_t
{
    value1 /*!< Timer is never cleared on a capture event */,
    value2 = 1 /*!< Timer is cleared on a capture event into capture registers 2 and 3. (When SCE = 1#, Timer is always cleared in a capture event) */,
    value3 = 2 /*!< Timer is cleared on a capture event into capture registers 0 and 1. (When SCE = 1#, Timer is always cleared in a capture event) */,
    value4 = 3 /*!< Timer is always cleared in a capture event. */
};
static_assert(sizeof(CCU40_CC40_TC_CAPC) == 1);

static constexpr uint16_t CCU40_CC40_TC_CAPC_id = 1397;

/**
 * Converts CCU40_CC40_TC_CAPC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_TC_CAPC instance)
{
    const char *result = "UNKNOWN CCU40_CC40_TC_CAPC";

    switch (instance)
    {
    case CCU40_CC40_TC_CAPC::value1:
        result = "value1";
        break;
    case CCU40_CC40_TC_CAPC::value2:
        result = "value2";
        break;
    case CCU40_CC40_TC_CAPC::value3:
        result = "value3";
        break;
    case CCU40_CC40_TC_CAPC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_TC_CAPC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_TC_CAPC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_TC_CAPC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_TC_CAPC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU40_CC40_TC_CAPC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_CC40_TC_CAPC::value4;
    }

    return result;
}

}; // namespace XMC4700