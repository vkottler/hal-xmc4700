/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The transfer of bypass data is disabled.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The transfer of bypass data to TBUF is possible. Bypass data will be transferred to TBUF according to its priority if BDV = 1.",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Gated bypass data transfer is enabled. Bypass data will be transferred to TBUF according to its priority if BDV = 1 and while DX2S = 0.",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Gated bypass data transfer is enabled. Bypass data will be transferred to TBUF according to its priority if BDV = 1 and while DX2S = 1.",
 *       "value": 3
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

enum class USIC0_CH0_BYPCR_BDEN : uint8_t
{
    value1 /*!< The transfer of bypass data is disabled. */,
    value2 = 1 /*!< The transfer of bypass data to TBUF is possible. Bypass data will be transferred to TBUF according to its priority if BDV = 1. */,
    value3 = 2 /*!< Gated bypass data transfer is enabled. Bypass data will be transferred to TBUF according to its priority if BDV = 1 and while DX2S = 0. */,
    value4 = 3 /*!< Gated bypass data transfer is enabled. Bypass data will be transferred to TBUF according to its priority if BDV = 1 and while DX2S = 1. */
};
static_assert(sizeof(USIC0_CH0_BYPCR_BDEN) == 1);

static constexpr uint16_t USIC0_CH0_BYPCR_BDEN_id = 260;

/**
 * Converts USIC0_CH0_BYPCR_BDEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_BYPCR_BDEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_BYPCR_BDEN";

    switch (instance)
    {
    case USIC0_CH0_BYPCR_BDEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_BYPCR_BDEN::value2:
        result = "value2";
        break;
    case USIC0_CH0_BYPCR_BDEN::value3:
        result = "value3";
        break;
    case USIC0_CH0_BYPCR_BDEN::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_BYPCR_BDEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_BYPCR_BDEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_BYPCR_BDEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_BYPCR_BDEN::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_BYPCR_BDEN::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_BYPCR_BDEN::value4;
    }

    return result;
}

}; // namespace XMC4700