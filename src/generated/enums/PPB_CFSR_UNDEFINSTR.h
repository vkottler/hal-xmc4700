/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_UNDEFINSTR : uint8_t
{
    no_undefined_instruction_usagefault /*!< no undefined instruction
                                           UsageFault */
        ,
    processor_has_attempted_execute_an_undefined__cont =
        1 /*!< the processor has attempted to execute an undefined instruction.
           */
};
static_assert(sizeof(PPB_CFSR_UNDEFINSTR) == 1);

/**
 * Converts PPB_CFSR_UNDEFINSTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_UNDEFINSTR instance)
{
    const char *result = "UNKNOWN PPB_CFSR_UNDEFINSTR";

    switch (instance)
    {
    case PPB_CFSR_UNDEFINSTR::no_undefined_instruction_usagefault:
        result = "no_undefined_instruction_usagefault";
        break;
    case PPB_CFSR_UNDEFINSTR::
        processor_has_attempted_execute_an_undefined__cont:
        result = "processor_has_attempted_execute_an_undefined__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_UNDEFINSTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_UNDEFINSTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_undefined_instruction_usagefault", 35)))
    {
        output = PPB_CFSR_UNDEFINSTR::no_undefined_instruction_usagefault;
    }
    else if ((result = !strncmp(
                  data, "processor_has_attempted_execute_an_undefined__cont",
                  50)))
    {
        output = PPB_CFSR_UNDEFINSTR::
            processor_has_attempted_execute_an_undefined__cont;
    }

    return result;
}

}; // namespace XMC4700
