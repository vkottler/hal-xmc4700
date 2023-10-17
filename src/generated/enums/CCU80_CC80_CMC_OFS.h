/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_CMC_OFS : uint8_t
{
    override_functionality_disabled /*!< Override functionality disabled */,
    status_bit_trigger_override_connected_event_1_cont =
        1 /*!< Status bit trigger override connected to Event 1; Status bit
             value override connected to Event 2 */
};
static_assert(sizeof(CCU80_CC80_CMC_OFS) == 1);

/**
 * Converts CCU80_CC80_CMC_OFS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_CMC_OFS instance)
{
    const char *result = "UNKNOWN CCU80_CC80_CMC_OFS";

    switch (instance)
    {
    case CCU80_CC80_CMC_OFS::override_functionality_disabled:
        result = "override_functionality_disabled";
        break;
    case CCU80_CC80_CMC_OFS::
        status_bit_trigger_override_connected_event_1_cont:
        result = "status_bit_trigger_override_connected_event_1_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_CMC_OFS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_CMC_OFS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "override_functionality_disabled", 31)))
    {
        output = CCU80_CC80_CMC_OFS::override_functionality_disabled;
    }
    else if ((result = !strncmp(
                  data, "status_bit_trigger_override_connected_event_1_cont",
                  50)))
    {
        output = CCU80_CC80_CMC_OFS::
            status_bit_trigger_override_connected_event_1_cont;
    }

    return result;
}

}; // namespace XMC4700
