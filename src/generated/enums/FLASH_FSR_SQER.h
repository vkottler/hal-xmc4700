/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH_FSR_SQER : uint8_t
{
    value1 /*!< No sequence error */,
    value2 = 1 /*!< Command state machine operation unsuccessful because of
                  improper address or command sequence. */
};
static_assert(sizeof(FLASH_FSR_SQER) == 1);

static constexpr uint16_t FLASH_FSR_SQER_id = 499;

/**
 * Converts FLASH_FSR_SQER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH_FSR_SQER instance)
{
    const char *result = "UNKNOWN FLASH_FSR_SQER";

    switch (instance)
    {
    case FLASH_FSR_SQER::value1:
        result = "value1";
        break;
    case FLASH_FSR_SQER::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH_FSR_SQER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH_FSR_SQER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH_FSR_SQER::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH_FSR_SQER::value2;
    }

    return result;
}

}; // namespace XMC4700
