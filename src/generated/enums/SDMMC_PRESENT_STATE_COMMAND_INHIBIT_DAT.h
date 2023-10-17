/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT : uint8_t
{
    _issue_command_which_uses_dat_line /*!< Can issue command which uses the
                                          DAT line */
        ,
    not_issue_command_which_uses_dat_line =
        1 /*!< Cannot issue command which uses the DAT line */
};
static_assert(sizeof(SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT) == 1);

/**
 * Converts SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT instance)
{
    const char *result = "UNKNOWN SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT";

    switch (instance)
    {
    case SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT::
        _issue_command_which_uses_dat_line:
        result = "_issue_command_which_uses_dat_line";
        break;
    case SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT::
        not_issue_command_which_uses_dat_line:
        result = "not_issue_command_which_uses_dat_line";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_issue_command_which_uses_dat_line", 34)))
    {
        output = SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT::
            _issue_command_which_uses_dat_line;
    }
    else if ((result =
                  !strncmp(data, "not_issue_command_which_uses_dat_line", 37)))
    {
        output = SDMMC_PRESENT_STATE_COMMAND_INHIBIT_DAT::
            not_issue_command_which_uses_dat_line;
    }

    return result;
}

}; // namespace XMC4700
