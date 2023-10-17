/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_PRECISERR : uint8_t
{
    no_precise_data_bus_error /*!< no precise data bus error */,
    data_bus_error_has_occurred_pc_value_stacked__cont =
        1 /*!< a data bus error has occurred, and the PC value stacked for the
             exception return points to the instruction that caused the fault.
           */
};
static_assert(sizeof(PPB_CFSR_PRECISERR) == 1);

/**
 * Converts PPB_CFSR_PRECISERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_PRECISERR instance)
{
    const char *result = "UNKNOWN PPB_CFSR_PRECISERR";

    switch (instance)
    {
    case PPB_CFSR_PRECISERR::no_precise_data_bus_error:
        result = "no_precise_data_bus_error";
        break;
    case PPB_CFSR_PRECISERR::
        data_bus_error_has_occurred_pc_value_stacked__cont:
        result = "data_bus_error_has_occurred_pc_value_stacked__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_PRECISERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_PRECISERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_precise_data_bus_error", 25)))
    {
        output = PPB_CFSR_PRECISERR::no_precise_data_bus_error;
    }
    else if ((result = !strncmp(
                  data, "data_bus_error_has_occurred_pc_value_stacked__cont",
                  50)))
    {
        output = PPB_CFSR_PRECISERR::
            data_bus_error_has_occurred_pc_value_stacked__cont;
    }

    return result;
}

}; // namespace XMC4700
