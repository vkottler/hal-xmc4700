/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOFCR_GDFS : uint8_t
{
    unchanged_destination_object /*!< TXRQ is unchanged in the destination
                                    object. */
        ,
    set_gateway_destination_object_after_int_cont =
        1 /*!< TXRQ is set in the gateway destination object after the internal
             transfer from the gateway source to the gateway destination
             object. */
};
static_assert(sizeof(CAN_MO_MOFCR_GDFS) == 1);

/**
 * Converts CAN_MO_MOFCR_GDFS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOFCR_GDFS instance)
{
    const char *result = "UNKNOWN CAN_MO_MOFCR_GDFS";

    switch (instance)
    {
    case CAN_MO_MOFCR_GDFS::unchanged_destination_object:
        result = "unchanged_destination_object";
        break;
    case CAN_MO_MOFCR_GDFS::set_gateway_destination_object_after_int_cont:
        result = "set_gateway_destination_object_after_int_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOFCR_GDFS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOFCR_GDFS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "unchanged_destination_object", 28)))
    {
        output = CAN_MO_MOFCR_GDFS::unchanged_destination_object;
    }
    else if ((result = !strncmp(
                  data, "set_gateway_destination_object_after_int_cont", 45)))
    {
        output =
            CAN_MO_MOFCR_GDFS::set_gateway_destination_object_after_int_cont;
    }

    return result;
}

}; // namespace XMC4700
