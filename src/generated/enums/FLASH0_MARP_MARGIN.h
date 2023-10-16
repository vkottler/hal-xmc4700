/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_MARP_MARGIN : uint8_t
{
    value1 /*!< Standard (default) margin. */,
    value2 = 1 /*!< Tight margin for 0 (low) level. Suboptimal 0-bits are read as 1s. */,
    value3 = 4 /*!< Tight margin for 1 (high) level. Suboptimal 1-bits are read as 0s. */
};
static_assert(sizeof(FLASH0_MARP_MARGIN) == 1);

/**
 * Converts FLASH0_MARP_MARGIN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_MARP_MARGIN instance)
{
    const char *result = "UNKNOWN FLASH0_MARP_MARGIN";

    switch (instance)
    {
    case FLASH0_MARP_MARGIN::value1:
        result = "value1";
        break;
    case FLASH0_MARP_MARGIN::value2:
        result = "value2";
        break;
    case FLASH0_MARP_MARGIN::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_MARP_MARGIN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_MARP_MARGIN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_MARP_MARGIN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_MARP_MARGIN::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = FLASH0_MARP_MARGIN::value3;
    }

    return result;
}

}; // namespace XMC4700
