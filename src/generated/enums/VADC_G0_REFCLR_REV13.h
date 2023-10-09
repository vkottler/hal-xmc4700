/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_REFCLR_REV13 : uint8_t
{
    value1 /*!< No action */,
    value2 = 1 /*!< Clear the result event flag in GxREFLAG */
};
static_assert(sizeof(VADC_G0_REFCLR_REV13) == 1);

static constexpr uint16_t VADC_G0_REFCLR_REV13_id = 1035;

/**
 * Converts VADC_G0_REFCLR_REV13 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_REFCLR_REV13 instance)
{
    const char *result = "UNKNOWN VADC_G0_REFCLR_REV13";

    switch (instance)
    {
    case VADC_G0_REFCLR_REV13::value1:
        result = "value1";
        break;
    case VADC_G0_REFCLR_REV13::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_REFCLR_REV13.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_REFCLR_REV13 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_REFCLR_REV13::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_REFCLR_REV13::value2;
    }

    return result;
}

}; // namespace XMC4700
