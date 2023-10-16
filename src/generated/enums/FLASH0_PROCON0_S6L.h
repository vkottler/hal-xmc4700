/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_PROCON0_S6L : uint8_t
{
    value1 /*!< No write protection is configured for sector n. */,
    value2 = 1 /*!< Write protection is configured for sector n. */
};
static_assert(sizeof(FLASH0_PROCON0_S6L) == 1);

/**
 * Converts FLASH0_PROCON0_S6L to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_PROCON0_S6L instance)
{
    const char *result = "UNKNOWN FLASH0_PROCON0_S6L";

    switch (instance)
    {
    case FLASH0_PROCON0_S6L::value1:
        result = "value1";
        break;
    case FLASH0_PROCON0_S6L::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_PROCON0_S6L.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_PROCON0_S6L &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_PROCON0_S6L::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_PROCON0_S6L::value2;
    }

    return result;
}

}; // namespace XMC4700
