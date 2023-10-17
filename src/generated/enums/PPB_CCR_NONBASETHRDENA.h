/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CCR_NONBASETHRDENA : uint8_t
{
    only_when_no_exception_active /*!< processor can enter Thread mode only
                                     when no exception is active. */
        ,
    any_level_under_control_an_exc_return_value_s_cont =
        1 /*!< processor can enter Thread mode from any level under the control
             of an EXC_RETURN value, see Exception returnException return
             occurs when the processor is in Handler mode and executes one of
             the following instructions to load the EXC_RETURN value into the
             PC:an LDM or POP instruction that loads the PCan LDR instruction
             with PC as the destinationa BX instruction using any
             register.EXC_RETURN is the value loaded into the LR on exception
             entry. The exception mechanism relies on this value to detect when
             the processor has completed an exception handler. The lowest five
             bits of this value provide information on the return stack and
             processor mode. shows the EXC_RETURN values with a description of
             the exception return behavior. All EXC_RETURN values have
             bits[31:5] set to one. When this value is loaded into the PC it
             indicates to the processor that the exception is complete, and the
             processor initiates the appropriate exception return
             sequence.Exception return behaviorEXC_RETURN[31:0]Description
             0xFFFFFFF1 Return to Handler mode, exception return uses
             non-floating-point state from the MSP and execution uses MSP after
             return. 0xFFFFFFF9 Return to Thread mode, exception return uses
             non-floating-point state from MSP and execution uses MSP after
             return. 0xFFFFFFFD Return to Thread mode, exception return uses
             non-floating-point state from the PSP and execution uses PSP after
             return. 0xFFFFFFE1 Return to Handler mode, exception return uses
             floating-point-state from MSP and execution uses MSP after return.
             0xFFFFFFE9 Return to Thread mode, exception return uses
             floating-point state from MSP and execution uses MSP after return.
             0xFFFFFFED Return to Thread mode, exception return uses
             floating-point state from PSP and execution uses PSP after return.
             . */
};
static_assert(sizeof(PPB_CCR_NONBASETHRDENA) == 1);

/**
 * Converts PPB_CCR_NONBASETHRDENA to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CCR_NONBASETHRDENA instance)
{
    const char *result = "UNKNOWN PPB_CCR_NONBASETHRDENA";

    switch (instance)
    {
    case PPB_CCR_NONBASETHRDENA::only_when_no_exception_active:
        result = "only_when_no_exception_active";
        break;
    case PPB_CCR_NONBASETHRDENA::
        any_level_under_control_an_exc_return_value_s_cont:
        result = "any_level_under_control_an_exc_return_value_s_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CCR_NONBASETHRDENA.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CCR_NONBASETHRDENA &output)
{
    bool result = false;

    if ((result = !strncmp(data, "only_when_no_exception_active", 29)))
    {
        output = PPB_CCR_NONBASETHRDENA::only_when_no_exception_active;
    }
    else if ((result = !strncmp(
                  data, "any_level_under_control_an_exc_return_value_s_cont",
                  50)))
    {
        output = PPB_CCR_NONBASETHRDENA::
            any_level_under_control_an_exc_return_value_s_cont;
    }

    return result;
}

}; // namespace XMC4700
