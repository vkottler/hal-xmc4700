/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_FNCTL_COLLEV : uint8_t
{
    low /*!< Active low */,
    high = 1 /*!< Active high */
};
static_assert(sizeof(LEDTS0_FNCTL_COLLEV) == 1);

/**
 * Converts LEDTS0_FNCTL_COLLEV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_FNCTL_COLLEV instance)
{
    const char *result = "UNKNOWN LEDTS0_FNCTL_COLLEV";

    switch (instance)
    {
    case LEDTS0_FNCTL_COLLEV::low:
        result = "low";
        break;
    case LEDTS0_FNCTL_COLLEV::high:
        result = "high";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_FNCTL_COLLEV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_FNCTL_COLLEV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "low", 3)))
    {
        output = LEDTS0_FNCTL_COLLEV::low;
    }
    else if ((result = !strncmp(data, "high", 4)))
    {
        output = LEDTS0_FNCTL_COLLEV::high;
    }

    return result;
}

}; // namespace XMC4700
