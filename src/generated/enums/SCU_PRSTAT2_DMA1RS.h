/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PRSTAT2_DMA1RS : uint8_t
{
    value1 /*!< Reset de-asserted */,
    value2 = 1 /*!< Reset asserted */
};
static_assert(sizeof(SCU_PRSTAT2_DMA1RS) == 1);

static constexpr uint16_t SCU_PRSTAT2_DMA1RS_id = 908;

/**
 * Converts SCU_PRSTAT2_DMA1RS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PRSTAT2_DMA1RS instance)
{
    const char *result = "UNKNOWN SCU_PRSTAT2_DMA1RS";

    switch (instance)
    {
    case SCU_PRSTAT2_DMA1RS::value1:
        result = "value1";
        break;
    case SCU_PRSTAT2_DMA1RS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PRSTAT2_DMA1RS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PRSTAT2_DMA1RS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PRSTAT2_DMA1RS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PRSTAT2_DMA1RS::value2;
    }

    return result;
}

}; // namespace XMC4700