/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_TCSR_TSOF : uint8_t
{
    not_been_started_first_word_data_frame /*!< The latest data word
                                              transmission has not been started
                                              for the first word of a data
                                              frame. */
        ,
    been_started_first_word_data_frame =
        1 /*!< The latest data word transmission has been started for the first
             word of a data frame. */
};
static_assert(sizeof(USIC0_CH0_TCSR_TSOF) == 1);

/**
 * Converts USIC0_CH0_TCSR_TSOF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_TCSR_TSOF instance)
{
    const char *result = "UNKNOWN USIC0_CH0_TCSR_TSOF";

    switch (instance)
    {
    case USIC0_CH0_TCSR_TSOF::not_been_started_first_word_data_frame:
        result = "not_been_started_first_word_data_frame";
        break;
    case USIC0_CH0_TCSR_TSOF::been_started_first_word_data_frame:
        result = "been_started_first_word_data_frame";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_TCSR_TSOF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_TCSR_TSOF &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "not_been_started_first_word_data_frame", 38)))
    {
        output = USIC0_CH0_TCSR_TSOF::not_been_started_first_word_data_frame;
    }
    else if ((result =
                  !strncmp(data, "been_started_first_word_data_frame", 34)))
    {
        output = USIC0_CH0_TCSR_TSOF::been_started_first_word_data_frame;
    }

    return result;
}

}; // namespace XMC4700
