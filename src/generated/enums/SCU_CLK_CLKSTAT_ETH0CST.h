/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_CLKSTAT_ETH0CST : uint8_t
{
    value1 /*!< Clock disabled */,
    value2 = 1 /*!< Clock enabled */
};
static_assert(sizeof(SCU_CLK_CLKSTAT_ETH0CST) == 1);

/**
 * Converts SCU_CLK_CLKSTAT_ETH0CST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CLKSTAT_ETH0CST instance)
{
    const char *result = "UNKNOWN SCU_CLK_CLKSTAT_ETH0CST";

    switch (instance)
    {
    case SCU_CLK_CLKSTAT_ETH0CST::value1:
        result = "value1";
        break;
    case SCU_CLK_CLKSTAT_ETH0CST::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CLKSTAT_ETH0CST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CLKSTAT_ETH0CST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_CLKSTAT_ETH0CST::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_CLK_CLKSTAT_ETH0CST::value2;
    }

    return result;
}

}; // namespace XMC4700
