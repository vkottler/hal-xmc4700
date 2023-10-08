/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No channel event",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "A channel event has occurred",
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

enum class VADC_G0_CEFLAG_CEV5 : uint8_t
{
    value1 /*!< No channel event */,
    value2 = 1 /*!< A channel event has occurred */
};
static_assert(sizeof(VADC_G0_CEFLAG_CEV5) == 1);

static constexpr uint16_t VADC_G0_CEFLAG_CEV5_id = 1001;

/**
 * Converts VADC_G0_CEFLAG_CEV5 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_CEFLAG_CEV5 instance)
{
    const char *result = "UNKNOWN VADC_G0_CEFLAG_CEV5";

    switch (instance)
    {
    case VADC_G0_CEFLAG_CEV5::value1:
        result = "value1";
        break;
    case VADC_G0_CEFLAG_CEV5::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_CEFLAG_CEV5.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_CEFLAG_CEV5 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_CEFLAG_CEV5::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_CEFLAG_CEV5::value2;
    }

    return result;
}

}; // namespace XMC4700
