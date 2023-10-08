/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The pulse length is equal to the bit length (no shortened 0).",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The pulse length of a 0 bit is 2 time quanta.",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "The pulse length of a 0 bit is 3 time quanta.",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "The pulse length of a 0 bit is 8 time quanta.",
 *       "value": 7
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

enum class USIC0_CH0_PCR_ASCMode_PL : uint8_t
{
    value1 /*!< The pulse length is equal to the bit length (no shortened 0). */,
    value2 = 1 /*!< The pulse length of a 0 bit is 2 time quanta. */,
    value3 = 2 /*!< The pulse length of a 0 bit is 3 time quanta. */,
    value4 = 7 /*!< The pulse length of a 0 bit is 8 time quanta. */
};
static_assert(sizeof(USIC0_CH0_PCR_ASCMode_PL) == 1);

static constexpr uint16_t USIC0_CH0_PCR_ASCMode_PL_id = 102;

/**
 * Converts USIC0_CH0_PCR_ASCMode_PL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_ASCMode_PL instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_ASCMode_PL";

    switch (instance)
    {
    case USIC0_CH0_PCR_ASCMode_PL::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_ASCMode_PL::value2:
        result = "value2";
        break;
    case USIC0_CH0_PCR_ASCMode_PL::value3:
        result = "value3";
        break;
    case USIC0_CH0_PCR_ASCMode_PL::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_ASCMode_PL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_ASCMode_PL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_PL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_PL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_PL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_PCR_ASCMode_PL::value4;
    }

    return result;
}

}; // namespace XMC4700
