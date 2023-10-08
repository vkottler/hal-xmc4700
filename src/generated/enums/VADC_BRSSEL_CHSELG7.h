/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Ignore this channel",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "This channel is part of the scan sequence",
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

enum class VADC_BRSSEL_CHSELG7 : uint8_t
{
    value1 /*!< Ignore this channel */,
    value2 = 1 /*!< This channel is part of the scan sequence */
};
static_assert(sizeof(VADC_BRSSEL_CHSELG7) == 1);

static constexpr uint16_t VADC_BRSSEL_CHSELG7_id = 772;

/**
 * Converts VADC_BRSSEL_CHSELG7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_BRSSEL_CHSELG7 instance)
{
    const char *result = "UNKNOWN VADC_BRSSEL_CHSELG7";

    switch (instance)
    {
    case VADC_BRSSEL_CHSELG7::value1:
        result = "value1";
        break;
    case VADC_BRSSEL_CHSELG7::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_BRSSEL_CHSELG7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_BRSSEL_CHSELG7 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_BRSSEL_CHSELG7::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_BRSSEL_CHSELG7::value2;
    }

    return result;
}

}; // namespace XMC4700
