/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No write access to trigger configuration",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Bitfields XTMODE and XTSEL can be written",
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

enum class VADC_G0_ASCTRL_XTWC : uint8_t
{
    value1 /*!< No write access to trigger configuration */,
    value2 = 1 /*!< Bitfields XTMODE and XTSEL can be written */
};
static_assert(sizeof(VADC_G0_ASCTRL_XTWC) == 1);

static constexpr uint16_t VADC_G0_ASCTRL_XTWC_id = 971;

/**
 * Converts VADC_G0_ASCTRL_XTWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ASCTRL_XTWC instance)
{
    const char *result = "UNKNOWN VADC_G0_ASCTRL_XTWC";

    switch (instance)
    {
    case VADC_G0_ASCTRL_XTWC::value1:
        result = "value1";
        break;
    case VADC_G0_ASCTRL_XTWC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ASCTRL_XTWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ASCTRL_XTWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_ASCTRL_XTWC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_ASCTRL_XTWC::value2;
    }

    return result;
}

}; // namespace XMC4700
