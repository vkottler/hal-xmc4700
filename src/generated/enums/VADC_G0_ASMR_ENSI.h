/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No request source interrupt",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "A request source interrupt is generated upon a request source event (last pending conversion is finished)",
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

enum class VADC_G0_ASMR_ENSI : uint8_t
{
    value1 /*!< No request source interrupt */,
    value2 = 1 /*!< A request source interrupt is generated upon a request source event (last pending conversion is finished) */
};
static_assert(sizeof(VADC_G0_ASMR_ENSI) == 1);

static constexpr uint16_t VADC_G0_ASMR_ENSI_id = 980;

/**
 * Converts VADC_G0_ASMR_ENSI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ASMR_ENSI instance)
{
    const char *result = "UNKNOWN VADC_G0_ASMR_ENSI";

    switch (instance)
    {
    case VADC_G0_ASMR_ENSI::value1:
        result = "value1";
        break;
    case VADC_G0_ASMR_ENSI::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ASMR_ENSI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ASMR_ENSI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_ASMR_ENSI::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_ASMR_ENSI::value2;
    }

    return result;
}

}; // namespace XMC4700