/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_QSR0_REQGT : uint8_t
{
    low /*!< The gate input is low */,
    high = 1 /*!< The gate input is high */
};
static_assert(sizeof(VADC_G0_QSR0_REQGT) == 1);

/**
 * Converts VADC_G0_QSR0_REQGT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_QSR0_REQGT instance)
{
    const char *result = "UNKNOWN VADC_G0_QSR0_REQGT";

    switch (instance)
    {
    case VADC_G0_QSR0_REQGT::low:
        result = "low";
        break;
    case VADC_G0_QSR0_REQGT::high:
        result = "high";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_QSR0_REQGT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_QSR0_REQGT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "low", 3)))
    {
        output = VADC_G0_QSR0_REQGT::low;
    }
    else if ((result = !strncmp(data, "high", 4)))
    {
        output = VADC_G0_QSR0_REQGT::high;
    }

    return result;
}

}; // namespace XMC4700
