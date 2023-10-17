/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_SYST_CSR_TICKINT : uint8_t
{
    does_not_assert_systick_exception_request /*!< counting down to zero does
                                                 not assert the SysTick
                                                 exception request */
        ,
    asserts_systick_exception_request = 1 /*!< counting down to zero to asserts
                                             the SysTick exception request. */
};
static_assert(sizeof(PPB_SYST_CSR_TICKINT) == 1);

/**
 * Converts PPB_SYST_CSR_TICKINT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_SYST_CSR_TICKINT instance)
{
    const char *result = "UNKNOWN PPB_SYST_CSR_TICKINT";

    switch (instance)
    {
    case PPB_SYST_CSR_TICKINT::does_not_assert_systick_exception_request:
        result = "does_not_assert_systick_exception_request";
        break;
    case PPB_SYST_CSR_TICKINT::asserts_systick_exception_request:
        result = "asserts_systick_exception_request";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_SYST_CSR_TICKINT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_SYST_CSR_TICKINT &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "does_not_assert_systick_exception_request", 41)))
    {
        output =
            PPB_SYST_CSR_TICKINT::does_not_assert_systick_exception_request;
    }
    else if ((result =
                  !strncmp(data, "asserts_systick_exception_request", 33)))
    {
        output = PPB_SYST_CSR_TICKINT::asserts_systick_exception_request;
    }

    return result;
}

}; // namespace XMC4700
