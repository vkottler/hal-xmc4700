/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_REFCLR_REV6 : uint8_t
{
    value1 /*!< No action */,
    value2 = 1 /*!< Clear the result event flag in GxREFLAG */
};
static_assert(sizeof(VADC_REFCLR_REV6) == 1);

static constexpr uint16_t VADC_REFCLR_REV6_id = 1538;

/**
 * Converts VADC_REFCLR_REV6 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_REFCLR_REV6 instance)
{
    const char *result = "UNKNOWN VADC_REFCLR_REV6";

    switch (instance)
    {
    case VADC_REFCLR_REV6::value1:
        result = "value1";
        break;
    case VADC_REFCLR_REV6::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_REFCLR_REV6.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_REFCLR_REV6 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_REFCLR_REV6::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_REFCLR_REV6::value2;
    }

    return result;
}

}; // namespace XMC4700