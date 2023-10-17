/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GAHBCFG_AHBSingle : uint8_t
{
    incr_burst_size_this_default_mode /*!< The remaining data in a transfer is
                                         sent using INCR burst size. This is
                                         the default mode. */
        ,
    single_burst_size = 1 /*!< The remaining data in a transfer is sent using
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
    case USB0_GAHBCFG_AHBSingle::incr_burst_size_this_default_mode:
        result = "incr_burst_size_this_default_mode";
        break;
    case USB0_GAHBCFG_AHBSingle::single_burst_size:
        result = "single_burst_size";
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

    if ((result = !strncmp(data, "incr_burst_size_this_default_mode", 33)))
    {
        output = USB0_GAHBCFG_AHBSingle::incr_burst_size_this_default_mode;
    }
    else if ((result = !strncmp(data, "single_burst_size", 17)))
    {
        output = USB0_GAHBCFG_AHBSingle::single_burst_size;
    }

    return result;
}

}; // namespace XMC4700
