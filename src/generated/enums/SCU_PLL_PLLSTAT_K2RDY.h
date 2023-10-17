/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PLL_PLLSTAT_K2RDY : uint8_t
{
    does_not_operate_with_new_value /*!< K2-Divider does not operate with the
                                       new value */
        ,
    operate_with_new_value = 1 /*!< K2-Divider operate with the new value */
};
static_assert(sizeof(SCU_PLL_PLLSTAT_K2RDY) == 1);

/**
 * Converts SCU_PLL_PLLSTAT_K2RDY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PLL_PLLSTAT_K2RDY instance)
{
    const char *result = "UNKNOWN SCU_PLL_PLLSTAT_K2RDY";

    switch (instance)
    {
    case SCU_PLL_PLLSTAT_K2RDY::does_not_operate_with_new_value:
        result = "does_not_operate_with_new_value";
        break;
    case SCU_PLL_PLLSTAT_K2RDY::operate_with_new_value:
        result = "operate_with_new_value";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PLL_PLLSTAT_K2RDY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PLL_PLLSTAT_K2RDY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "does_not_operate_with_new_value", 31)))
    {
        output = SCU_PLL_PLLSTAT_K2RDY::does_not_operate_with_new_value;
    }
    else if ((result = !strncmp(data, "operate_with_new_value", 22)))
    {
        output = SCU_PLL_PLLSTAT_K2RDY::operate_with_new_value;
    }

    return result;
}

}; // namespace XMC4700
