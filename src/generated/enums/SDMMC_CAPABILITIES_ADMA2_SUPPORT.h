/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CAPABILITIES_ADMA2_SUPPORT : uint8_t
{
    value1 /*!< ADMA not supported */
};
static_assert(sizeof(SDMMC_CAPABILITIES_ADMA2_SUPPORT) == 1);

static constexpr uint16_t SDMMC_CAPABILITIES_ADMA2_SUPPORT_id = 1547;

/**
 * Converts SDMMC_CAPABILITIES_ADMA2_SUPPORT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CAPABILITIES_ADMA2_SUPPORT instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_ADMA2_SUPPORT";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_ADMA2_SUPPORT::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_ADMA2_SUPPORT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_CAPABILITIES_ADMA2_SUPPORT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_CAPABILITIES_ADMA2_SUPPORT::value1;
    }

    return result;
}

}; // namespace XMC4700
