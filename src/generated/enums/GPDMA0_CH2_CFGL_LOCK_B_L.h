/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH2_CFGL_LOCK_B_L : uint8_t
{
    value1 /*!< Over complete DMA transfer */,
    value2 = 1 /*!< Over complete DMA block transfer */,
    value3 = 2 /*!< Over complete DMA transaction */
};
static_assert(sizeof(GPDMA0_CH2_CFGL_LOCK_B_L) == 1);

/**
 * Converts GPDMA0_CH2_CFGL_LOCK_B_L to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH2_CFGL_LOCK_B_L instance)
{
    const char *result = "UNKNOWN GPDMA0_CH2_CFGL_LOCK_B_L";

    switch (instance)
    {
    case GPDMA0_CH2_CFGL_LOCK_B_L::value1:
        result = "value1";
        break;
    case GPDMA0_CH2_CFGL_LOCK_B_L::value2:
        result = "value2";
        break;
    case GPDMA0_CH2_CFGL_LOCK_B_L::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH2_CFGL_LOCK_B_L.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH2_CFGL_LOCK_B_L &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_CH2_CFGL_LOCK_B_L::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_CH2_CFGL_LOCK_B_L::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = GPDMA0_CH2_CFGL_LOCK_B_L::value3;
    }

    return result;
}

}; // namespace XMC4700
