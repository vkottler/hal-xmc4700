/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The transmitter line has not yet been idle.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The transmitter line has been idle and frame transmission is possible.",
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

enum class USIC0_CH0_PSR_ASCMode_TXIDLE : uint8_t
{
    value1 /*!< The transmitter line has not yet been idle. */,
    value2 = 1 /*!< The transmitter line has been idle and frame transmission is possible. */
};
static_assert(sizeof(USIC0_CH0_PSR_ASCMode_TXIDLE) == 1);

static constexpr uint16_t USIC0_CH0_PSR_ASCMode_TXIDLE_id = 176;

/**
 * Converts USIC0_CH0_PSR_ASCMode_TXIDLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_ASCMode_TXIDLE instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_ASCMode_TXIDLE";

    switch (instance)
    {
    case USIC0_CH0_PSR_ASCMode_TXIDLE::value1:
        result = "value1";
        break;
    case USIC0_CH0_PSR_ASCMode_TXIDLE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_ASCMode_TXIDLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_ASCMode_TXIDLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PSR_ASCMode_TXIDLE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PSR_ASCMode_TXIDLE::value2;
    }

    return result;
}

}; // namespace XMC4700
