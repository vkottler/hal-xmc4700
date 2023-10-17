/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_NOCP : uint8_t
{
    no_usagefault_caused_by_attempting_access_cop_cont /*!< no UsageFault
                                                          caused by attempting
                                                          to access a
                                                          coprocessor */
        ,
    processor_has_attempted_access_coprocessor =
        1 /*!< the processor has attempted to access a coprocessor. */
};
static_assert(sizeof(PPB_CFSR_NOCP) == 1);

/**
 * Converts PPB_CFSR_NOCP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_NOCP instance)
{
    const char *result = "UNKNOWN PPB_CFSR_NOCP";

    switch (instance)
    {
    case PPB_CFSR_NOCP::no_usagefault_caused_by_attempting_access_cop_cont:
        result = "no_usagefault_caused_by_attempting_access_cop_cont";
        break;
    case PPB_CFSR_NOCP::processor_has_attempted_access_coprocessor:
        result = "processor_has_attempted_access_coprocessor";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_NOCP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_NOCP &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "no_usagefault_caused_by_attempting_access_cop_cont", 50)))
    {
        output =
            PPB_CFSR_NOCP::no_usagefault_caused_by_attempting_access_cop_cont;
    }
    else if ((result = !strncmp(
                  data, "processor_has_attempted_access_coprocessor", 42)))
    {
        output = PPB_CFSR_NOCP::processor_has_attempted_access_coprocessor;
    }

    return result;
}

}; // namespace XMC4700
