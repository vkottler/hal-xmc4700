/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "All diagnostic pull devices are disconnected",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Diagnostic pull devices connected as selected by bitfield CDSEL",
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

enum class VADC_GLOBTF_CDEN : uint8_t
{
    value1 /*!< All diagnostic pull devices are disconnected */,
    value2 = 1 /*!< Diagnostic pull devices connected as selected by bitfield CDSEL */
};
static_assert(sizeof(VADC_GLOBTF_CDEN) == 1);

static constexpr uint16_t VADC_GLOBTF_CDEN_id = 771;

/**
 * Converts VADC_GLOBTF_CDEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBTF_CDEN instance)
{
    const char *result = "UNKNOWN VADC_GLOBTF_CDEN";

    switch (instance)
    {
    case VADC_GLOBTF_CDEN::value1:
        result = "value1";
        break;
    case VADC_GLOBTF_CDEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBTF_CDEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBTF_CDEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBTF_CDEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_GLOBTF_CDEN::value2;
    }

    return result;
}

}; // namespace XMC4700
