/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH2_CTLL_SINC : uint8_t
{
    value1 /*!< Increment */,
    value2 = 1 /*!< Decrement */,
    value3 = 2 /*!< No change */
};
static_assert(sizeof(GPDMA0_CH2_CTLL_SINC) == 1);

/**
 * Converts GPDMA0_CH2_CTLL_SINC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH2_CTLL_SINC instance)
{
    const char *result = "UNKNOWN GPDMA0_CH2_CTLL_SINC";

    switch (instance)
    {
    case GPDMA0_CH2_CTLL_SINC::value1:
        result = "value1";
        break;
    case GPDMA0_CH2_CTLL_SINC::value2:
        result = "value2";
        break;
    case GPDMA0_CH2_CTLL_SINC::value3:
        result = "value3";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH2_CTLL_SINC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH2_CTLL_SINC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_CH2_CTLL_SINC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_CH2_CTLL_SINC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = GPDMA0_CH2_CTLL_SINC::value3;
    }

    return result;
}

}; // namespace XMC4700
