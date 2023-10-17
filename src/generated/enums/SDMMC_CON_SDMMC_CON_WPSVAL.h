/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CON_SDMMC_CON_WPSVAL : uint8_t
{
    no_write_protection /*!< No write protection */,
    write_protection_active = 1 /*!< Write protection active */
};
static_assert(sizeof(SDMMC_CON_SDMMC_CON_WPSVAL) == 1);

/**
 * Converts SDMMC_CON_SDMMC_CON_WPSVAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CON_SDMMC_CON_WPSVAL instance)
{
    const char *result = "UNKNOWN SDMMC_CON_SDMMC_CON_WPSVAL";

    switch (instance)
    {
    case SDMMC_CON_SDMMC_CON_WPSVAL::no_write_protection:
        result = "no_write_protection";
        break;
    case SDMMC_CON_SDMMC_CON_WPSVAL::write_protection_active:
        result = "write_protection_active";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CON_SDMMC_CON_WPSVAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_CON_SDMMC_CON_WPSVAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_write_protection", 19)))
    {
        output = SDMMC_CON_SDMMC_CON_WPSVAL::no_write_protection;
    }
    else if ((result = !strncmp(data, "write_protection_active", 23)))
    {
        output = SDMMC_CON_SDMMC_CON_WPSVAL::write_protection_active;
    }

    return result;
}

}; // namespace XMC4700
