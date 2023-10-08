/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Compare match while counting down not detected",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Compare match while counting down detected",
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

enum class CCU40_CC40_INTS_CMDS : uint8_t
{
    value1 /*!< Compare match while counting down not detected */,
    value2 = 1 /*!< Compare match while counting down detected */
};
static_assert(sizeof(CCU40_CC40_INTS_CMDS) == 1);

static constexpr uint16_t CCU40_CC40_INTS_CMDS_id = 1410;

/**
 * Converts CCU40_CC40_INTS_CMDS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_INTS_CMDS instance)
{
    const char *result = "UNKNOWN CCU40_CC40_INTS_CMDS";

    switch (instance)
    {
    case CCU40_CC40_INTS_CMDS::value1:
        result = "value1";
        break;
    case CCU40_CC40_INTS_CMDS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_INTS_CMDS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_INTS_CMDS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_INTS_CMDS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_INTS_CMDS::value2;
    }

    return result;
}

}; // namespace XMC4700