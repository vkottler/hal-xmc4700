/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_PROCON1_S14_S15L : uint8_t
{
    value1 /*!< No write protection is configured for sectors 14+15. */,
    value2 = 1 /*!< Write protection is configured for sectors 14+15. */
};
static_assert(sizeof(FLASH0_PROCON1_S14_S15L) == 1);

static constexpr uint16_t FLASH0_PROCON1_S14_S15L_id = 664;

/**
 * Converts FLASH0_PROCON1_S14_S15L to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_PROCON1_S14_S15L instance)
{
    const char *result = "UNKNOWN FLASH0_PROCON1_S14_S15L";

    switch (instance)
    {
    case FLASH0_PROCON1_S14_S15L::value1:
        result = "value1";
        break;
    case FLASH0_PROCON1_S14_S15L::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_PROCON1_S14_S15L.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_PROCON1_S14_S15L &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_PROCON1_S14_S15L::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_PROCON1_S14_S15L::value2;
    }

    return result;
}

}; // namespace XMC4700
