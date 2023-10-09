/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_GLOBCTL_ITS_EN : uint8_t
{
    value1 /*!< Disable */,
    value2 = 1 /*!< Enable */
};
static_assert(sizeof(LEDTS0_GLOBCTL_ITS_EN) == 1);

static constexpr uint16_t LEDTS0_GLOBCTL_ITS_EN_id = 865;

/**
 * Converts LEDTS0_GLOBCTL_ITS_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_GLOBCTL_ITS_EN instance)
{
    const char *result = "UNKNOWN LEDTS0_GLOBCTL_ITS_EN";

    switch (instance)
    {
    case LEDTS0_GLOBCTL_ITS_EN::value1:
        result = "value1";
        break;
    case LEDTS0_GLOBCTL_ITS_EN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_GLOBCTL_ITS_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_GLOBCTL_ITS_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_GLOBCTL_ITS_EN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_GLOBCTL_ITS_EN::value2;
    }

    return result;
}

}; // namespace XMC4700
