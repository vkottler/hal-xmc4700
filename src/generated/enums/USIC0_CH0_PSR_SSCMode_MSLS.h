/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The internal signal MSLS is inactive (0).",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The internal signal MSLS is active (1).",
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

enum class USIC0_CH0_PSR_SSCMode_MSLS : uint8_t
{
    value1 /*!< The internal signal MSLS is inactive (0). */,
    value2 = 1 /*!< The internal signal MSLS is active (1). */
};
static_assert(sizeof(USIC0_CH0_PSR_SSCMode_MSLS) == 1);

static constexpr uint16_t USIC0_CH0_PSR_SSCMode_MSLS_id = 188;

/**
 * Converts USIC0_CH0_PSR_SSCMode_MSLS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_SSCMode_MSLS instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_SSCMode_MSLS";

    switch (instance)
    {
    case USIC0_CH0_PSR_SSCMode_MSLS::value1:
        result = "value1";
        break;
    case USIC0_CH0_PSR_SSCMode_MSLS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_SSCMode_MSLS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_SSCMode_MSLS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PSR_SSCMode_MSLS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PSR_SSCMode_MSLS::value2;
    }

    return result;
}

}; // namespace XMC4700