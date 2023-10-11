/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GAHBCFG_GlblIntrMsk : uint8_t
{
    value1 /*!< Mask the interrupt assertion to the application. */,
    value2 = 1 /*!< Unmask the interrupt assertion to the application. */
};
static_assert(sizeof(USB0_GAHBCFG_GlblIntrMsk) == 1);

static constexpr uint16_t USB0_GAHBCFG_GlblIntrMsk_id = 3117;

/**
 * Converts USB0_GAHBCFG_GlblIntrMsk to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GAHBCFG_GlblIntrMsk instance)
{
    const char *result = "UNKNOWN USB0_GAHBCFG_GlblIntrMsk";

    switch (instance)
    {
    case USB0_GAHBCFG_GlblIntrMsk::value1:
        result = "value1";
        break;
    case USB0_GAHBCFG_GlblIntrMsk::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GAHBCFG_GlblIntrMsk.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GAHBCFG_GlblIntrMsk &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GAHBCFG_GlblIntrMsk::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GAHBCFG_GlblIntrMsk::value2;
    }

    return result;
}

}; // namespace XMC4700
