/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_CCR_HPCEN : uint8_t
{
    disabled /*!< The hardware port control is disabled. */,
    enabled_dx0_dout0 =
        1 /*!< The hardware port control is enabled for DX0 and DOUT0. */,
    enabled_dx3_dx0_dout10 = 2 /*!< The hardware port control is enabled for
                                  DX3, DX0 and DOUT[1:0]. */
        ,
    enabled_dx0_dx53_dout30 = 3 /*!< The hardware port control is enabled for
                                   DX0, DX[5:3] and DOUT[3:0]. */
};
static_assert(sizeof(USIC0_CH0_CCR_HPCEN) == 1);

/**
 * Converts USIC0_CH0_CCR_HPCEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_CCR_HPCEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_CCR_HPCEN";

    switch (instance)
    {
    case USIC0_CH0_CCR_HPCEN::disabled:
        result = "disabled";
        break;
    case USIC0_CH0_CCR_HPCEN::enabled_dx0_dout0:
        result = "enabled_dx0_dout0";
        break;
    case USIC0_CH0_CCR_HPCEN::enabled_dx3_dx0_dout10:
        result = "enabled_dx3_dx0_dout10";
        break;
    case USIC0_CH0_CCR_HPCEN::enabled_dx0_dx53_dout30:
        result = "enabled_dx0_dx53_dout30";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_CCR_HPCEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_CCR_HPCEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = USIC0_CH0_CCR_HPCEN::disabled;
    }
    else if ((result = !strncmp(data, "enabled_dx0_dout0", 17)))
    {
        output = USIC0_CH0_CCR_HPCEN::enabled_dx0_dout0;
    }
    else if ((result = !strncmp(data, "enabled_dx3_dx0_dout10", 22)))
    {
        output = USIC0_CH0_CCR_HPCEN::enabled_dx3_dx0_dout10;
    }
    else if ((result = !strncmp(data, "enabled_dx0_dx53_dout30", 23)))
    {
        output = USIC0_CH0_CCR_HPCEN::enabled_dx0_dx53_dout30;
    }

    return result;
}

}; // namespace XMC4700
