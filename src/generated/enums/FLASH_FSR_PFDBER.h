/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH_FSR_PFDBER : uint8_t
{
    value1 /*!< No Double-Bit Error detected during read access to PFLASH */,
    value2 = 1 /*!< Double-Bit Error detected in PFLASH */
};
static_assert(sizeof(FLASH_FSR_PFDBER) == 1);

static constexpr uint16_t FLASH_FSR_PFDBER_id = 496;

/**
 * Converts FLASH_FSR_PFDBER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH_FSR_PFDBER instance)
{
    const char *result = "UNKNOWN FLASH_FSR_PFDBER";

    switch (instance)
    {
    case FLASH_FSR_PFDBER::value1:
        result = "value1";
        break;
    case FLASH_FSR_PFDBER::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH_FSR_PFDBER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH_FSR_PFDBER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH_FSR_PFDBER::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH_FSR_PFDBER::value2;
    }

    return result;
}

}; // namespace XMC4700
