/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TCSR_TV : uint8_t
{
    hile_no_valid_data_was_available_result_trans_cont /*!< The latest start of
                                                          a data word
                                                          transmission has
                                                          taken place while no
                                                          valid data was
                                                          available. As a
                                                          result, the
                                                          transmission of a
                                                          data words with
                                                          passive level
                                                          (SCTR.PDL) has been
                                                          started. */
        ,
    ith_valid_data_tbuf = 1 /*!< The latest start of a data word transmission
                               has taken place with valid data from TBUF. */
};
static_assert(sizeof(USIC0_CH0_TCSR_TV) == 1);

/**
 * Converts USIC0_CH0_TCSR_TV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_TV instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_TV";

    switch (instance)
    {
    case USIC0_CH0_TCSR_TV::hile_no_valid_data_was_available_result_trans_cont:
        result = "hile_no_valid_data_was_available_result_trans_cont";
        break;
    case USIC0_CH0_TCSR_TV::ith_valid_data_tbuf:
        result = "ith_valid_data_tbuf";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_TV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_TV &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "hile_no_valid_data_was_available_result_trans_cont", 50)))
    {
        output = USIC0_CH0_TCSR_TV::
            hile_no_valid_data_was_available_result_trans_cont;
    }
    else if ((result = !strncmp(data, "ith_valid_data_tbuf", 19)))
    {
        output = USIC0_CH0_TCSR_TV::ith_valid_data_tbuf;
    }

    return result;
}

}; // namespace XMC4700
