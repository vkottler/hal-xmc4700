/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "There is 1 ( if EMPTY = 0) or no (if EMPTY = 1) valid entry in the queue",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "There are 2 valid entries in the queue",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "There are 3 valid entries in the queue",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "There are 8 valid entries in the queue",
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

enum class VADC_G0_QSR0_FILL : uint8_t
{
    value1 /*!< There is 1 ( if EMPTY = 0) or no (if EMPTY = 1) valid entry in the queue */,
    value2 = 1 /*!< There are 2 valid entries in the queue */,
    value3 = 2 /*!< There are 3 valid entries in the queue */,
    value4 = 7 /*!< There are 8 valid entries in the queue */
};
static_assert(sizeof(VADC_G0_QSR0_FILL) == 1);

static constexpr uint16_t VADC_G0_QSR0_FILL_id = 959;

/**
 * Converts VADC_G0_QSR0_FILL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_QSR0_FILL instance)
{
    const char *result = "UNKNOWN VADC_G0_QSR0_FILL";

    switch (instance)
    {
    case VADC_G0_QSR0_FILL::value1:
        result = "value1";
        break;
    case VADC_G0_QSR0_FILL::value2:
        result = "value2";
        break;
    case VADC_G0_QSR0_FILL::value3:
        result = "value3";
        break;
    case VADC_G0_QSR0_FILL::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_QSR0_FILL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_QSR0_FILL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_QSR0_FILL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_QSR0_FILL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_G0_QSR0_FILL::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_G0_QSR0_FILL::value4;
    }

    return result;
}

}; // namespace XMC4700
