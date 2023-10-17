/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT : uint8_t
{
    no_block_gap_event /*!< No Block Gap Event */,
    transaction_stopped_at_block_gap =
        1 /*!< Transaction stopped at Block Gap */
};
static_assert(sizeof(SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT) == 1);

/**
 * Converts SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT instance)
{
    const char *result = "UNKNOWN SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT";

    switch (instance)
    {
    case SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT::no_block_gap_event:
        result = "no_block_gap_event";
        break;
    case SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT::
        transaction_stopped_at_block_gap:
        result = "transaction_stopped_at_block_gap";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_block_gap_event", 18)))
    {
        output = SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT::no_block_gap_event;
    }
    else if ((result = !strncmp(data, "transaction_stopped_at_block_gap", 32)))
    {
        output = SDMMC_INT_STATUS_NORM_BLOCK_GAP_EVENT::
            transaction_stopped_at_block_gap;
    }

    return result;
}

}; // namespace XMC4700
