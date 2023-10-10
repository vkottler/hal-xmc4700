/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH_FSR_PFSBER : uint8_t
{
    value1 /*!< No Single-Bit Error detected during read access to PFLASH */,
    value2 = 1 /*!< Single-Bit Error detected and corrected */
};
static_assert(sizeof(FLASH_FSR_PFSBER) == 1);

static constexpr uint16_t FLASH_FSR_PFSBER_id = 497;

/**
 * Converts FLASH_FSR_PFSBER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH_FSR_PFSBER instance)
{
    const char *result = "UNKNOWN FLASH_FSR_PFSBER";

    switch (instance)
    {
    case FLASH_FSR_PFSBER::value1:
        result = "value1";
        break;
    case FLASH_FSR_PFSBER::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH_FSR_PFSBER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH_FSR_PFSBER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH_FSR_PFSBER::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH_FSR_PFSBER::value2;
    }

    return result;
}

}; // namespace XMC4700