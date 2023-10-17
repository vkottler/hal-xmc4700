/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CHENREG_CH : uint8_t
{
    disable_channel /*!< Disable the Channel */,
    enable_channel = 1 /*!< Enable the Channel */
};
static_assert(sizeof(GPDMA0_CHENREG_CH) == 1);

/**
 * Converts GPDMA0_CHENREG_CH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CHENREG_CH instance)
{
    const char *result = "UNKNOWN GPDMA0_CHENREG_CH";

    switch (instance)
    {
    case GPDMA0_CHENREG_CH::disable_channel:
        result = "disable_channel";
        break;
    case GPDMA0_CHENREG_CH::enable_channel:
        result = "enable_channel";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CHENREG_CH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CHENREG_CH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disable_channel", 15)))
    {
        output = GPDMA0_CHENREG_CH::disable_channel;
    }
    else if ((result = !strncmp(data, "enable_channel", 14)))
    {
        output = GPDMA0_CHENREG_CH::enable_channel;
    }

    return result;
}

}; // namespace XMC4700
