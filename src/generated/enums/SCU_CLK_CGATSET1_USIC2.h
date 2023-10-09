/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_CGATSET1_USIC2 : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Enable gating */
};
static_assert(sizeof(SCU_CLK_CGATSET1_USIC2) == 1);

static constexpr uint16_t SCU_CLK_CGATSET1_USIC2_id = 1216;

/**
 * Converts SCU_CLK_CGATSET1_USIC2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CGATSET1_USIC2 instance)
{
    const char *result = "UNKNOWN SCU_CLK_CGATSET1_USIC2";

    switch (instance)
    {
    case SCU_CLK_CGATSET1_USIC2::value1:
        result = "value1";
        break;
    case SCU_CLK_CGATSET1_USIC2::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CGATSET1_USIC2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CGATSET1_USIC2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_CGATSET1_USIC2::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_CLK_CGATSET1_USIC2::value2;
    }

    return result;
}

}; // namespace XMC4700
