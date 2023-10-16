/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_CCFG_RB : uint8_t
{
    value1 /*!< A receive FIFO buffer is not available. */,
    value2 = 1 /*!< A receive FIFO buffer is available. */
};
static_assert(sizeof(USIC0_CH0_CCFG_RB) == 1);

/**
 * Converts USIC0_CH0_CCFG_RB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_CCFG_RB instance)
{
    const char *result = "UNKNOWN USIC0_CH0_CCFG_RB";

    switch (instance)
    {
    case USIC0_CH0_CCFG_RB::value1:
        result = "value1";
        break;
    case USIC0_CH0_CCFG_RB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_CCFG_RB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_CCFG_RB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_CCFG_RB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_CCFG_RB::value2;
    }

    return result;
}

}; // namespace XMC4700