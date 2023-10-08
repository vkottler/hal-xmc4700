/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No interrupt",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Interrupt is generated",
 *       "value": 1
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR : uint8_t
{
    value1 /*!< No interrupt */,
    value2 = 1 /*!< Interrupt is generated */
};
static_assert(sizeof(SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR) == 1);

static constexpr uint16_t SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR_id = 1565;

/**
 * Converts SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR instance)
{
    const char *result = "UNKNOWN SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR";

    switch (instance)
    {
    case SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR::value1:
        result = "value1";
        break;
    case SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_CRC_ERR::value2;
    }

    return result;
}

}; // namespace XMC4700