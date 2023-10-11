/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CH0_CFGH_FCMODE : uint8_t
{
    value1 /*!< Source transaction requests are serviced when they occur. Data pre-fetching is enabled. */,
    value2 = 1 /*!< Source transaction requests are not serviced until a destination transaction request occurs. In this mode, the amount of data transferred from the source is limited so that it is guaranteed to be transferred to the destination prior to block termination by the destination. Data pre-fetching is disabled. */
};
static_assert(sizeof(GPDMA0_CH0_CFGH_FCMODE) == 1);

static constexpr uint16_t GPDMA0_CH0_CFGH_FCMODE_id = 888;

/**
 * Converts GPDMA0_CH0_CFGH_FCMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CH0_CFGH_FCMODE instance)
{
    const char *result = "UNKNOWN GPDMA0_CH0_CFGH_FCMODE";

    switch (instance)
    {
    case GPDMA0_CH0_CFGH_FCMODE::value1:
        result = "value1";
        break;
    case GPDMA0_CH0_CFGH_FCMODE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CH0_CFGH_FCMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CH0_CFGH_FCMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA0_CH0_CFGH_FCMODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA0_CH0_CFGH_FCMODE::value2;
    }

    return result;
}

}; // namespace XMC4700
