/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_FNCTL_NR_TSIN : uint8_t
{
    value1 /*!< 1 */,
    value2 = 7 /*!< 8 */
};
static_assert(sizeof(LEDTS0_FNCTL_NR_TSIN) == 1);

static constexpr uint16_t LEDTS0_FNCTL_NR_TSIN_id = 1018;

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
    case LEDTS0_FNCTL_NR_TSIN::value1:
        result = "value1";
        break;
    case LEDTS0_FNCTL_NR_TSIN::value2:
        result = "value2";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_FNCTL_NR_TSIN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_FNCTL_NR_TSIN::value2;
    }

    return result;
}

}; // namespace XMC4700
