/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Software control only.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "HW0 control path can override the software configuration.",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "HW1 control path can override the software configuration.",
 *       "value": 2
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

enum class PORT0_HWSEL_HW15 : uint8_t
{
    value1 /*!< Software control only. */,
    value2 = 1 /*!< HW0 control path can override the software configuration. */,
    value3 = 2 /*!< HW1 control path can override the software configuration. */
};
static_assert(sizeof(PORT0_HWSEL_HW15) == 1);

static constexpr uint16_t PORT0_HWSEL_HW15_id = 1702;

/**
 * Converts PORT0_HWSEL_HW15 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT0_HWSEL_HW15 instance)
{
    const char *result = "UNKNOWN PORT0_HWSEL_HW15";

    switch (instance)
    {
    case PORT0_HWSEL_HW15::value1:
        result = "value1";
        break;
    case PORT0_HWSEL_HW15::value2:
        result = "value2";
        break;
    case PORT0_HWSEL_HW15::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT0_HWSEL_HW15.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT0_HWSEL_HW15 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT0_HWSEL_HW15::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT0_HWSEL_HW15::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = PORT0_HWSEL_HW15::value3;
    }

    return result;
}

}; // namespace XMC4700
