/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS_GLOBCTL_MASKVAL : uint8_t
{
    value1 /*!< Mask LSB bit */,
    value2 = 1 /*!< Mask 2 LSB bits */,
    value3 = 7 /*!< Mask 8 LSB bits */
};
static_assert(sizeof(LEDTS_GLOBCTL_MASKVAL) == 1);

static constexpr uint16_t LEDTS_GLOBCTL_MASKVAL_id = 578;

/**
 * Converts LEDTS_GLOBCTL_MASKVAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS_GLOBCTL_MASKVAL instance)
{
    const char *result = "UNKNOWN LEDTS_GLOBCTL_MASKVAL";

    switch (instance)
    {
    case LEDTS_GLOBCTL_MASKVAL::value1:
        result = "value1";
        break;
    case LEDTS_GLOBCTL_MASKVAL::value2:
        result = "value2";
        break;
    case LEDTS_GLOBCTL_MASKVAL::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS_GLOBCTL_MASKVAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS_GLOBCTL_MASKVAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS_GLOBCTL_MASKVAL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS_GLOBCTL_MASKVAL::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = LEDTS_GLOBCTL_MASKVAL::value3;
    }

    return result;
}

}; // namespace XMC4700
