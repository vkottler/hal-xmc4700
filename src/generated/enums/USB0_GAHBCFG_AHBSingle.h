/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GAHBCFG_AHBSingle : uint8_t
{
    incr_burst_cont /*!< The remaining data in a transfer is sent using INCR
                       burst size. This is the default mode. */
        ,
    single_bur_cont = 1 /*!< The remaining data in a transfer is sent using
                           single burst size. */
};
static_assert(sizeof(USB0_GAHBCFG_AHBSingle) == 1);

/**
 * Converts USB0_GAHBCFG_AHBSingle to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GAHBCFG_AHBSingle instance)
{
    const char *result = "UNKNOWN USB0_GAHBCFG_AHBSingle";

    switch (instance)
    {
    case USB0_GAHBCFG_AHBSingle::incr_burst_cont:
        result = "incr_burst_cont";
        break;
    case USB0_GAHBCFG_AHBSingle::single_bur_cont:
        result = "single_bur_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GAHBCFG_AHBSingle.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GAHBCFG_AHBSingle &output)
{
    bool result = false;

    if ((result = !strncmp(data, "incr_burst_cont", 15)))
    {
        output = USB0_GAHBCFG_AHBSingle::incr_burst_cont;
    }
    else if ((result = !strncmp(data, "single_bur_cont", 15)))
    {
        output = USB0_GAHBCFG_AHBSingle::single_bur_cont;
    }

    return result;
}

}; // namespace XMC4700
