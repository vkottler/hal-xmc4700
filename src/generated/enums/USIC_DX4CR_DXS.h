/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_DX4CR_DXS : uint8_t
{
    value1 /*!< The current value of DXnS is 0. */,
    value2 = 1 /*!< The current value of DXnS is 1. */
};
static_assert(sizeof(USIC_DX4CR_DXS) == 1);

static constexpr uint16_t USIC_DX4CR_DXS_id = 1140;

/**
 * Converts USIC_DX4CR_DXS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_DX4CR_DXS instance)
{
    const char *result = "UNKNOWN USIC_DX4CR_DXS";

    switch (instance)
    {
    case USIC_DX4CR_DXS::value1:
        result = "value1";
        break;
    case USIC_DX4CR_DXS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_DX4CR_DXS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_DX4CR_DXS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_DX4CR_DXS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_DX4CR_DXS::value2;
    }

    return result;
}

}; // namespace XMC4700
