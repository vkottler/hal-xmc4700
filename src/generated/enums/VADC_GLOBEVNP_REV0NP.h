/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Select shared service request line 0 of common service request group 0",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Select shared service request line 3 of common service request group 0",
 *       "value": 3
 *     },
 *     "value3": {
 *       "description": "Select shared service request line 0 of common service request group 1",
 *       "value": 4
 *     },
 *     "value4": {
 *       "description": "Select shared service request line 3 of common service request group 1",
 *       "value": 7
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

enum class VADC_GLOBEVNP_REV0NP : uint8_t
{
    value1 /*!< Select shared service request line 0 of common service request group 0 */,
    value2 = 3 /*!< Select shared service request line 3 of common service request group 0 */,
    value3 = 4 /*!< Select shared service request line 0 of common service request group 1 */,
    value4 = 7 /*!< Select shared service request line 3 of common service request group 1 */
};
static_assert(sizeof(VADC_GLOBEVNP_REV0NP) == 1);

static constexpr uint16_t VADC_GLOBEVNP_REV0NP_id = 765;

/**
 * Converts VADC_GLOBEVNP_REV0NP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBEVNP_REV0NP instance)
{
    const char *result = "UNKNOWN VADC_GLOBEVNP_REV0NP";

    switch (instance)
    {
    case VADC_GLOBEVNP_REV0NP::value1:
        result = "value1";
        break;
    case VADC_GLOBEVNP_REV0NP::value2:
        result = "value2";
        break;
    case VADC_GLOBEVNP_REV0NP::value3:
        result = "value3";
        break;
    case VADC_GLOBEVNP_REV0NP::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBEVNP_REV0NP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBEVNP_REV0NP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBEVNP_REV0NP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_GLOBEVNP_REV0NP::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_GLOBEVNP_REV0NP::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_GLOBEVNP_REV0NP::value4;
    }

    return result;
}

}; // namespace XMC4700
