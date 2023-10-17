/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_EMUXCTR_EMXST : uint8_t
{
    whenever_setting_changes /*!< Use STCE whenever the setting changes */,
    each_conversion_an_external_channel =
        1 /*!< Use STCE for each conversion of an external channel */
};
static_assert(sizeof(VADC_G0_EMUXCTR_EMXST) == 1);

/**
 * Converts VADC_G0_EMUXCTR_EMXST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_EMUXCTR_EMXST instance)
{
    const char *result = "UNKNOWN VADC_G0_EMUXCTR_EMXST";

    switch (instance)
    {
    case VADC_G0_EMUXCTR_EMXST::whenever_setting_changes:
        result = "whenever_setting_changes";
        break;
    case VADC_G0_EMUXCTR_EMXST::each_conversion_an_external_channel:
        result = "each_conversion_an_external_channel";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_EMUXCTR_EMXST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_EMUXCTR_EMXST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "whenever_setting_changes", 24)))
    {
        output = VADC_G0_EMUXCTR_EMXST::whenever_setting_changes;
    }
    else if ((result =
                  !strncmp(data, "each_conversion_an_external_channel", 35)))
    {
        output = VADC_G0_EMUXCTR_EMXST::each_conversion_an_external_channel;
    }

    return result;
}

}; // namespace XMC4700
