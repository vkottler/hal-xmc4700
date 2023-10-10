/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_BFLS_BFS1 : uint8_t
{
    value1 /*!< No action */,
    value2 = 1 /*!< Set bit BFLy */
};
static_assert(sizeof(VADC_BFLS_BFS1) == 1);

static constexpr uint16_t VADC_BFLS_BFS1_id = 1425;

/**
 * Converts VADC_BFLS_BFS1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_BFLS_BFS1 instance)
{
    const char *result = "UNKNOWN VADC_BFLS_BFS1";

    switch (instance)
    {
    case VADC_BFLS_BFS1::value1:
        result = "value1";
        break;
    case VADC_BFLS_BFS1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_BFLS_BFS1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_BFLS_BFS1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_BFLS_BFS1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_BFLS_BFS1::value2;
    }

    return result;
}

}; // namespace XMC4700
