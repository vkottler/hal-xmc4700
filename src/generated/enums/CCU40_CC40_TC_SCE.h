/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_TC_SCE : uint8_t
{
    registers_control_by_ccycapt0_capture_into_cc_cont /*!< Capture into
                                                          CC4yC0VThis register
                                                          contains the values
                                                          associated with the
                                                          Capture 0
                                                          field./CC4yC1VThis
                                                          register contains the
                                                          values associated
                                                          with the Capture 1
                                                          field. registers
                                                          control by CCycapt0
                                                          and capture into
                                                          CC4yC3VThis register
                                                          contains the values
                                                          associated with the
                                                          Capture 3
                                                          field./CC4yC2VThis
                                                          register contains the
                                                          values associated
                                                          with the Capture 2
                                                          field. control by
                                                          CCycapt1 */
        ,
    cc4yc3vthis_register_contains_values_associat_cont =
        1 /*!< Capture into CC4yC0VThis register contains the values associated
             with the Capture 0 field./CC4yC1VThis register contains the values
             associated with the Capture 1 field. and CC4yC3VThis register
             contains the values associated with the Capture 3
             field./CC4yC2VThis register contains the values associated with
             the Capture 2 field. control by CCycapt1 */
};
static_assert(sizeof(CCU40_CC40_TC_SCE) == 1);

/**
 * Converts CCU40_CC40_TC_SCE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_TC_SCE instance)
{
    const char *result = "UNKNOWN CCU40_CC40_TC_SCE";

    switch (instance)
    {
    case CCU40_CC40_TC_SCE::registers_control_by_ccycapt0_capture_into_cc_cont:
        result = "registers_control_by_ccycapt0_capture_into_cc_cont";
        break;
    case CCU40_CC40_TC_SCE::cc4yc3vthis_register_contains_values_associat_cont:
        result = "cc4yc3vthis_register_contains_values_associat_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_TC_SCE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_TC_SCE &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "registers_control_by_ccycapt0_capture_into_cc_cont", 50)))
    {
        output = CCU40_CC40_TC_SCE::
            registers_control_by_ccycapt0_capture_into_cc_cont;
    }
    else if ((result = !strncmp(
                  data, "cc4yc3vthis_register_contains_values_associat_cont",
                  50)))
    {
        output = CCU40_CC40_TC_SCE::
            cc4yc3vthis_register_contains_values_associat_cont;
    }

    return result;
}

}; // namespace XMC4700
