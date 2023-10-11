/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_CGATCLR0_CCU42 : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Disable gating */
};
static_assert(sizeof(SCU_CLK_CGATCLR0_CCU42) == 1);

static constexpr uint16_t SCU_CLK_CGATCLR0_CCU42_id = 2513;

/**
 * Converts SCU_CLK_CGATCLR0_CCU42 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CGATCLR0_CCU42 instance)
{
    const char *result = "UNKNOWN SCU_CLK_CGATCLR0_CCU42";

    switch (instance)
    {
    case SCU_CLK_CGATCLR0_CCU42::value1:
        result = "value1";
        break;
    case SCU_CLK_CGATCLR0_CCU42::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CGATCLR0_CCU42.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CGATCLR0_CCU42 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_CGATCLR0_CCU42::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_CLK_CGATCLR0_CCU42::value2;
    }

    return result;
}

}; // namespace XMC4700
