/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CAPABILITIES_HI_TIM_CNT_RETUNE : uint8_t
{
    get_information_via_other_source /*!< Get information via other source */
};
static_assert(sizeof(SDMMC_CAPABILITIES_HI_TIM_CNT_RETUNE) == 1);

/**
 * Converts SDMMC_CAPABILITIES_HI_TIM_CNT_RETUNE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CAPABILITIES_HI_TIM_CNT_RETUNE instance)
{
    const char *result = "UNKNOWN SDMMC_CAPABILITIES_HI_TIM_CNT_RETUNE";

    switch (instance)
    {
    case SDMMC_CAPABILITIES_HI_TIM_CNT_RETUNE::
        get_information_via_other_source:
        result = "get_information_via_other_source";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CAPABILITIES_HI_TIM_CNT_RETUNE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_CAPABILITIES_HI_TIM_CNT_RETUNE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "get_information_via_other_source", 32)))
    {
        output = SDMMC_CAPABILITIES_HI_TIM_CNT_RETUNE::
            get_information_via_other_source;
    }

    return result;
}

}; // namespace XMC4700
