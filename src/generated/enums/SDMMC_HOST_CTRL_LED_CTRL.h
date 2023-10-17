/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_HOST_CTRL_LED_CTRL : uint8_t
{
    _off /*!< LED off */,
    led = 1 /*!< LED on */
};
static_assert(sizeof(SDMMC_HOST_CTRL_LED_CTRL) == 1);

/**
 * Converts SDMMC_HOST_CTRL_LED_CTRL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_HOST_CTRL_LED_CTRL instance)
{
    const char *result = "UNKNOWN SDMMC_HOST_CTRL_LED_CTRL";

    switch (instance)
    {
    case SDMMC_HOST_CTRL_LED_CTRL::_off:
        result = "_off";
        break;
    case SDMMC_HOST_CTRL_LED_CTRL::led:
        result = "led";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_HOST_CTRL_LED_CTRL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_HOST_CTRL_LED_CTRL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_off", 4)))
    {
        output = SDMMC_HOST_CTRL_LED_CTRL::_off;
    }
    else if ((result = !strncmp(data, "led", 3)))
    {
        output = SDMMC_HOST_CTRL_LED_CTRL::led;
    }

    return result;
}

}; // namespace XMC4700
