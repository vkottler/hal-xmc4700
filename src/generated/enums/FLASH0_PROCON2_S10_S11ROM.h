/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_PROCON2_S10_S11ROM : uint8_t
{
    value1 /*!< No ROM functionality is configured for sectors 10+11. */,
    value2 = 1 /*!< ROM functionality is configured for sectors 10+11. */
};
static_assert(sizeof(FLASH0_PROCON2_S10_S11ROM) == 1);

static constexpr uint16_t FLASH0_PROCON2_S10_S11ROM_id = 1986;

/**
 * Converts FLASH0_PROCON2_S10_S11ROM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_PROCON2_S10_S11ROM instance)
{
    const char *result = "UNKNOWN FLASH0_PROCON2_S10_S11ROM";

    switch (instance)
    {
    case FLASH0_PROCON2_S10_S11ROM::value1:
        result = "value1";
        break;
    case FLASH0_PROCON2_S10_S11ROM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_PROCON2_S10_S11ROM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_PROCON2_S10_S11ROM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_PROCON2_S10_S11ROM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_PROCON2_S10_S11ROM::value2;
    }

    return result;
}

}; // namespace XMC4700
