/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "A transmit shift event has not occurred.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "A transmit shift event has occurred.",
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

enum class USIC0_CH0_PSR_TSIF : uint8_t
{
    value1 /*!< A transmit shift event has not occurred. */,
    value2 = 1 /*!< A transmit shift event has occurred. */
};
static_assert(sizeof(USIC0_CH0_PSR_TSIF) == 1);

static constexpr uint16_t USIC0_CH0_PSR_TSIF_id = 157;

/**
 * Converts USIC0_CH0_PSR_TSIF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_TSIF instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_TSIF";

    switch (instance)
    {
    case USIC0_CH0_PSR_TSIF::value1:
        result = "value1";
        break;
    case USIC0_CH0_PSR_TSIF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_TSIF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_TSIF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PSR_TSIF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PSR_TSIF::value2;
    }

    return result;
}

}; // namespace XMC4700
