/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH0_CFGL_LOCK_CH_L : uint8_t
{
    transfer /*!< Over complete DMA transfer */,
    block_transfer = 1 /*!< Over complete DMA block transfer */,
    transaction = 2 /*!< Over complete DMA transaction */
};
static_assert(sizeof(GPDMA0_CH0_CFGL_LOCK_CH_L) == 1);

/**
 * Converts GPDMA0_CH0_CFGL_LOCK_CH_L to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH0_CFGL_LOCK_CH_L instance)
{
    const char *result = "UNKNOWN GPDMA0_CH0_CFGL_LOCK_CH_L";

    switch (instance)
    {
    case GPDMA0_CH0_CFGL_LOCK_CH_L::transfer:
        result = "transfer";
        break;
    case GPDMA0_CH0_CFGL_LOCK_CH_L::block_transfer:
        result = "block_transfer";
        break;
    case GPDMA0_CH0_CFGL_LOCK_CH_L::transaction:
        result = "transaction";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH0_CFGL_LOCK_CH_L.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH0_CFGL_LOCK_CH_L &output)
{
    bool result = false;

    if ((result = !strncmp(data, "transfer", 8)))
    {
        output = GPDMA0_CH0_CFGL_LOCK_CH_L::transfer;
    }
    else if ((result = !strncmp(data, "block_transfer", 14)))
    {
        output = GPDMA0_CH0_CFGL_LOCK_CH_L::block_transfer;
    }
    else if ((result = !strncmp(data, "transaction", 11)))
    {
        output = GPDMA0_CH0_CFGL_LOCK_CH_L::transaction;
    }

    return result;
}

}; // namespace XMC4700
