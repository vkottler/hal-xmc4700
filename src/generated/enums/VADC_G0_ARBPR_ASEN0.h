/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The corresponding arbitration slot is disabled and considered as empty. Pending conversion requests from the associated request source are disregarded.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The corresponding arbitration slot is enabled. Pending conversion requests from the associated request source are arbitrated.",
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

enum class VADC_G0_ARBPR_ASEN0 : uint8_t
{
    value1 /*!< The corresponding arbitration slot is disabled and considered as empty. Pending conversion requests from the associated request source are disregarded. */,
    value2 = 1 /*!< The corresponding arbitration slot is enabled. Pending conversion requests from the associated request source are arbitrated. */
};
static_assert(sizeof(VADC_G0_ARBPR_ASEN0) == 1);

static constexpr uint16_t VADC_G0_ARBPR_ASEN0_id = 894;

/**
 * Converts VADC_G0_ARBPR_ASEN0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ARBPR_ASEN0 instance)
{
    const char *result = "UNKNOWN VADC_G0_ARBPR_ASEN0";

    switch (instance)
    {
    case VADC_G0_ARBPR_ASEN0::value1:
        result = "value1";
        break;
    case VADC_G0_ARBPR_ASEN0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ARBPR_ASEN0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ARBPR_ASEN0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_ARBPR_ASEN0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_ARBPR_ASEN0::value2;
    }

    return result;
}

}; // namespace XMC4700
