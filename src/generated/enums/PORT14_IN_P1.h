/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The input level of Pn.x is 0.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The input level of Pn.x is 1.",
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

enum class PORT14_IN_P1 : uint8_t
{
    value1 /*!< The input level of Pn.x is 0. */,
    value2 = 1 /*!< The input level of Pn.x is 1. */
};
static_assert(sizeof(PORT14_IN_P1) == 1);

static constexpr uint16_t PORT14_IN_P1_id = 695;

/**
 * Converts PORT14_IN_P1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT14_IN_P1 instance)
{
    const char *result = "UNKNOWN PORT14_IN_P1";

    switch (instance)
    {
    case PORT14_IN_P1::value1:
        result = "value1";
        break;
    case PORT14_IN_P1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT14_IN_P1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT14_IN_P1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT14_IN_P1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT14_IN_P1::value2;
    }

    return result;
}

}; // namespace XMC4700