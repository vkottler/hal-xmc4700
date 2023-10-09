/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CH0_FCFGC_CFEN : uint8_t
{
    value1 /*!< CIC filter disabled and bypassed */,
    value2 = 1 /*!< Enable CIC filter */
};
static_assert(sizeof(DSD_CH0_FCFGC_CFEN) == 1);

static constexpr uint16_t DSD_CH0_FCFGC_CFEN_id = 1593;

/**
 * Converts DSD_CH0_FCFGC_CFEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_FCFGC_CFEN instance)
{
    const char *result = "UNKNOWN DSD_CH0_FCFGC_CFEN";

    switch (instance)
    {
    case DSD_CH0_FCFGC_CFEN::value1:
        result = "value1";
        break;
    case DSD_CH0_FCFGC_CFEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_FCFGC_CFEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_FCFGC_CFEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CH0_FCFGC_CFEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CH0_FCFGC_CFEN::value2;
    }

    return result;
}

}; // namespace XMC4700
