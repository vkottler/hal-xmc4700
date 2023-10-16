/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CHENREG_CH : uint8_t
{
    value1 /*!< Disable the Channel */,
    value2 = 1 /*!< Enable the Channel */
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
    case GPDMA0_CHENREG_CH::value1:
        result = "value1";
        break;
    case GPDMA0_CHENREG_CH::value2:
        result = "value2";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_CHENREG_CH::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_CHENREG_CH::value2;
    }

    return result;
}

}; // namespace XMC4700
