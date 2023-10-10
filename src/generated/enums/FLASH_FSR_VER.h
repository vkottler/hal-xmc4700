/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH_FSR_VER : uint8_t
{
    value1 /*!< The page is correctly programmed or the sector correctly
              erased. All programmed or erased bits have full expected quality.
            */
        ,
    value2 = 1 /*!< A program verify error or an erase verify error has been
                  detected. Full quality (retention time) of all programmed
                  ("1") or erased ("0") bits cannot be guaranteed. */
};
static_assert(sizeof(FLASH_FSR_VER) == 1);

static constexpr uint16_t FLASH_FSR_VER_id = 486;

/**
 * Converts FLASH_FSR_VER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH_FSR_VER instance)
{
    const char *result = "UNKNOWN FLASH_FSR_VER";

    switch (instance)
    {
    case FLASH_FSR_VER::value1:
        result = "value1";
        break;
    case FLASH_FSR_VER::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH_FSR_VER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH_FSR_VER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH_FSR_VER::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH_FSR_VER::value2;
    }

    return result;
}

}; // namespace XMC4700