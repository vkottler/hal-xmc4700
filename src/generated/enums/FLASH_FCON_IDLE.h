/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH_FCON_IDLE : uint8_t
{
    value1 /*!< Normal/standard Flash read operation */,
    value2 = 1 /*!< Dynamic idle of Program Flash enabled for power saving;
                  static prefetching disabled */
};
static_assert(sizeof(FLASH_FCON_IDLE) == 1);

static constexpr uint16_t FLASH_FCON_IDLE_id = 516;

/**
 * Converts FLASH_FCON_IDLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH_FCON_IDLE instance)
{
    const char *result = "UNKNOWN FLASH_FCON_IDLE";

    switch (instance)
    {
    case FLASH_FCON_IDLE::value1:
        result = "value1";
        break;
    case FLASH_FCON_IDLE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH_FCON_IDLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH_FCON_IDLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH_FCON_IDLE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH_FCON_IDLE::value2;
    }

    return result;
}

}; // namespace XMC4700