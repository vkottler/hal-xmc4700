/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_SEFCLR_SEV1 : uint8_t
{
    no_action /*!< No action */,
    clear_source_event_flag_gxseflag =
        1 /*!< Clear the source event flag in GxSEFLAG */
};
static_assert(sizeof(VADC_G0_SEFCLR_SEV1) == 1);

/**
 * Converts VADC_G0_SEFCLR_SEV1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_SEFCLR_SEV1 instance)
{
    const char *result = "UNKNOWN VADC_G0_SEFCLR_SEV1";

    switch (instance)
    {
    case VADC_G0_SEFCLR_SEV1::no_action:
        result = "no_action";
        break;
    case VADC_G0_SEFCLR_SEV1::clear_source_event_flag_gxseflag:
        result = "clear_source_event_flag_gxseflag";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_SEFCLR_SEV1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_SEFCLR_SEV1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = VADC_G0_SEFCLR_SEV1::no_action;
    }
    else if ((result = !strncmp(data, "clear_source_event_flag_gxseflag", 32)))
    {
        output = VADC_G0_SEFCLR_SEV1::clear_source_event_flag_gxseflag;
    }

    return result;
}

}; // namespace XMC4700
