/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Since TVC has been set, at least one data buffer underflow condition has occurred.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Since TVC has been set, no data buffer underflow condition has occurred.",
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

enum class USIC0_CH0_TCSR_TVC : uint8_t
{
    value1 /*!< Since TVC has been set, at least one data buffer underflow condition has occurred. */,
    value2 = 1 /*!< Since TVC has been set, no data buffer underflow condition has occurred. */
};
static_assert(sizeof(USIC0_CH0_TCSR_TVC) == 1);

static constexpr uint16_t USIC0_CH0_TCSR_TVC_id = 84;

/**
 * Converts USIC0_CH0_TCSR_TVC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_TVC instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_TVC";

    switch (instance)
    {
    case USIC0_CH0_TCSR_TVC::value1:
        result = "value1";
        break;
    case USIC0_CH0_TCSR_TVC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_TVC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_TVC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_TCSR_TVC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_TCSR_TVC::value2;
    }

    return result;
}

}; // namespace XMC4700
