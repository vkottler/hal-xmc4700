/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBCFG_DIVWC : uint8_t
{
    no_write_access_divider_parameters /*!< No write access to divider
                                          parameters */
        ,
    bitfields_diva_dcmsb_divd_can_be_written =
        1 /*!< Bitfields DIVA, DCMSB, DIVD can be written */
};
static_assert(sizeof(VADC_GLOBCFG_DIVWC) == 1);

/**
 * Converts VADC_GLOBCFG_DIVWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBCFG_DIVWC instance)
{
    const char *result = "UNKNOWN VADC_GLOBCFG_DIVWC";

    switch (instance)
    {
    case VADC_GLOBCFG_DIVWC::no_write_access_divider_parameters:
        result = "no_write_access_divider_parameters";
        break;
    case VADC_GLOBCFG_DIVWC::bitfields_diva_dcmsb_divd_can_be_written:
        result = "bitfields_diva_dcmsb_divd_can_be_written";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBCFG_DIVWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBCFG_DIVWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_write_access_divider_parameters", 34)))
    {
        output = VADC_GLOBCFG_DIVWC::no_write_access_divider_parameters;
    }
    else if ((result = !strncmp(
                  data, "bitfields_diva_dcmsb_divd_can_be_written", 40)))
    {
        output = VADC_GLOBCFG_DIVWC::bitfields_diva_dcmsb_divd_can_be_written;
    }

    return result;
}

}; // namespace XMC4700
