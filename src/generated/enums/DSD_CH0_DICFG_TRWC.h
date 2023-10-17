/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_DICFG_TRWC : uint8_t
{
    no_write_access_trigger_parameters /*!< No write access to trigger
                                          parameters */
        ,
    bitfields_trsel_tstrmode_itrmode_can_be_written =
        1 /*!< Bitfields TRSEL, TSTRMODE, ITRMODE can be written */
};
static_assert(sizeof(DSD_CH0_DICFG_TRWC) == 1);

/**
 * Converts DSD_CH0_DICFG_TRWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_DICFG_TRWC instance)
{
    const char *result = "UNKNOWN DSD_CH0_DICFG_TRWC";

    switch (instance)
    {
    case DSD_CH0_DICFG_TRWC::no_write_access_trigger_parameters:
        result = "no_write_access_trigger_parameters";
        break;
    case DSD_CH0_DICFG_TRWC::bitfields_trsel_tstrmode_itrmode_can_be_written:
        result = "bitfields_trsel_tstrmode_itrmode_can_be_written";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_DICFG_TRWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_DICFG_TRWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_write_access_trigger_parameters", 34)))
    {
        output = DSD_CH0_DICFG_TRWC::no_write_access_trigger_parameters;
    }
    else if ((result = !strncmp(
                  data, "bitfields_trsel_tstrmode_itrmode_can_be_written",
                  47)))
    {
        output = DSD_CH0_DICFG_TRWC::
            bitfields_trsel_tstrmode_itrmode_can_be_written;
    }

    return result;
}

}; // namespace XMC4700
