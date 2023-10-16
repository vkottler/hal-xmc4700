/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_BRSMR_ENGT : uint8_t
{
    value1 /*!< No conversion requests are issued */,
    value2 = 1 /*!< Conversion requests are issued if at least one pending bit is set */,
    value3 = 2 /*!< Conversion requests are issued if at least one pending bit is set and REQGTx = 1. */,
    value4 = 3 /*!< Conversion requests are issued if at least one pending bit is set and REQGTx = 0. */
};
static_assert(sizeof(VADC_BRSMR_ENGT) == 1);

/**
 * Converts VADC_BRSMR_ENGT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_BRSMR_ENGT instance)
{
    const char *result = "UNKNOWN VADC_BRSMR_ENGT";

    switch (instance)
    {
    case VADC_BRSMR_ENGT::value1:
        result = "value1";
        break;
    case VADC_BRSMR_ENGT::value2:
        result = "value2";
        break;
    case VADC_BRSMR_ENGT::value3:
        result = "value3";
        break;
    case VADC_BRSMR_ENGT::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_BRSMR_ENGT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_BRSMR_ENGT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_BRSMR_ENGT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_BRSMR_ENGT::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_BRSMR_ENGT::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_BRSMR_ENGT::value4;
    }

    return result;
}

}; // namespace XMC4700
