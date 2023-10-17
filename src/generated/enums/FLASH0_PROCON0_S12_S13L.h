/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_PROCON0_S12_S13L : uint8_t
{
    no_write_protection_configured_sectors_1213 /*!< No write protection is
                                                   configured for sectors
                                                   12+13. */
        ,
    write_protection_configured_sectors_1213 =
        1 /*!< Write protection is configured for sectors 12+13. */
};
static_assert(sizeof(FLASH0_PROCON0_S12_S13L) == 1);

/**
 * Converts FLASH0_PROCON0_S12_S13L to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_PROCON0_S12_S13L instance)
{
    const char *result = "UNKNOWN FLASH0_PROCON0_S12_S13L";

    switch (instance)
    {
    case FLASH0_PROCON0_S12_S13L::no_write_protection_configured_sectors_1213:
        result = "no_write_protection_configured_sectors_1213";
        break;
    case FLASH0_PROCON0_S12_S13L::write_protection_configured_sectors_1213:
        result = "write_protection_configured_sectors_1213";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_PROCON0_S12_S13L.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_PROCON0_S12_S13L &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_write_protection_configured_sectors_1213",
                           43)))
    {
        output = FLASH0_PROCON0_S12_S13L::
            no_write_protection_configured_sectors_1213;
    }
    else if ((result = !strncmp(
                  data, "write_protection_configured_sectors_1213", 40)))
    {
        output =
            FLASH0_PROCON0_S12_S13L::write_protection_configured_sectors_1213;
    }

    return result;
}

}; // namespace XMC4700
