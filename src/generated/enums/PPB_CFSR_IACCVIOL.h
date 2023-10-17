/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_IACCVIOL : uint8_t
{
    no_instruction_access_violation_fault /*!< no instruction access violation
                                             fault */
        ,
    processor_attempted_an_instruction_fetch_loca_cont =
        1 /*!< the processor attempted an instruction fetch from a location
             that does not permit execution. */
};
static_assert(sizeof(PPB_CFSR_IACCVIOL) == 1);

/**
 * Converts PPB_CFSR_IACCVIOL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_IACCVIOL instance)
{
    const char *result = "UNKNOWN PPB_CFSR_IACCVIOL";

    switch (instance)
    {
    case PPB_CFSR_IACCVIOL::no_instruction_access_violation_fault:
        result = "no_instruction_access_violation_fault";
        break;
    case PPB_CFSR_IACCVIOL::processor_attempted_an_instruction_fetch_loca_cont:
        result = "processor_attempted_an_instruction_fetch_loca_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_IACCVIOL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_IACCVIOL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_instruction_access_violation_fault", 37)))
    {
        output = PPB_CFSR_IACCVIOL::no_instruction_access_violation_fault;
    }
    else if ((result = !strncmp(
                  data, "processor_attempted_an_instruction_fetch_loca_cont",
                  50)))
    {
        output = PPB_CFSR_IACCVIOL::
            processor_attempted_an_instruction_fetch_loca_cont;
    }

    return result;
}

}; // namespace XMC4700
