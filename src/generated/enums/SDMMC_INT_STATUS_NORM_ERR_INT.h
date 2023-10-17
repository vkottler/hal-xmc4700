/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_INT_STATUS_NORM_ERR_INT : uint8_t
{
    no_error /*!< No Error. */,
    error = 1 /*!< Error. */
};
static_assert(sizeof(SDMMC_INT_STATUS_NORM_ERR_INT) == 1);

/**
 * Converts SDMMC_INT_STATUS_NORM_ERR_INT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_INT_STATUS_NORM_ERR_INT instance)
{
    const char *result = "UNKNOWN SDMMC_INT_STATUS_NORM_ERR_INT";

    switch (instance)
    {
    case SDMMC_INT_STATUS_NORM_ERR_INT::no_error:
        result = "no_error";
        break;
    case SDMMC_INT_STATUS_NORM_ERR_INT::error:
        result = "error";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_INT_STATUS_NORM_ERR_INT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_INT_STATUS_NORM_ERR_INT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_error", 8)))
    {
        output = SDMMC_INT_STATUS_NORM_ERR_INT::no_error;
    }
    else if ((result = !strncmp(data, "error", 5)))
    {
        output = SDMMC_INT_STATUS_NORM_ERR_INT::error;
    }

    return result;
}

}; // namespace XMC4700
