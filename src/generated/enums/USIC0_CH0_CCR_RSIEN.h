/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The receiver start interrupt is disabled.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The receiver start interrupt is enabled. In case of a receiver start event, the service request output SRx indicated by INPR.TBINP is activated.",
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

enum class USIC0_CH0_CCR_RSIEN : uint8_t
{
    value1 /*!< The receiver start interrupt is disabled. */,
    value2 = 1 /*!< The receiver start interrupt is enabled. In case of a receiver start event, the service request output SRx indicated by INPR.TBINP is activated. */
};
static_assert(sizeof(USIC0_CH0_CCR_RSIEN) == 1);

static constexpr uint16_t USIC0_CH0_CCR_RSIEN_id = 149;

/**
 * Converts USIC0_CH0_CCR_RSIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_CCR_RSIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_CCR_RSIEN";

    switch (instance)
    {
    case USIC0_CH0_CCR_RSIEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_CCR_RSIEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_CCR_RSIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_CCR_RSIEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_CCR_RSIEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_CCR_RSIEN::value2;
    }

    return result;
}

}; // namespace XMC4700