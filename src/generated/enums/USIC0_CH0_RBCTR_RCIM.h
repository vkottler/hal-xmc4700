/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_RBCTR_RCIM : uint8_t
{
    value1 /*!< RCI[4] = PERR, RCI[3:0] = WLEN */,
    value2 = 1 /*!< RCI[4] = SOF, RCI[3:0] = WLEN */,
    value3 = 2 /*!< RCI[4] = 0, RCI[3:0] = WLEN */,
    value4 = 3 /*!< RCI[4] = PERR, RCI[3] = PAR, RCI[2:1] = 00B, RCI[0] = SOF */
};
static_assert(sizeof(USIC0_CH0_RBCTR_RCIM) == 1);

/**
 * Converts USIC0_CH0_RBCTR_RCIM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_RBCTR_RCIM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_RBCTR_RCIM";

    switch (instance)
    {
    case USIC0_CH0_RBCTR_RCIM::value1:
        result = "value1";
        break;
    case USIC0_CH0_RBCTR_RCIM::value2:
        result = "value2";
        break;
    case USIC0_CH0_RBCTR_RCIM::value3:
        result = "value3";
        break;
    case USIC0_CH0_RBCTR_RCIM::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_RBCTR_RCIM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_RBCTR_RCIM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_RBCTR_RCIM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_RBCTR_RCIM::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_RBCTR_RCIM::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_RBCTR_RCIM::value4;
    }

    return result;
}

}; // namespace XMC4700
