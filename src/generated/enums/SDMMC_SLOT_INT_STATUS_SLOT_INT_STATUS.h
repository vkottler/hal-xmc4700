/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_SLOT_INT_STATUS_SLOT_INT_STATUS : uint8_t
{
    slot_1 /*!< Slot 1 */
};
static_assert(sizeof(SDMMC_SLOT_INT_STATUS_SLOT_INT_STATUS) == 1);

/**
 * Converts SDMMC_SLOT_INT_STATUS_SLOT_INT_STATUS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_SLOT_INT_STATUS_SLOT_INT_STATUS instance)
{
    const char *result = "UNKNOWN SDMMC_SLOT_INT_STATUS_SLOT_INT_STATUS";

    switch (instance)
    {
    case SDMMC_SLOT_INT_STATUS_SLOT_INT_STATUS::slot_1:
        result = "slot_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_SLOT_INT_STATUS_SLOT_INT_STATUS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_SLOT_INT_STATUS_SLOT_INT_STATUS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "slot_1", 6)))
    {
        output = SDMMC_SLOT_INT_STATUS_SLOT_INT_STATUS::slot_1;
    }

    return result;
}

}; // namespace XMC4700
