/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The bypass data is not valid.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The bypass data is valid.",
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

enum class USIC0_CH0_BYPCR_BDV : uint8_t
{
    value1 /*!< The bypass data is not valid. */,
    value2 = 1 /*!< The bypass data is valid. */
};
static_assert(sizeof(USIC0_CH0_BYPCR_BDV) == 1);

static constexpr uint16_t USIC0_CH0_BYPCR_BDV_id = 257;

/**
 * Converts USIC0_CH0_BYPCR_BDV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_BYPCR_BDV instance)
{
    const char *result = "UNKNOWN USIC0_CH0_BYPCR_BDV";

    switch (instance)
    {
    case USIC0_CH0_BYPCR_BDV::value1:
        result = "value1";
        break;
    case USIC0_CH0_BYPCR_BDV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_BYPCR_BDV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_BYPCR_BDV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_BYPCR_BDV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_BYPCR_BDV::value2;
    }

    return result;
}

}; // namespace XMC4700