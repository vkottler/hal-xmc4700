/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_EMUXCTR_EMXCSS : uint8_t
{
    value1 /*!< Channel number: Bitfield EMUXCH selects an arbitrary channel */
        ,
    value2 = 1 /*!< Channel enable: Each bit of bitfield EMUXCH selects the
                  associated channel for EMUX control */
};
static_assert(sizeof(VADC_G0_EMUXCTR_EMXCSS) == 1);

static constexpr uint16_t VADC_G0_EMUXCTR_EMXCSS_id = 1086;

/**
 * Converts VADC_G0_EMUXCTR_EMXCSS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_EMUXCTR_EMXCSS instance)
{
    const char *result = "UNKNOWN VADC_G0_EMUXCTR_EMXCSS";

    switch (instance)
    {
    case VADC_G0_EMUXCTR_EMXCSS::value1:
        result = "value1";
        break;
    case VADC_G0_EMUXCTR_EMXCSS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_EMUXCTR_EMXCSS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_EMUXCTR_EMXCSS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_EMUXCTR_EMXCSS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_EMUXCTR_EMXCSS::value2;
    }

    return result;
}

}; // namespace XMC4700
