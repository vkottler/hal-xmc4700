/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_ASSEL_CHSEL0 : uint8_t
{
    value1 /*!< Ignore this channel */,
    value2 = 1 /*!< This channel is part of the scan sequence */
};
static_assert(sizeof(VADC_ASSEL_CHSEL0) == 1);

static constexpr uint16_t VADC_ASSEL_CHSEL0_id = 1486;

/**
 * Converts VADC_ASSEL_CHSEL0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_ASSEL_CHSEL0 instance)
{
    const char *result = "UNKNOWN VADC_ASSEL_CHSEL0";

    switch (instance)
    {
    case VADC_ASSEL_CHSEL0::value1:
        result = "value1";
        break;
    case VADC_ASSEL_CHSEL0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_ASSEL_CHSEL0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_ASSEL_CHSEL0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_ASSEL_CHSEL0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_ASSEL_CHSEL0::value2;
    }

    return result;
}

}; // namespace XMC4700
