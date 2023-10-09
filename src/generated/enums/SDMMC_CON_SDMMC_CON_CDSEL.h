/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CON_SDMMC_CON_CDSEL : uint8_t
{
    value1 /*!< P1.10 input pin selected */,
    value2 = 1 /*!< Software bit CDSVAL is selected */
};
static_assert(sizeof(SDMMC_CON_SDMMC_CON_CDSEL) == 1);

static constexpr uint16_t SDMMC_CON_SDMMC_CON_CDSEL_id = 2347;

/**
 * Converts SDMMC_CON_SDMMC_CON_CDSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CON_SDMMC_CON_CDSEL instance)
{
    const char *result = "UNKNOWN SDMMC_CON_SDMMC_CON_CDSEL";

    switch (instance)
    {
    case SDMMC_CON_SDMMC_CON_CDSEL::value1:
        result = "value1";
        break;
    case SDMMC_CON_SDMMC_CON_CDSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CON_SDMMC_CON_CDSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_CON_SDMMC_CON_CDSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_CON_SDMMC_CON_CDSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_CON_SDMMC_CON_CDSEL::value2;
    }

    return result;
}

}; // namespace XMC4700
