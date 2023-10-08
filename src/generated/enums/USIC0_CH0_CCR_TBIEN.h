/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The transmit buffer interrupt is disabled.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The transmit buffer interrupt is enabled. In case of a transmit buffer event, the service request output SRx indicated by INPR.TBINP is activated.",
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

enum class USIC0_CH0_CCR_TBIEN : uint8_t
{
    value1 /*!< The transmit buffer interrupt is disabled. */,
    value2 = 1 /*!< The transmit buffer interrupt is enabled. In case of a transmit buffer event, the service request output SRx indicated by INPR.TBINP is activated. */
};
static_assert(sizeof(USIC0_CH0_CCR_TBIEN) == 1);

static constexpr uint16_t USIC0_CH0_CCR_TBIEN_id = 146;

/**
 * Converts USIC0_CH0_CCR_TBIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_CCR_TBIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_CCR_TBIEN";

    switch (instance)
    {
    case USIC0_CH0_CCR_TBIEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_CCR_TBIEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_CCR_TBIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_CCR_TBIEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_CCR_TBIEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_CCR_TBIEN::value2;
    }

    return result;
}

}; // namespace XMC4700
