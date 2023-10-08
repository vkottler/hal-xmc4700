/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "A format error 0 has not been detected.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "A format error 0 has been detected.",
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

enum class USIC0_CH0_PSR_ASCMode_FER0 : uint8_t
{
    value1 /*!< A format error 0 has not been detected. */,
    value2 = 1 /*!< A format error 0 has been detected. */
};
static_assert(sizeof(USIC0_CH0_PSR_ASCMode_FER0) == 1);

static constexpr uint16_t USIC0_CH0_PSR_ASCMode_FER0_id = 171;

/**
 * Converts USIC0_CH0_PSR_ASCMode_FER0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_ASCMode_FER0 instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_ASCMode_FER0";

    switch (instance)
    {
    case USIC0_CH0_PSR_ASCMode_FER0::value1:
        result = "value1";
        break;
    case USIC0_CH0_PSR_ASCMode_FER0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_ASCMode_FER0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_ASCMode_FER0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PSR_ASCMode_FER0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PSR_ASCMode_FER0::value2;
    }

    return result;
}

}; // namespace XMC4700
