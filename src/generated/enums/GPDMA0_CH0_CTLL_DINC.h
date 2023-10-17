/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH0_CTLL_DINC : uint8_t
{
    increment /*!< Increment */,
    decrement = 1 /*!< Decrement */,
    no_change = 2 /*!< No change */
};
static_assert(sizeof(GPDMA0_CH0_CTLL_DINC) == 1);

/**
 * Converts GPDMA0_CH0_CTLL_DINC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH0_CTLL_DINC instance)
{
    const char *result = "UNKNOWN GPDMA0_CH0_CTLL_DINC";

    switch (instance)
    {
    case GPDMA0_CH0_CTLL_DINC::increment:
        result = "increment";
        break;
    case GPDMA0_CH0_CTLL_DINC::decrement:
        result = "decrement";
        break;
    case GPDMA0_CH0_CTLL_DINC::no_change:
        result = "no_change";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH0_CTLL_DINC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH0_CTLL_DINC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "increment", 9)))
    {
        output = GPDMA0_CH0_CTLL_DINC::increment;
    }
    else if ((result = !strncmp(data, "decrement", 9)))
    {
        output = GPDMA0_CH0_CTLL_DINC::decrement;
    }
    else if ((result = !strncmp(data, "no_change", 9)))
    {
        output = GPDMA0_CH0_CTLL_DINC::no_change;
    }

    return result;
}

}; // namespace XMC4700
