/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Pad is enabled, digital input selected.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Pad is disabled, ADC 1 analog input 0 and ADC 2 analog input 4 and DAC output 0 selected.",
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

enum class PORT14_PDISC_PDIS8 : uint8_t
{
    value1 /*!< Pad is enabled, digital input selected. */,
    value2 = 1 /*!< Pad is disabled, ADC 1 analog input 0 and ADC 2 analog input 4 and DAC output 0 selected. */
};
static_assert(sizeof(PORT14_PDISC_PDIS8) == 1);

static constexpr uint16_t PORT14_PDISC_PDIS8_id = 702;

/**
 * Converts PORT14_PDISC_PDIS8 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT14_PDISC_PDIS8 instance)
{
    const char *result = "UNKNOWN PORT14_PDISC_PDIS8";

    switch (instance)
    {
    case PORT14_PDISC_PDIS8::value1:
        result = "value1";
        break;
    case PORT14_PDISC_PDIS8::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT14_PDISC_PDIS8.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT14_PDISC_PDIS8 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT14_PDISC_PDIS8::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT14_PDISC_PDIS8::value2;
    }

    return result;
}

}; // namespace XMC4700
