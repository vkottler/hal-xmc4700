/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "DAC0 channel disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "DAC0 channel in operation",
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

enum class DAC_DAC0CFG0_RUN : uint8_t
{
    value1 /*!< DAC0 channel disabled */,
    value2 = 1 /*!< DAC0 channel in operation */
};
static_assert(sizeof(DAC_DAC0CFG0_RUN) == 1);

static constexpr uint16_t DAC_DAC0CFG0_RUN_id = 2135;

/**
 * Converts DAC_DAC0CFG0_RUN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC0CFG0_RUN instance)
{
    const char *result = "UNKNOWN DAC_DAC0CFG0_RUN";

    switch (instance)
    {
    case DAC_DAC0CFG0_RUN::value1:
        result = "value1";
        break;
    case DAC_DAC0CFG0_RUN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC0CFG0_RUN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC0CFG0_RUN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DAC_DAC0CFG0_RUN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DAC_DAC0CFG0_RUN::value2;
    }

    return result;
}

}; // namespace XMC4700
