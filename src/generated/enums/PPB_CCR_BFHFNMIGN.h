/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CCR_BFHFNMIGN : uint8_t
{
    data_bus_faults_caused_by_load_store_instruct_cont /*!< data bus faults
                                                          caused by load and
                                                          store instructions
                                                          cause a lock-up */
        ,
    handlers_running_at_priority__1__2_ignore_dat_cont =
        1 /*!< handlers running at priority -1 and -2 ignore data bus faults
             caused by load and store instructions. */
};
static_assert(sizeof(PPB_CCR_BFHFNMIGN) == 1);

/**
 * Converts PPB_CCR_BFHFNMIGN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CCR_BFHFNMIGN instance)
{
    const char *result = "UNKNOWN PPB_CCR_BFHFNMIGN";

    switch (instance)
    {
    case PPB_CCR_BFHFNMIGN::data_bus_faults_caused_by_load_store_instruct_cont:
        result = "data_bus_faults_caused_by_load_store_instruct_cont";
        break;
    case PPB_CCR_BFHFNMIGN::handlers_running_at_priority__1__2_ignore_dat_cont:
        result = "handlers_running_at_priority__1__2_ignore_dat_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CCR_BFHFNMIGN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CCR_BFHFNMIGN &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "data_bus_faults_caused_by_load_store_instruct_cont", 50)))
    {
        output = PPB_CCR_BFHFNMIGN::
            data_bus_faults_caused_by_load_store_instruct_cont;
    }
    else if ((result = !strncmp(
                  data, "handlers_running_at_priority__1__2_ignore_dat_cont",
                  50)))
    {
        output = PPB_CCR_BFHFNMIGN::
            handlers_running_at_priority__1__2_ignore_dat_cont;
    }

    return result;
}

}; // namespace XMC4700
