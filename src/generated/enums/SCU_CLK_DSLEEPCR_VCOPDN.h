/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_DSLEEPCR_VCOPDN : uint8_t
{
    value1 = 1 /*!< Switch off VCO of main PLL */,
    value2 /*!< No effect */
};
static_assert(sizeof(SCU_CLK_DSLEEPCR_VCOPDN) == 1);

static constexpr uint16_t SCU_CLK_DSLEEPCR_VCOPDN_id = 1170;

/**
 * Converts SCU_CLK_DSLEEPCR_VCOPDN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_DSLEEPCR_VCOPDN instance)
{
    const char *result = "UNKNOWN SCU_CLK_DSLEEPCR_VCOPDN";

    switch (instance)
    {
    case SCU_CLK_DSLEEPCR_VCOPDN::value1:
        result = "value1";
        break;
    case SCU_CLK_DSLEEPCR_VCOPDN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_DSLEEPCR_VCOPDN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_DSLEEPCR_VCOPDN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_DSLEEPCR_VCOPDN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_CLK_DSLEEPCR_VCOPDN::value2;
    }

    return result;
}

}; // namespace XMC4700
