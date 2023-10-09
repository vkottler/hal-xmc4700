/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_CLKCLR_EBUCDI : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Disable clock */
};
static_assert(sizeof(SCU_CLK_CLKCLR_EBUCDI) == 1);

static constexpr uint16_t SCU_CLK_CLKCLR_EBUCDI_id = 1141;

/**
 * Converts SCU_CLK_CLKCLR_EBUCDI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CLKCLR_EBUCDI instance)
{
    const char *result = "UNKNOWN SCU_CLK_CLKCLR_EBUCDI";

    switch (instance)
    {
    case SCU_CLK_CLKCLR_EBUCDI::value1:
        result = "value1";
        break;
    case SCU_CLK_CLKCLR_EBUCDI::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CLKCLR_EBUCDI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CLKCLR_EBUCDI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_CLKCLR_EBUCDI::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_CLK_CLKCLR_EBUCDI::value2;
    }

    return result;
}

}; // namespace XMC4700
