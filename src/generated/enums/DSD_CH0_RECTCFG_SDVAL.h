/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_RECTCFG_SDVAL : uint8_t
{
    no_new_result_available /*!< No new result available */,
    bitfield_sdcap_has_been_updated_with_new_capt_cont =
        1 /*!< Bitfield SDCAP has been updated with a new captured value and
             has not yet been read */
};
static_assert(sizeof(DSD_CH0_RECTCFG_SDVAL) == 1);

/**
 * Converts DSD_CH0_RECTCFG_SDVAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_RECTCFG_SDVAL instance)
{
    const char *result = "UNKNOWN DSD_CH0_RECTCFG_SDVAL";

    switch (instance)
    {
    case DSD_CH0_RECTCFG_SDVAL::no_new_result_available:
        result = "no_new_result_available";
        break;
    case DSD_CH0_RECTCFG_SDVAL::
        bitfield_sdcap_has_been_updated_with_new_capt_cont:
        result = "bitfield_sdcap_has_been_updated_with_new_capt_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_RECTCFG_SDVAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_RECTCFG_SDVAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_new_result_available", 23)))
    {
        output = DSD_CH0_RECTCFG_SDVAL::no_new_result_available;
    }
    else if ((result = !strncmp(
                  data, "bitfield_sdcap_has_been_updated_with_new_capt_cont",
                  50)))
    {
        output = DSD_CH0_RECTCFG_SDVAL::
            bitfield_sdcap_has_been_updated_with_new_capt_cont;
    }

    return result;
}

}; // namespace XMC4700
