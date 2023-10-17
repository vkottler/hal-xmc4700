/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_PROCON0_RPRO : uint8_t
{
    no_read_protection_configured /*!< No read protection configured */,
    read_protection_global_write_protection_confi_cont =
        1 /*!< Read protection and global write protection is configured by
             user 0 (master user) */
};
static_assert(sizeof(FLASH0_PROCON0_RPRO) == 1);

/**
 * Converts FLASH0_PROCON0_RPRO to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_PROCON0_RPRO instance)
{
    const char *result = "UNKNOWN FLASH0_PROCON0_RPRO";

    switch (instance)
    {
    case FLASH0_PROCON0_RPRO::no_read_protection_configured:
        result = "no_read_protection_configured";
        break;
    case FLASH0_PROCON0_RPRO::
        read_protection_global_write_protection_confi_cont:
        result = "read_protection_global_write_protection_confi_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_PROCON0_RPRO.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_PROCON0_RPRO &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_read_protection_configured", 29)))
    {
        output = FLASH0_PROCON0_RPRO::no_read_protection_configured;
    }
    else if ((result = !strncmp(
                  data, "read_protection_global_write_protection_confi_cont",
                  50)))
    {
        output = FLASH0_PROCON0_RPRO::
            read_protection_global_write_protection_confi_cont;
    }

    return result;
}

}; // namespace XMC4700
