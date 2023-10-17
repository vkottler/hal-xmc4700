/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA1_CH0_CFGL_FIFO_EMPTY : uint8_t
{
    empty = 1 /*!< Channel FIFO empty */,
    not_empty /*!< Channel FIFO not empty */
};
static_assert(sizeof(GPDMA1_CH0_CFGL_FIFO_EMPTY) == 1);

/**
 * Converts GPDMA1_CH0_CFGL_FIFO_EMPTY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA1_CH0_CFGL_FIFO_EMPTY instance)
{
    const char *result = "UNKNOWN GPDMA1_CH0_CFGL_FIFO_EMPTY";

    switch (instance)
    {
    case GPDMA1_CH0_CFGL_FIFO_EMPTY::empty:
        result = "empty";
        break;
    case GPDMA1_CH0_CFGL_FIFO_EMPTY::not_empty:
        result = "not_empty";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA1_CH0_CFGL_FIFO_EMPTY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA1_CH0_CFGL_FIFO_EMPTY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "empty", 5)))
    {
        output = GPDMA1_CH0_CFGL_FIFO_EMPTY::empty;
    }
    else if ((result = !strncmp(data, "not_empty", 9)))
    {
        output = GPDMA1_CH0_CFGL_FIFO_EMPTY::not_empty;
    }

    return result;
}

}; // namespace XMC4700
