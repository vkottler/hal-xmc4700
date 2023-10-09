/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_DX1CR_DCEN : uint8_t
{
    value1 /*!< The receive shift clock is dependent on INSW selection. */,
    value2 =
        1 /*!< The receive shift clock is connected to the selected data input
             line. This setting is used if delay compensation is required in
             SSC and IIS protocols, else DCEN should always be 0. */
};
static_assert(sizeof(USIC0_CH0_DX1CR_DCEN) == 1);

static constexpr uint16_t USIC0_CH0_DX1CR_DCEN_id = 42;

/**
 * Converts USIC0_CH0_DX1CR_DCEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_DX1CR_DCEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_DX1CR_DCEN";

    switch (instance)
    {
    case USIC0_CH0_DX1CR_DCEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_DX1CR_DCEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_DX1CR_DCEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_DX1CR_DCEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_DX1CR_DCEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_DX1CR_DCEN::value2;
    }

    return result;
}

}; // namespace XMC4700
