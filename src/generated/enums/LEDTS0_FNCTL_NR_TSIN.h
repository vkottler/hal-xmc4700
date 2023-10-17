/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_FNCTL_NR_TSIN : uint8_t
{
    1 /*!< 1 */,
    8 = 7 /*!< 8 */
};
static_assert(sizeof(LEDTS0_FNCTL_NR_TSIN) == 1);

/**
 * Converts LEDTS0_FNCTL_NR_TSIN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_FNCTL_NR_TSIN instance)
{
    const char *result = "UNKNOWN LEDTS0_FNCTL_NR_TSIN";

    switch (instance)
    {
    case LEDTS0_FNCTL_NR_TSIN::1:
        result = "1";
        break;
    case LEDTS0_FNCTL_NR_TSIN::8:
        result = "8";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_FNCTL_NR_TSIN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_FNCTL_NR_TSIN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "1", 1)))
    {
        output = LEDTS0_FNCTL_NR_TSIN::1;
    }
    else if ((result = !strncmp(data, "8", 1)))
    {
        output = LEDTS0_FNCTL_NR_TSIN::8;
    }

    return result;
}

}; // namespace XMC4700
