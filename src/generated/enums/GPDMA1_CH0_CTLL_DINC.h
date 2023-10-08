/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Increment",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Decrement",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "No change",
 *       "value": 2
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

enum class GPDMA1_CH0_CTLL_DINC : uint8_t
{
    value1 /*!< Increment */,
    value2 = 1 /*!< Decrement */,
    value3 = 2 /*!< No change */
};
static_assert(sizeof(GPDMA1_CH0_CTLL_DINC) == 1);

static constexpr uint16_t GPDMA1_CH0_CTLL_DINC_id = 1997;

/**
 * Converts GPDMA1_CH0_CTLL_DINC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA1_CH0_CTLL_DINC instance)
{
    const char *result = "UNKNOWN GPDMA1_CH0_CTLL_DINC";

    switch (instance)
    {
    case GPDMA1_CH0_CTLL_DINC::value1:
        result = "value1";
        break;
    case GPDMA1_CH0_CTLL_DINC::value2:
        result = "value2";
        break;
    case GPDMA1_CH0_CTLL_DINC::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA1_CH0_CTLL_DINC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA1_CH0_CTLL_DINC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA1_CH0_CTLL_DINC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA1_CH0_CTLL_DINC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = GPDMA1_CH0_CTLL_DINC::value3;
    }

    return result;
}

}; // namespace XMC4700
