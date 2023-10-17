/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_MPU_CTRL_HFNMIENA : uint8_t
{
    disabled_during_hard_fault_nmi_faultmask_hand_cont /*!< MPU is disabled
                                                          during hard fault,
                                                          NMI, and FAULTMASK
                                                          handlers, regardless
                                                          of the value of the
                                                          ENABLE bit */
        ,
    enabled_during_hard_fault_nmi_faultmask_handlers =
        1 /*!< the MPU is enabled during hard fault, NMI, and FAULTMASK
             handlers. */
};
static_assert(sizeof(PPB_MPU_CTRL_HFNMIENA) == 1);

/**
 * Converts PPB_MPU_CTRL_HFNMIENA to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_MPU_CTRL_HFNMIENA instance)
{
    const char *result = "UNKNOWN PPB_MPU_CTRL_HFNMIENA";

    switch (instance)
    {
    case PPB_MPU_CTRL_HFNMIENA::
        disabled_during_hard_fault_nmi_faultmask_hand_cont:
        result = "disabled_during_hard_fault_nmi_faultmask_hand_cont";
        break;
    case PPB_MPU_CTRL_HFNMIENA::
        enabled_during_hard_fault_nmi_faultmask_handlers:
        result = "enabled_during_hard_fault_nmi_faultmask_handlers";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_MPU_CTRL_HFNMIENA.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_MPU_CTRL_HFNMIENA &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "disabled_during_hard_fault_nmi_faultmask_hand_cont", 50)))
    {
        output = PPB_MPU_CTRL_HFNMIENA::
            disabled_during_hard_fault_nmi_faultmask_hand_cont;
    }
    else if ((result = !strncmp(
                  data, "enabled_during_hard_fault_nmi_faultmask_handlers",
                  48)))
    {
        output = PPB_MPU_CTRL_HFNMIENA::
            enabled_during_hard_fault_nmi_faultmask_handlers;
    }

    return result;
}

}; // namespace XMC4700
