/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_CLKSTAT_CCUCST : uint8_t
{
    value1 /*!< Clock disabled */,
    value2 = 1 /*!< Clock enabled */
};
static_assert(sizeof(SCU_CLK_CLKSTAT_CCUCST) == 1);

static constexpr uint16_t SCU_CLK_CLKSTAT_CCUCST_id = 2439;

/**
 * Converts SCU_CLK_CLKSTAT_CCUCST to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CLKSTAT_CCUCST instance)
{
    const char *result = "UNKNOWN SCU_CLK_CLKSTAT_CCUCST";

    switch (instance)
    {
    case SCU_CLK_CLKSTAT_CCUCST::value1:
        result = "value1";
        break;
    case SCU_CLK_CLKSTAT_CCUCST::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CLKSTAT_CCUCST.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CLKSTAT_CCUCST &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_CLKSTAT_CCUCST::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_CLK_CLKSTAT_CCUCST::value2;
    }

    return result;
}

}; // namespace XMC4700
