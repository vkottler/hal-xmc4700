/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA1_CLEARTFR_CH0 : uint8_t
{
    value1 /*!< no effect */,
    value2 = 1 /*!< clear status */
};
static_assert(sizeof(GPDMA1_CLEARTFR_CH0) == 1);

static constexpr uint16_t GPDMA1_CLEARTFR_CH0_id = 945;

/**
 * Converts GPDMA1_CLEARTFR_CH0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA1_CLEARTFR_CH0 instance)
{
    const char *result = "UNKNOWN GPDMA1_CLEARTFR_CH0";

    switch (instance)
    {
    case GPDMA1_CLEARTFR_CH0::value1:
        result = "value1";
        break;
    case GPDMA1_CLEARTFR_CH0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA1_CLEARTFR_CH0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA1_CLEARTFR_CH0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = GPDMA1_CLEARTFR_CH0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = GPDMA1_CLEARTFR_CH0::value2;
    }

    return result;
}

}; // namespace XMC4700
