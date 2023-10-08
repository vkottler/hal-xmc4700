/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Select common bondary flag output 0",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Select common bondary flag output 3",
 *       "value": 3
 *     },
 *     "value3": {
 *       "description": "Select shared service request line 0",
 *       "value": 4
 *     },
 *     "value4": {
 *       "description": "Select shared service request line 3",
 *       "value": 7
 *     },
 *     "value5": {
 *       "description": "Disabled, no common output signal",
 *       "value": 15
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

enum class VADC_G0_BFLNP_BFL3NP : uint8_t
{
    value1 /*!< Select common bondary flag output 0 */,
    value2 = 3 /*!< Select common bondary flag output 3 */,
    value3 = 4 /*!< Select shared service request line 0 */,
    value4 = 7 /*!< Select shared service request line 3 */,
    value5 = 15 /*!< Disabled, no common output signal */
};
static_assert(sizeof(VADC_G0_BFLNP_BFL3NP) == 1);

static constexpr uint16_t VADC_G0_BFLNP_BFL3NP_id = 939;

/**
 * Converts VADC_G0_BFLNP_BFL3NP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_BFLNP_BFL3NP instance)
{
    const char *result = "UNKNOWN VADC_G0_BFLNP_BFL3NP";

    switch (instance)
    {
    case VADC_G0_BFLNP_BFL3NP::value1:
        result = "value1";
        break;
    case VADC_G0_BFLNP_BFL3NP::value2:
        result = "value2";
        break;
    case VADC_G0_BFLNP_BFL3NP::value3:
        result = "value3";
        break;
    case VADC_G0_BFLNP_BFL3NP::value4:
        result = "value4";
        break;
    case VADC_G0_BFLNP_BFL3NP::value5:
        result = "value5";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_BFLNP_BFL3NP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_BFLNP_BFL3NP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_BFLNP_BFL3NP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_BFLNP_BFL3NP::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_G0_BFLNP_BFL3NP::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_G0_BFLNP_BFL3NP::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = VADC_G0_BFLNP_BFL3NP::value5;
    }

    return result;
}

}; // namespace XMC4700
