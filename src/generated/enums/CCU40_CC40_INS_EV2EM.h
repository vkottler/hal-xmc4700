/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No action",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Signal active on rising edge",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Signal active on falling edge",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Signal active on both edges",
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

enum class CCU40_CC40_INS_EV2EM : uint8_t
{
    value1 /*!< No action */,
    value2 = 1 /*!< Signal active on rising edge */,
    value3 = 2 /*!< Signal active on falling edge */,
    value4 = 3 /*!< Signal active on both edges */
};
static_assert(sizeof(CCU40_CC40_INS_EV2EM) == 1);

static constexpr uint16_t CCU40_CC40_INS_EV2EM_id = 1366;

/**
 * Converts CCU40_CC40_INS_EV2EM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_INS_EV2EM instance)
{
    const char *result = "UNKNOWN CCU40_CC40_INS_EV2EM";

    switch (instance)
    {
    case CCU40_CC40_INS_EV2EM::value1:
        result = "value1";
        break;
    case CCU40_CC40_INS_EV2EM::value2:
        result = "value2";
        break;
    case CCU40_CC40_INS_EV2EM::value3:
        result = "value3";
        break;
    case CCU40_CC40_INS_EV2EM::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_INS_EV2EM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_INS_EV2EM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_CC40_INS_EV2EM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_CC40_INS_EV2EM::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU40_CC40_INS_EV2EM::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU40_CC40_INS_EV2EM::value4;
    }

    return result;
}

}; // namespace XMC4700
