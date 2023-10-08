/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "A protocol interrupt is not activated.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "A protocol interrupt is activated.",
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

enum class USIC0_CH0_PCR_IISMode_ENDIEN : uint8_t
{
    value1 /*!< A protocol interrupt is not activated. */,
    value2 = 1 /*!< A protocol interrupt is activated. */
};
static_assert(sizeof(USIC0_CH0_PCR_IISMode_ENDIEN) == 1);

static constexpr uint16_t USIC0_CH0_PCR_IISMode_ENDIEN_id = 137;

/**
 * Converts USIC0_CH0_PCR_IISMode_ENDIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_IISMode_ENDIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_IISMode_ENDIEN";

    switch (instance)
    {
    case USIC0_CH0_PCR_IISMode_ENDIEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_IISMode_ENDIEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_IISMode_ENDIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_IISMode_ENDIEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_IISMode_ENDIEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_IISMode_ENDIEN::value2;
    }

    return result;
}

}; // namespace XMC4700
