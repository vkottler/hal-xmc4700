/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBTF_CDWC : uint8_t
{
    no_write_access_parameters /*!< No write access to parameters */,
    bitfields_cdsel_cden_cdgr_can_be_written =
        1 /*!< Bitfields CDSEL, CDEN, CDGR can be written */
};
static_assert(sizeof(VADC_GLOBTF_CDWC) == 1);

/**
 * Converts VADC_GLOBTF_CDWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBTF_CDWC instance)
{
    const char *result = "UNKNOWN VADC_GLOBTF_CDWC";

    switch (instance)
    {
    case VADC_GLOBTF_CDWC::no_write_access_parameters:
        result = "no_write_access_parameters";
        break;
    case VADC_GLOBTF_CDWC::bitfields_cdsel_cden_cdgr_can_be_written:
        result = "bitfields_cdsel_cden_cdgr_can_be_written";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBTF_CDWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBTF_CDWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_write_access_parameters", 26)))
    {
        output = VADC_GLOBTF_CDWC::no_write_access_parameters;
    }
    else if ((result = !strncmp(
                  data, "bitfields_cdsel_cden_cdgr_can_be_written", 40)))
    {
        output = VADC_GLOBTF_CDWC::bitfields_cdsel_cden_cdgr_can_be_written;
    }

    return result;
}

}; // namespace XMC4700
