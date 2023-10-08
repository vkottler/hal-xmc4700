/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The divider is switched off, fFD = 0.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Normal divider mode selected.",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Fractional divider mode selected.",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "The divider is switched off, fFD = 0.",
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

enum class USIC0_CH0_FDR_DM : uint8_t
{
    value1 /*!< The divider is switched off, fFD = 0. */,
    value2 = 1 /*!< Normal divider mode selected. */,
    value3 = 2 /*!< Fractional divider mode selected. */,
    value4 = 3 /*!< The divider is switched off, fFD = 0. */
};
static_assert(sizeof(USIC0_CH0_FDR_DM) == 1);

static constexpr uint16_t USIC0_CH0_FDR_DM_id = 18;

/**
 * Converts USIC0_CH0_FDR_DM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_FDR_DM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_FDR_DM";

    switch (instance)
    {
    case USIC0_CH0_FDR_DM::value1:
        result = "value1";
        break;
    case USIC0_CH0_FDR_DM::value2:
        result = "value2";
        break;
    case USIC0_CH0_FDR_DM::value3:
        result = "value3";
        break;
    case USIC0_CH0_FDR_DM::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_FDR_DM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_FDR_DM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_FDR_DM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_FDR_DM::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_FDR_DM::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_FDR_DM::value4;
    }

    return result;
}

}; // namespace XMC4700