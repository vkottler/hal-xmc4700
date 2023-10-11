/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FSR_WPROIN2 : uint8_t
{
    value1 /*!< No OTP write protection installed for user 2 */,
    value2 = 1 /*!< Sector OTP write protection with ROM functionality is configured and correctly confirmed in the UCB2. The protection is locked for ever. */
};
static_assert(sizeof(FLASH0_FSR_WPROIN2) == 1);

static constexpr uint16_t FLASH0_FSR_WPROIN2_id = 618;

/**
 * Converts FLASH0_FSR_WPROIN2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FSR_WPROIN2 instance)
{
    const char *result = "UNKNOWN FLASH0_FSR_WPROIN2";

    switch (instance)
    {
    case FLASH0_FSR_WPROIN2::value1:
        result = "value1";
        break;
    case FLASH0_FSR_WPROIN2::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FSR_WPROIN2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FSR_WPROIN2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_FSR_WPROIN2::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_FSR_WPROIN2::value2;
    }

    return result;
}

}; // namespace XMC4700
