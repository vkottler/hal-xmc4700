/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_LSTSRCREG_WE_CH3 : uint8_t
{
    value1 /*!< write disabled */,
    value2 = 1 /*!< write enabled */
};
static_assert(sizeof(GPDMA0_LSTSRCREG_WE_CH3) == 1);

/**
 * Converts GPDMA0_LSTSRCREG_WE_CH3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_LSTSRCREG_WE_CH3 instance)
{
    const char *result = "UNKNOWN GPDMA0_LSTSRCREG_WE_CH3";

    switch (instance)
    {
    case GPDMA0_LSTSRCREG_WE_CH3::value1:
        result = "value1";
        break;
    case GPDMA0_LSTSRCREG_WE_CH3::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_LSTSRCREG_WE_CH3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_LSTSRCREG_WE_CH3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_LSTSRCREG_WE_CH3::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_LSTSRCREG_WE_CH3::value2;
    }

    return result;
}

}; // namespace XMC4700
