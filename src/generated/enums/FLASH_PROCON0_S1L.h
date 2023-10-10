/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH_PROCON0_S1L : uint8_t
{
    value1 /*!< No write protection is configured for sector n. */,
    value2 = 1 /*!< Write protection is configured for sector n. */
};
static_assert(sizeof(FLASH_PROCON0_S1L) == 1);

static constexpr uint16_t FLASH_PROCON0_S1L_id = 533;

/**
 * Converts FLASH_PROCON0_S1L to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH_PROCON0_S1L instance)
{
    const char *result = "UNKNOWN FLASH_PROCON0_S1L";

    switch (instance)
    {
    case FLASH_PROCON0_S1L::value1:
        result = "value1";
        break;
    case FLASH_PROCON0_S1L::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH_PROCON0_S1L.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH_PROCON0_S1L &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH_PROCON0_S1L::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH_PROCON0_S1L::value2;
    }

    return result;
}

}; // namespace XMC4700
