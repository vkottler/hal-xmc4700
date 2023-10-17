/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TRBSR_STBT : uint8_t
{
    not_triggered_using_this_bit /*!< A standard transmit buffer event is not
                                    triggered using this bit. */
        ,
    triggered_using_this_bit =
        1 /*!< A standard transmit buffer event is triggered using this bit. */
};
static_assert(sizeof(USIC0_CH0_TRBSR_STBT) == 1);

/**
 * Converts USIC0_CH0_TRBSR_STBT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TRBSR_STBT instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TRBSR_STBT";

    switch (instance)
    {
    case USIC0_CH0_TRBSR_STBT::not_triggered_using_this_bit:
        result = "not_triggered_using_this_bit";
        break;
    case USIC0_CH0_TRBSR_STBT::triggered_using_this_bit:
        result = "triggered_using_this_bit";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TRBSR_STBT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TRBSR_STBT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_triggered_using_this_bit", 28)))
    {
        output = USIC0_CH0_TRBSR_STBT::not_triggered_using_this_bit;
    }
    else if ((result = !strncmp(data, "triggered_using_this_bit", 24)))
    {
        output = USIC0_CH0_TRBSR_STBT::triggered_using_this_bit;
    }

    return result;
}

}; // namespace XMC4700
