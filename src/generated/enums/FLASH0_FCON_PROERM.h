/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FCON_PROERM : uint8_t
{
    interrupt_not_enabled /*!< Interrupt not enabled */,
    flash_interrupt_because_protection_error_enabled =
        1 /*!< Flash interrupt because of Protection Error is enabled */
};
static_assert(sizeof(FLASH0_FCON_PROERM) == 1);

/**
 * Converts FLASH0_FCON_PROERM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FCON_PROERM instance)
{
    const char *result = "UNKNOWN FLASH0_FCON_PROERM";

    switch (instance)
    {
    case FLASH0_FCON_PROERM::interrupt_not_enabled:
        result = "interrupt_not_enabled";
        break;
    case FLASH0_FCON_PROERM::flash_interrupt_because_protection_error_enabled:
        result = "flash_interrupt_because_protection_error_enabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FCON_PROERM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FCON_PROERM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "interrupt_not_enabled", 21)))
    {
        output = FLASH0_FCON_PROERM::interrupt_not_enabled;
    }
    else if ((result = !strncmp(
                  data, "flash_interrupt_because_protection_error_enabled",
                  48)))
    {
        output = FLASH0_FCON_PROERM::
            flash_interrupt_because_protection_error_enabled;
    }

    return result;
}

}; // namespace XMC4700
