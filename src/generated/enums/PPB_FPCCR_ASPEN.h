/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_FPCCR_ASPEN : uint8_t
{
    disable_control_setting_execution_floating_po_cont /*!< Disable CONTROL
                                                          setting on execution
                                                          of a floating-point
                                                          instruction. */
        ,
    enable_control_setting_execution_floating_poi_cont =
        1 /*!< Enable CONTROL setting on execution of a floating-point
             instruction. */
};
static_assert(sizeof(PPB_FPCCR_ASPEN) == 1);

/**
 * Converts PPB_FPCCR_ASPEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_FPCCR_ASPEN instance)
{
    const char *result = "UNKNOWN PPB_FPCCR_ASPEN";

    switch (instance)
    {
    case PPB_FPCCR_ASPEN::disable_control_setting_execution_floating_po_cont:
        result = "disable_control_setting_execution_floating_po_cont";
        break;
    case PPB_FPCCR_ASPEN::enable_control_setting_execution_floating_poi_cont:
        result = "enable_control_setting_execution_floating_poi_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_FPCCR_ASPEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_FPCCR_ASPEN &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "disable_control_setting_execution_floating_po_cont", 50)))
    {
        output = PPB_FPCCR_ASPEN::
            disable_control_setting_execution_floating_po_cont;
    }
    else if ((result = !strncmp(
                  data, "enable_control_setting_execution_floating_poi_cont",
                  50)))
    {
        output = PPB_FPCCR_ASPEN::
            enable_control_setting_execution_floating_poi_cont;
    }

    return result;
}

}; // namespace XMC4700
