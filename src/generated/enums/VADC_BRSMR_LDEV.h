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
 *       "description": "A load event is generated",
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

enum class VADC_BRSMR_LDEV : uint8_t
{
    value1 /*!< No action */,
    value2 = 1 /*!< A load event is generated */
};
static_assert(sizeof(VADC_BRSMR_LDEV) == 1);

static constexpr uint16_t VADC_BRSMR_LDEV_id = 793;

/**
 * Converts VADC_BRSMR_LDEV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_BRSMR_LDEV instance)
{
    const char *result = "UNKNOWN VADC_BRSMR_LDEV";

    switch (instance)
    {
    case VADC_BRSMR_LDEV::value1:
        result = "value1";
        break;
    case VADC_BRSMR_LDEV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_BRSMR_LDEV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_BRSMR_LDEV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_BRSMR_LDEV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_BRSMR_LDEV::value2;
    }

    return result;
}

}; // namespace XMC4700
