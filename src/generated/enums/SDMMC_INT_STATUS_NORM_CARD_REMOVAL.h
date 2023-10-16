/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_INT_STATUS_NORM_CARD_REMOVAL : uint8_t
{
    value1 /*!< Card State Stable or Debouncing */,
    value2 = 1 /*!< Card Removed */
};
static_assert(sizeof(SDMMC_INT_STATUS_NORM_CARD_REMOVAL) == 1);

/**
 * Converts SDMMC_INT_STATUS_NORM_CARD_REMOVAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_INT_STATUS_NORM_CARD_REMOVAL instance)
{
    const char *result = "UNKNOWN SDMMC_INT_STATUS_NORM_CARD_REMOVAL";

    switch (instance)
    {
    case SDMMC_INT_STATUS_NORM_CARD_REMOVAL::value1:
        result = "value1";
        break;
    case SDMMC_INT_STATUS_NORM_CARD_REMOVAL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_INT_STATUS_NORM_CARD_REMOVAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_INT_STATUS_NORM_CARD_REMOVAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_INT_STATUS_NORM_CARD_REMOVAL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_INT_STATUS_NORM_CARD_REMOVAL::value2;
    }

    return result;
}

}; // namespace XMC4700
