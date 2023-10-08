/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The passive level is 0 and the delay is disabled.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The passive level is 1 and the delay is disabled.",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "The passive level is 0 and the delay is enabled.",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "The passive level is 1 and the delay is enabled.",
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

enum class USIC0_CH0_BRG_SCLKCFG : uint8_t
{
    value1 /*!< The passive level is 0 and the delay is disabled. */,
    value2 = 1 /*!< The passive level is 1 and the delay is disabled. */,
    value3 = 2 /*!< The passive level is 0 and the delay is enabled. */,
    value4 = 3 /*!< The passive level is 1 and the delay is enabled. */
};
static_assert(sizeof(USIC0_CH0_BRG_SCLKCFG) == 1);

static constexpr uint16_t USIC0_CH0_BRG_SCLKCFG_id = 19;

/**
 * Converts USIC0_CH0_BRG_SCLKCFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_BRG_SCLKCFG instance)
{
    const char *result = "UNKNOWN USIC0_CH0_BRG_SCLKCFG";

    switch (instance)
    {
    case USIC0_CH0_BRG_SCLKCFG::value1:
        result = "value1";
        break;
    case USIC0_CH0_BRG_SCLKCFG::value2:
        result = "value2";
        break;
    case USIC0_CH0_BRG_SCLKCFG::value3:
        result = "value3";
        break;
    case USIC0_CH0_BRG_SCLKCFG::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_BRG_SCLKCFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_BRG_SCLKCFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_BRG_SCLKCFG::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_BRG_SCLKCFG::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_BRG_SCLKCFG::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_BRG_SCLKCFG::value4;
    }

    return result;
}

}; // namespace XMC4700
