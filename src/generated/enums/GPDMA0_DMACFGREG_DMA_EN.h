/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_DMACFGREG_DMA_EN : uint8_t
{
    value1 /*!< GPDMA Disabled */,
    value2 = 1 /*!< GPDMA Enabled. */
};
static_assert(sizeof(GPDMA0_DMACFGREG_DMA_EN) == 1);

static constexpr uint16_t GPDMA0_DMACFGREG_DMA_EN_id = 2344;

/**
 * Converts GPDMA0_DMACFGREG_DMA_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_DMACFGREG_DMA_EN instance)
{
    const char *result = "UNKNOWN GPDMA0_DMACFGREG_DMA_EN";

    switch (instance)
    {
    case GPDMA0_DMACFGREG_DMA_EN::value1:
        result = "value1";
        break;
    case GPDMA0_DMACFGREG_DMA_EN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_DMACFGREG_DMA_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_DMACFGREG_DMA_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_DMACFGREG_DMA_EN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_DMACFGREG_DMA_EN::value2;
    }

    return result;
}

}; // namespace XMC4700
