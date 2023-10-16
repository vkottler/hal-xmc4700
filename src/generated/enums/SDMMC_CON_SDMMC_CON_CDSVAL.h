/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CON_SDMMC_CON_CDSVAL : uint8_t
{
    value1 /*!< No card detected */,
    value2 = 1 /*!< Card detected */
};
static_assert(sizeof(SDMMC_CON_SDMMC_CON_CDSVAL) == 1);

/**
 * Converts SDMMC_CON_SDMMC_CON_CDSVAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CON_SDMMC_CON_CDSVAL instance)
{
    const char *result = "UNKNOWN SDMMC_CON_SDMMC_CON_CDSVAL";

    switch (instance)
    {
    case SDMMC_CON_SDMMC_CON_CDSVAL::value1:
        result = "value1";
        break;
    case SDMMC_CON_SDMMC_CON_CDSVAL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CON_SDMMC_CON_CDSVAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_CON_SDMMC_CON_CDSVAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_CON_SDMMC_CON_CDSVAL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_CON_SDMMC_CON_CDSVAL::value2;
    }

    return result;
}

}; // namespace XMC4700
