/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_EMUXCTR_EMXWC : uint8_t
{
    value1 /*!< No write access to EMUX cfg. */,
    value2 = 1 /*!< Bitfields EMXMODE, EMXCOD, EMXST, EMXCSS can be written */
};
static_assert(sizeof(VADC_G0_EMUXCTR_EMXWC) == 1);

static constexpr uint16_t VADC_G0_EMUXCTR_EMXWC_id = 1085;

/**
 * Converts VADC_G0_EMUXCTR_EMXWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_EMUXCTR_EMXWC instance)
{
    const char *result = "UNKNOWN VADC_G0_EMUXCTR_EMXWC";

    switch (instance)
    {
    case VADC_G0_EMUXCTR_EMXWC::value1:
        result = "value1";
        break;
    case VADC_G0_EMUXCTR_EMXWC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_EMUXCTR_EMXWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_EMUXCTR_EMXWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_EMUXCTR_EMXWC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_EMUXCTR_EMXWC::value2;
    }

    return result;
}

}; // namespace XMC4700
