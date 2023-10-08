/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The output level of Pn.x is 0.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The output level of Pn.x is 1.",
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

enum class PORT0_OUT_P14 : uint8_t
{
    value1 /*!< The output level of Pn.x is 0. */,
    value2 = 1 /*!< The output level of Pn.x is 1. */
};
static_assert(sizeof(PORT0_OUT_P14) == 1);

static constexpr uint16_t PORT0_OUT_P14_id = 1607;

/**
 * Converts PORT0_OUT_P14 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT0_OUT_P14 instance)
{
    const char *result = "UNKNOWN PORT0_OUT_P14";

    switch (instance)
    {
    case PORT0_OUT_P14::value1:
        result = "value1";
        break;
    case PORT0_OUT_P14::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT0_OUT_P14.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT0_OUT_P14 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT0_OUT_P14::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT0_OUT_P14::value2;
    }

    return result;
}

}; // namespace XMC4700
