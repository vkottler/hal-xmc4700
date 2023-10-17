/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBRES_VF : uint8_t
{
    no_new_valid_data_available_write_cont /*!< Read access: No new valid data
                                              available Write access: No effect
                                            */
        ,
    bitfield_result_contains_valid_da_cont =
        1 /*!< Read access: Bitfield RESULT contains valid data and has not yet
             been read, or bit FCR has been updated Write access: Clear this
             valid flag and the data reduction counter (overrides a hardware
             set action) */
};
static_assert(sizeof(VADC_GLOBRES_VF) == 1);

/**
 * Converts VADC_GLOBRES_VF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBRES_VF instance)
{
    const char *result = "UNKNOWN VADC_GLOBRES_VF";

    switch (instance)
    {
    case VADC_GLOBRES_VF::no_new_valid_data_available_write_cont:
        result = "no_new_valid_data_available_write_cont";
        break;
    case VADC_GLOBRES_VF::bitfield_result_contains_valid_da_cont:
        result = "bitfield_result_contains_valid_da_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBRES_VF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBRES_VF &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "no_new_valid_data_available_write_cont", 38)))
    {
        output = VADC_GLOBRES_VF::no_new_valid_data_available_write_cont;
    }
    else if ((result = !strncmp(data, "bitfield_result_contains_valid_da_cont",
                                38)))
    {
        output = VADC_GLOBRES_VF::bitfield_result_contains_valid_da_cont;
    }

    return result;
}

}; // namespace XMC4700
