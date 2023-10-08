/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "The standard receive buffer event trigger through bit TRBSR.SRBT is disabled.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "The standard receive buffer event trigger through bit TRBSR.SRBT is enabled.",
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

enum class USIC0_CH0_RBCTR_SRBTEN : uint8_t
{
    value1 /*!< The standard receive buffer event trigger through bit TRBSR.SRBT is disabled. */,
    value2 = 1 /*!< The standard receive buffer event trigger through bit TRBSR.SRBT is enabled. */
};
static_assert(sizeof(USIC0_CH0_RBCTR_SRBTEN) == 1);

static constexpr uint16_t USIC0_CH0_RBCTR_SRBTEN_id = 279;

/**
 * Converts USIC0_CH0_RBCTR_SRBTEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_RBCTR_SRBTEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_RBCTR_SRBTEN";

    switch (instance)
    {
    case USIC0_CH0_RBCTR_SRBTEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_RBCTR_SRBTEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_RBCTR_SRBTEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_RBCTR_SRBTEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_RBCTR_SRBTEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_RBCTR_SRBTEN::value2;
    }

    return result;
}

}; // namespace XMC4700