/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH_PROCON2_S14_S15ROM : uint8_t
{
    value1 /*!< No ROM functionality is configured for sectors 14+15. */,
    value2 = 1 /*!< ROM functionality is configured for sectors 14+15. */
};
static_assert(sizeof(FLASH_PROCON2_S14_S15ROM) == 1);

static constexpr uint16_t FLASH_PROCON2_S14_S15ROM_id = 549;

/**
 * Converts FLASH_PROCON2_S14_S15ROM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH_PROCON2_S14_S15ROM instance)
{
    const char *result = "UNKNOWN FLASH_PROCON2_S14_S15ROM";

    switch (instance)
    {
    case FLASH_PROCON2_S14_S15ROM::value1:
        result = "value1";
        break;
    case FLASH_PROCON2_S14_S15ROM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH_PROCON2_S14_S15ROM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH_PROCON2_S14_S15ROM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH_PROCON2_S14_S15ROM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH_PROCON2_S14_S15ROM::value2;
    }

    return result;
}

}; // namespace XMC4700
