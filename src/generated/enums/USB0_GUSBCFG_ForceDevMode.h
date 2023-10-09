/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GUSBCFG_ForceDevMode : uint8_t
{
    value1 /*!< Normal Mode */,
    value2 = 1 /*!< Force Device Mode */
};
static_assert(sizeof(USB0_GUSBCFG_ForceDevMode) == 1);

static constexpr uint16_t USB0_GUSBCFG_ForceDevMode_id = 325;

/**
 * Converts USB0_GUSBCFG_ForceDevMode to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GUSBCFG_ForceDevMode instance)
{
    const char *result = "UNKNOWN USB0_GUSBCFG_ForceDevMode";

    switch (instance)
    {
    case USB0_GUSBCFG_ForceDevMode::value1:
        result = "value1";
        break;
    case USB0_GUSBCFG_ForceDevMode::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GUSBCFG_ForceDevMode.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GUSBCFG_ForceDevMode &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GUSBCFG_ForceDevMode::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GUSBCFG_ForceDevMode::value2;
    }

    return result;
}

}; // namespace XMC4700
