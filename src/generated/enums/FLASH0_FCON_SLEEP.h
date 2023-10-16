/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FCON_SLEEP : uint8_t
{
    value1 /*!< Normal state or wake-up */,
    value2 = 1 /*!< Flash sleep mode is requested */
};
static_assert(sizeof(FLASH0_FCON_SLEEP) == 1);

/**
 * Converts FLASH0_FCON_SLEEP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FCON_SLEEP instance)
{
    const char *result = "UNKNOWN FLASH0_FCON_SLEEP";

    switch (instance)
    {
    case FLASH0_FCON_SLEEP::value1:
        result = "value1";
        break;
    case FLASH0_FCON_SLEEP::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FCON_SLEEP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FCON_SLEEP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_FCON_SLEEP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_FCON_SLEEP::value2;
    }

    return result;
}

}; // namespace XMC4700
