/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON0_BFSSS : uint8_t
{
    two_stages_synchronization_used_maximum_margin /*!< Two stages of
                                                      synchronization used.
                                                      (maximum margin) */
        ,
    one_stage_synchronization_used_minimum_latency =
        1 /*!< One stage of synchronization used. (minimum latency) */
};
static_assert(sizeof(EBU_BUSRCON0_BFSSS) == 1);

/**
 * Converts EBU_BUSRCON0_BFSSS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON0_BFSSS instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON0_BFSSS";

    switch (instance)
    {
    case EBU_BUSRCON0_BFSSS::two_stages_synchronization_used_maximum_margin:
        result = "two_stages_synchronization_used_maximum_margin";
        break;
    case EBU_BUSRCON0_BFSSS::one_stage_synchronization_used_minimum_latency:
        result = "one_stage_synchronization_used_minimum_latency";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON0_BFSSS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON0_BFSSS &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "two_stages_synchronization_used_maximum_margin", 46)))
    {
        output =
            EBU_BUSRCON0_BFSSS::two_stages_synchronization_used_maximum_margin;
    }
    else if ((result = !strncmp(
                  data, "one_stage_synchronization_used_minimum_latency", 46)))
    {
        output =
            EBU_BUSRCON0_BFSSS::one_stage_synchronization_used_minimum_latency;
    }

    return result;
}

}; // namespace XMC4700
