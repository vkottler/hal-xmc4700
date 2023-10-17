/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_INT_STATUS_NORM_CARD_REMOVAL : uint8_t
{
    state_stable_or_debouncing /*!< Card State Stable or Debouncing */,
    removed = 1 /*!< Card Removed */
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
    case SDMMC_INT_STATUS_NORM_CARD_REMOVAL::state_stable_or_debouncing:
        result = "state_stable_or_debouncing";
        break;
    case SDMMC_INT_STATUS_NORM_CARD_REMOVAL::removed:
        result = "removed";
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
inline bool from_string(const char *data,
                        SDMMC_INT_STATUS_NORM_CARD_REMOVAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "state_stable_or_debouncing", 26)))
    {
        output =
            SDMMC_INT_STATUS_NORM_CARD_REMOVAL::state_stable_or_debouncing;
    }
    else if ((result = !strncmp(data, "removed", 7)))
    {
        output = SDMMC_INT_STATUS_NORM_CARD_REMOVAL::removed;
    }

    return result;
}

}; // namespace XMC4700
