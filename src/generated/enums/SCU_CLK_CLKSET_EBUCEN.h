/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_CLKSET_EBUCEN : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Enable */
};
static_assert(sizeof(SCU_CLK_CLKSET_EBUCEN) == 1);

static constexpr uint16_t SCU_CLK_CLKSET_EBUCEN_id = 2446;

/**
 * Converts SCU_CLK_CLKSET_EBUCEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CLKSET_EBUCEN instance)
{
    const char *result = "UNKNOWN SCU_CLK_CLKSET_EBUCEN";

    switch (instance)
    {
    case SCU_CLK_CLKSET_EBUCEN::value1:
        result = "value1";
        break;
    case SCU_CLK_CLKSET_EBUCEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CLKSET_EBUCEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CLKSET_EBUCEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_CLKSET_EBUCEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_CLK_CLKSET_EBUCEN::value2;
    }

    return result;
}

}; // namespace XMC4700
