/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH2_CFGL_DST_HS_POL : uint8_t
{
    high /*!< Active high */,
    low = 1 /*!< Active low */
};
static_assert(sizeof(GPDMA0_CH2_CFGL_DST_HS_POL) == 1);

/**
 * Converts GPDMA0_CH2_CFGL_DST_HS_POL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH2_CFGL_DST_HS_POL instance)
{
    const char *result = "UNKNOWN GPDMA0_CH2_CFGL_DST_HS_POL";

    switch (instance)
    {
    case GPDMA0_CH2_CFGL_DST_HS_POL::high:
        result = "high";
        break;
    case GPDMA0_CH2_CFGL_DST_HS_POL::low:
        result = "low";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH2_CFGL_DST_HS_POL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH2_CFGL_DST_HS_POL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "high", 4)))
    {
        output = GPDMA0_CH2_CFGL_DST_HS_POL::high;
    }
    else if ((result = !strncmp(data, "low", 3)))
    {
        output = GPDMA0_CH2_CFGL_DST_HS_POL::low;
    }

    return result;
}

}; // namespace XMC4700
