/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_MARP_TRAPDIS : uint8_t
{
    value1 /*!< If a double-bit error occurs in PFLASH, a bus error trap is generated. */,
    value2 = 1 /*!< The double-bit error trap is disabled. Shall be used only during margin check */
};
static_assert(sizeof(FLASH0_MARP_TRAPDIS) == 1);

/**
 * Converts FLASH0_MARP_TRAPDIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_MARP_TRAPDIS instance)
{
    const char *result = "UNKNOWN FLASH0_MARP_TRAPDIS";

    switch (instance)
    {
    case FLASH0_MARP_TRAPDIS::value1:
        result = "value1";
        break;
    case FLASH0_MARP_TRAPDIS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_MARP_TRAPDIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_MARP_TRAPDIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_MARP_TRAPDIS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_MARP_TRAPDIS::value2;
    }

    return result;
}

}; // namespace XMC4700
