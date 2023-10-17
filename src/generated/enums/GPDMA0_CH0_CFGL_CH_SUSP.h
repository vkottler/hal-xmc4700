/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH0_CFGL_CH_SUSP : uint8_t
{
    not_suspended /*!< Not suspended. */,
    suspend_dma_transfer_source =
        1 /*!< Suspend DMA transfer from the source. */
};
static_assert(sizeof(GPDMA0_CH0_CFGL_CH_SUSP) == 1);

/**
 * Converts GPDMA0_CH0_CFGL_CH_SUSP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH0_CFGL_CH_SUSP instance)
{
    const char *result = "UNKNOWN GPDMA0_CH0_CFGL_CH_SUSP";

    switch (instance)
    {
    case GPDMA0_CH0_CFGL_CH_SUSP::not_suspended:
        result = "not_suspended";
        break;
    case GPDMA0_CH0_CFGL_CH_SUSP::suspend_dma_transfer_source:
        result = "suspend_dma_transfer_source";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH0_CFGL_CH_SUSP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH0_CFGL_CH_SUSP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_suspended", 13)))
    {
        output = GPDMA0_CH0_CFGL_CH_SUSP::not_suspended;
    }
    else if ((result = !strncmp(data, "suspend_dma_transfer_source", 27)))
    {
        output = GPDMA0_CH0_CFGL_CH_SUSP::suspend_dma_transfer_source;
    }

    return result;
}

}; // namespace XMC4700
