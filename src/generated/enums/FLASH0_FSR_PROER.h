/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FSR_PROER : uint8_t
{
    no_protection_error /*!< No protection error */,
    protection_error = 1 /*!< Protection error. */
};
static_assert(sizeof(FLASH0_FSR_PROER) == 1);

/**
 * Converts FLASH0_FSR_PROER to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FSR_PROER instance)
{
    const char *result = "UNKNOWN FLASH0_FSR_PROER";

    switch (instance)
    {
    case FLASH0_FSR_PROER::no_protection_error:
        result = "no_protection_error";
        break;
    case FLASH0_FSR_PROER::protection_error:
        result = "protection_error";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FSR_PROER.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FSR_PROER &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_protection_error", 19)))
    {
        output = FLASH0_FSR_PROER::no_protection_error;
    }
    else if ((result = !strncmp(data, "protection_error", 16)))
    {
        output = FLASH0_FSR_PROER::protection_error;
    }

    return result;
}

}; // namespace XMC4700
