/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC1CFG0_FIFOEMP : uint8_t
{
    value1 /*!< FIFO not empty */,
    value2 = 1 /*!< FIFO empty */
};
static_assert(sizeof(DAC_DAC1CFG0_FIFOEMP) == 1);

static constexpr uint16_t DAC_DAC1CFG0_FIFOEMP_id = 306;

/**
 * Converts DAC_DAC1CFG0_FIFOEMP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC1CFG0_FIFOEMP instance)
{
    const char *result = "UNKNOWN DAC_DAC1CFG0_FIFOEMP";

    switch (instance)
    {
    case DAC_DAC1CFG0_FIFOEMP::value1:
        result = "value1";
        break;
    case DAC_DAC1CFG0_FIFOEMP::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC1CFG0_FIFOEMP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC1CFG0_FIFOEMP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DAC_DAC1CFG0_FIFOEMP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DAC_DAC1CFG0_FIFOEMP::value2;
    }

    return result;
}

}; // namespace XMC4700
