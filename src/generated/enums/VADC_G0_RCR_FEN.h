/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_RCR_FEN : uint8_t
{
    separate_result_register /*!< Separate result register */,
    part_fifo_structure_copy_each_new_valid_result =
        1 /*!< Part of a FIFO structure: copy each new valid result */
};
static_assert(sizeof(VADC_G0_RCR_FEN) == 1);

/**
 * Converts VADC_G0_RCR_FEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_RCR_FEN instance)
{
    const char *result = "UNKNOWN VADC_G0_RCR_FEN";

    switch (instance)
    {
    case VADC_G0_RCR_FEN::separate_result_register:
        result = "separate_result_register";
        break;
    case VADC_G0_RCR_FEN::part_fifo_structure_copy_each_new_valid_result:
        result = "part_fifo_structure_copy_each_new_valid_result";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_RCR_FEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_RCR_FEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "separate_result_register", 24)))
    {
        output = VADC_G0_RCR_FEN::separate_result_register;
    }
    else if ((result = !strncmp(
                  data, "part_fifo_structure_copy_each_new_valid_result", 46)))
    {
        output =
            VADC_G0_RCR_FEN::part_fifo_structure_copy_each_new_valid_result;
    }

    return result;
}

}; // namespace XMC4700
