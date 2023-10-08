/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "fCTQIN = fPDIV",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "fCTQIN = fPPP",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "fCTQIN = fSCLK",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "fCTQIN = fMCLK",
 *       "value": 3
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

enum class USIC0_CH0_PCR_SSCMode_CTQSEL1 : uint8_t
{
    value1 /*!< fCTQIN = fPDIV */,
    value2 = 1 /*!< fCTQIN = fPPP */,
    value3 = 2 /*!< fCTQIN = fSCLK */,
    value4 = 3 /*!< fCTQIN = fMCLK */
};
static_assert(sizeof(USIC0_CH0_PCR_SSCMode_CTQSEL1) == 1);

static constexpr uint16_t USIC0_CH0_PCR_SSCMode_CTQSEL1_id = 118;

/**
 * Converts USIC0_CH0_PCR_SSCMode_CTQSEL1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PCR_SSCMode_CTQSEL1 instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PCR_SSCMode_CTQSEL1";

    switch (instance)
    {
    case USIC0_CH0_PCR_SSCMode_CTQSEL1::value1:
        result = "value1";
        break;
    case USIC0_CH0_PCR_SSCMode_CTQSEL1::value2:
        result = "value2";
        break;
    case USIC0_CH0_PCR_SSCMode_CTQSEL1::value3:
        result = "value3";
        break;
    case USIC0_CH0_PCR_SSCMode_CTQSEL1::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PCR_SSCMode_CTQSEL1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PCR_SSCMode_CTQSEL1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_PCR_SSCMode_CTQSEL1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_PCR_SSCMode_CTQSEL1::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_PCR_SSCMode_CTQSEL1::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_PCR_SSCMode_CTQSEL1::value4;
    }

    return result;
}

}; // namespace XMC4700
