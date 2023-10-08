/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Output SR0 becomes activated.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Output SR1 becomes activated.",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Output SR2 becomes activated.",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Output SR3 becomes activated.",
 *       "value": 3
 *     },
 *     "value5": {
 *       "description": "Output SR4 becomes activated.",
 *       "value": 4
 *     },
 *     "value6": {
 *       "description": "Output SR5 becomes activated.",
 *       "value": 5
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

enum class USIC0_CH0_TBCTR_ATBINP : uint8_t
{
    value1 /*!< Output SR0 becomes activated. */,
    value2 = 1 /*!< Output SR1 becomes activated. */,
    value3 = 2 /*!< Output SR2 becomes activated. */,
    value4 = 3 /*!< Output SR3 becomes activated. */,
    value5 = 4 /*!< Output SR4 becomes activated. */,
    value6 = 5 /*!< Output SR5 becomes activated. */
};
static_assert(sizeof(USIC0_CH0_TBCTR_ATBINP) == 1);

static constexpr uint16_t USIC0_CH0_TBCTR_ATBINP_id = 266;

/**
 * Converts USIC0_CH0_TBCTR_ATBINP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TBCTR_ATBINP instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TBCTR_ATBINP";

    switch (instance)
    {
    case USIC0_CH0_TBCTR_ATBINP::value1:
        result = "value1";
        break;
    case USIC0_CH0_TBCTR_ATBINP::value2:
        result = "value2";
        break;
    case USIC0_CH0_TBCTR_ATBINP::value3:
        result = "value3";
        break;
    case USIC0_CH0_TBCTR_ATBINP::value4:
        result = "value4";
        break;
    case USIC0_CH0_TBCTR_ATBINP::value5:
        result = "value5";
        break;
    case USIC0_CH0_TBCTR_ATBINP::value6:
        result = "value6";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TBCTR_ATBINP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TBCTR_ATBINP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_TBCTR_ATBINP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_TBCTR_ATBINP::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_TBCTR_ATBINP::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_TBCTR_ATBINP::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = USIC0_CH0_TBCTR_ATBINP::value5;
    }
    else if ((result = !strncmp(data, "value6", 6)))
    {
        output = USIC0_CH0_TBCTR_ATBINP::value6;
    }

    return result;
}

}; // namespace XMC4700
