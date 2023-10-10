/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH_FSR_RPROIN : uint8_t
{
    value1 /*!< No read protection installed */,
    value2 = 1 /*!< Read protection and global write protection is configured
                  and correctly confirmed in the User Configuration Block 0. */
};
static_assert(sizeof(FLASH_FSR_RPROIN) == 1);

static constexpr uint16_t FLASH_FSR_RPROIN_id = 494;

/**
 * Converts FLASH_FSR_RPROIN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH_FSR_RPROIN instance)
{
    const char *result = "UNKNOWN FLASH_FSR_RPROIN";

    switch (instance)
    {
    case FLASH_FSR_RPROIN::value1:
        result = "value1";
        break;
    case FLASH_FSR_RPROIN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH_FSR_RPROIN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH_FSR_RPROIN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH_FSR_RPROIN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH_FSR_RPROIN::value2;
    }

    return result;
}

}; // namespace XMC4700
