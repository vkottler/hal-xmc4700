/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH0_CTLL_SRC_GATHER_EN : uint8_t
{
    value1 /*!< Gather disabled */,
    value2 = 1 /*!< Gather enabled */
};
static_assert(sizeof(GPDMA0_CH0_CTLL_SRC_GATHER_EN) == 1);

/**
 * Converts GPDMA0_CH0_CTLL_SRC_GATHER_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH0_CTLL_SRC_GATHER_EN instance)
{
    const char *result = "UNKNOWN GPDMA0_CH0_CTLL_SRC_GATHER_EN";

    switch (instance)
    {
    case GPDMA0_CH0_CTLL_SRC_GATHER_EN::value1:
        result = "value1";
        break;
    case GPDMA0_CH0_CTLL_SRC_GATHER_EN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH0_CTLL_SRC_GATHER_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH0_CTLL_SRC_GATHER_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_CH0_CTLL_SRC_GATHER_EN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_CH0_CTLL_SRC_GATHER_EN::value2;
    }

    return result;
}

}; // namespace XMC4700
