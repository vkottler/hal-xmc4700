/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_EXTCLKCR_ECKSEL : uint8_t
{
    fsys_clock /*!< fSYS clock */,
    fusb_clock = 2 /*!< fUSB clock */,
    fpll_clock_divided_according_eckdiv_bit_field_cont =
        3 /*!< fPLL clock divided according to ECKDIV bit field configuration
           */
};
static_assert(sizeof(SCU_CLK_EXTCLKCR_ECKSEL) == 1);

/**
 * Converts SCU_CLK_EXTCLKCR_ECKSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_EXTCLKCR_ECKSEL instance)
{
    const char *result = "UNKNOWN SCU_CLK_EXTCLKCR_ECKSEL";

    switch (instance)
    {
    case SCU_CLK_EXTCLKCR_ECKSEL::fsys_clock:
        result = "fsys_clock";
        break;
    case SCU_CLK_EXTCLKCR_ECKSEL::fusb_clock:
        result = "fusb_clock";
        break;
    case SCU_CLK_EXTCLKCR_ECKSEL::
        fpll_clock_divided_according_eckdiv_bit_field_cont:
        result = "fpll_clock_divided_according_eckdiv_bit_field_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_EXTCLKCR_ECKSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_EXTCLKCR_ECKSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "fsys_clock", 10)))
    {
        output = SCU_CLK_EXTCLKCR_ECKSEL::fsys_clock;
    }
    else if ((result = !strncmp(data, "fusb_clock", 10)))
    {
        output = SCU_CLK_EXTCLKCR_ECKSEL::fusb_clock;
    }
    else if ((result = !strncmp(
                  data, "fpll_clock_divided_according_eckdiv_bit_field_cont",
                  50)))
    {
        output = SCU_CLK_EXTCLKCR_ECKSEL::
            fpll_clock_divided_according_eckdiv_bit_field_cont;
    }

    return result;
}

}; // namespace XMC4700
