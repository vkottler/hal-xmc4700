/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GUSBCFG_PHYSel : uint8_t
{
    value2 = 1 /*!< USB 1.1 full-speed serial transceiver */
};
static_assert(sizeof(USB0_GUSBCFG_PHYSel) == 1);

/**
 * Converts USB0_GUSBCFG_PHYSel to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GUSBCFG_PHYSel instance)
{
    const char *result = "UNKNOWN USB0_GUSBCFG_PHYSel";

    switch (instance)
    {
    case USB0_GUSBCFG_PHYSel::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GUSBCFG_PHYSel.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GUSBCFG_PHYSel &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GUSBCFG_PHYSel::value2;
    }

    return result;
}

}; // namespace XMC4700
