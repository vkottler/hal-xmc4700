/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FCON_ESLDIS : uint8_t
{
    value1 /*!< External sleep request signal input is enabled */,
    value2 = 1 /*!< Externally requested Flash sleep is disabled */
};
static_assert(sizeof(FLASH0_FCON_ESLDIS) == 1);

/**
 * Converts FLASH0_FCON_ESLDIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FCON_ESLDIS instance)
{
    const char *result = "UNKNOWN FLASH0_FCON_ESLDIS";

    switch (instance)
    {
    case FLASH0_FCON_ESLDIS::value1:
        result = "value1";
        break;
    case FLASH0_FCON_ESLDIS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FCON_ESLDIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FCON_ESLDIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_FCON_ESLDIS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_FCON_ESLDIS::value2;
    }

    return result;
}

}; // namespace XMC4700