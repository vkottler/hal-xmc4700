/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_PROCON2_S14_S15ROM : uint8_t
{
    no_rom_functionality_configured_sectors_1415 /*!< No ROM functionality is
                                                    configured for sectors
                                                    14+15. */
        ,
    rom_functionality_configured_sectors_1415 =
        1 /*!< ROM functionality is configured for sectors 14+15. */
};
static_assert(sizeof(FLASH0_PROCON2_S14_S15ROM) == 1);

/**
 * Converts FLASH0_PROCON2_S14_S15ROM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_PROCON2_S14_S15ROM instance)
{
    const char *result = "UNKNOWN FLASH0_PROCON2_S14_S15ROM";

    switch (instance)
    {
    case FLASH0_PROCON2_S14_S15ROM::
        no_rom_functionality_configured_sectors_1415:
        result = "no_rom_functionality_configured_sectors_1415";
        break;
    case FLASH0_PROCON2_S14_S15ROM::rom_functionality_configured_sectors_1415:
        result = "rom_functionality_configured_sectors_1415";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_PROCON2_S14_S15ROM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_PROCON2_S14_S15ROM &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "no_rom_functionality_configured_sectors_1415", 44)))
    {
        output = FLASH0_PROCON2_S14_S15ROM::
            no_rom_functionality_configured_sectors_1415;
    }
    else if ((result = !strncmp(
                  data, "rom_functionality_configured_sectors_1415", 41)))
    {
        output = FLASH0_PROCON2_S14_S15ROM::
            rom_functionality_configured_sectors_1415;
    }

    return result;
}

}; // namespace XMC4700
