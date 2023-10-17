/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_UNSTKERR : uint8_t
{
    no_unstacking_fault /*!< no unstacking fault */,
    stacking_an_exception_entry_has_caused_one_or_cont =
        1 /*!< stacking for an exception entry has caused one or more
             BusFaults. */
};
static_assert(sizeof(PPB_CFSR_UNSTKERR) == 1);

/**
 * Converts PPB_CFSR_UNSTKERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_UNSTKERR instance)
{
    const char *result = "UNKNOWN PPB_CFSR_UNSTKERR";

    switch (instance)
    {
    case PPB_CFSR_UNSTKERR::no_unstacking_fault:
        result = "no_unstacking_fault";
        break;
    case PPB_CFSR_UNSTKERR::stacking_an_exception_entry_has_caused_one_or_cont:
        result = "stacking_an_exception_entry_has_caused_one_or_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_UNSTKERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_UNSTKERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_unstacking_fault", 19)))
    {
        output = PPB_CFSR_UNSTKERR::no_unstacking_fault;
    }
    else if ((result = !strncmp(
                  data, "stacking_an_exception_entry_has_caused_one_or_cont",
                  50)))
    {
        output = PPB_CFSR_UNSTKERR::
            stacking_an_exception_entry_has_caused_one_or_cont;
    }

    return result;
}

}; // namespace XMC4700
