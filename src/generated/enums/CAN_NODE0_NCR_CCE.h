/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_NODE0_NCR_CCE : uint8_t
{
    only_be_read_all_attempts_modify_them_ignored /*!< The Bit Timing Register,
                                                     the Port Control Register,
                                                     Error Counter Register may
                                                     only be read. All attempts
                                                     to modify them are
                                                     ignored. */
        ,
    be_read_written =
        1 /*!< The Bit Timing Register, the Port Control Register, Error
             Counter Register may be read and written. */
};
static_assert(sizeof(CAN_NODE0_NCR_CCE) == 1);

/**
 * Converts CAN_NODE0_NCR_CCE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NCR_CCE instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NCR_CCE";

    switch (instance)
    {
    case CAN_NODE0_NCR_CCE::only_be_read_all_attempts_modify_them_ignored:
        result = "only_be_read_all_attempts_modify_them_ignored";
        break;
    case CAN_NODE0_NCR_CCE::be_read_written:
        result = "be_read_written";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NCR_CCE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NCR_CCE &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "only_be_read_all_attempts_modify_them_ignored", 45)))
    {
        output =
            CAN_NODE0_NCR_CCE::only_be_read_all_attempts_modify_them_ignored;
    }
    else if ((result = !strncmp(data, "be_read_written", 15)))
    {
        output = CAN_NODE0_NCR_CCE::be_read_written;
    }

    return result;
}

}; // namespace XMC4700
