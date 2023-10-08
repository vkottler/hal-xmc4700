/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "A protocol interrupt is not generated if a change of signal MSLS is detected.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "A protocol interrupt is generated if a change of signal MSLS is detected.",
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

enum class USIC0_CH0_PCR_SSCMode_MSLSIEN : uint8_t
{
    value1 /*!< A protocol interrupt is not generated if a change of signal MSLS is detected. */,
    value2 = 1 /*!< A protocol interrupt is generated if a change of signal MSLS is detected. */
};
static_assert(sizeof(USIC0_CH0_PCR_SSCMode_MSLSIEN) == 1);

static constexpr uint16_t USIC0_CH0_PCR_SSCMode_MSLSIEN_id = 116;

/**
 * Converts USIC0_CH0_PCR_SSCMode_MSLSIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_SSCMode_MSLSIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_SSCMode_MSLSIEN";

    switch (instance)
    {
    case USIC0_CH0_PCR_SSCMode_MSLSIEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_SSCMode_MSLSIEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_SSCMode_MSLSIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_SSCMode_MSLSIEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_SSCMode_MSLSIEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_SSCMode_MSLSIEN::value2;
    }

    return result;
}

}; // namespace XMC4700
