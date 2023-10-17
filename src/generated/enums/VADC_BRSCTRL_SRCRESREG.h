/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_BRSCTRL_SRCRESREG : uint8_t
{
    use_gxchctryresreg_select_group_result_register /*!< Use GxCHCTRy.RESREG to
                                                       select a group result
                                                       register */
        ,
    store_result_group_result_register_gxres1 =
        1 /*!< Store result in group result register GxRES1 */,
    store_result_group_result_register_gxres15 =
        15 /*!< Store result in group result register GxRES15 */
};
static_assert(sizeof(VADC_BRSCTRL_SRCRESREG) == 1);

/**
 * Converts VADC_BRSCTRL_SRCRESREG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_BRSCTRL_SRCRESREG instance)
{
    const char *result = "UNKNOWN VADC_BRSCTRL_SRCRESREG";

    switch (instance)
    {
    case VADC_BRSCTRL_SRCRESREG::
        use_gxchctryresreg_select_group_result_register:
        result = "use_gxchctryresreg_select_group_result_register";
        break;
    case VADC_BRSCTRL_SRCRESREG::store_result_group_result_register_gxres1:
        result = "store_result_group_result_register_gxres1";
        break;
    case VADC_BRSCTRL_SRCRESREG::store_result_group_result_register_gxres15:
        result = "store_result_group_result_register_gxres15";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_BRSCTRL_SRCRESREG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_BRSCTRL_SRCRESREG &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "use_gxchctryresreg_select_group_result_register", 47)))
    {
        output = VADC_BRSCTRL_SRCRESREG::
            use_gxchctryresreg_select_group_result_register;
    }
    else if ((result = !strncmp(
                  data, "store_result_group_result_register_gxres1", 41)))
    {
        output =
            VADC_BRSCTRL_SRCRESREG::store_result_group_result_register_gxres1;
    }
    else if ((result = !strncmp(
                  data, "store_result_group_result_register_gxres15", 42)))
    {
        output =
            VADC_BRSCTRL_SRCRESREG::store_result_group_result_register_gxres15;
    }

    return result;
}

}; // namespace XMC4700
