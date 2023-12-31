/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_GNPTXSTS_NPTxFSpcAvail : uint16_t
{
    non_periodic_txfifo_full /*!< Non-periodic TxFIFO is full */,
    _1_word_available = 1 /*!< 1 word available */,
    _2_words_available = 2 /*!< 2 words available */
};
static_assert(sizeof(USB0_GNPTXSTS_NPTxFSpcAvail) == 2);

/**
 * Converts USB0_GNPTXSTS_NPTxFSpcAvail to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GNPTXSTS_NPTxFSpcAvail instance)
{
    const char *result = "UNKNOWN USB0_GNPTXSTS_NPTxFSpcAvail";

    switch (instance)
    {
    case USB0_GNPTXSTS_NPTxFSpcAvail::non_periodic_txfifo_full:
        result = "non_periodic_txfifo_full";
        break;
    case USB0_GNPTXSTS_NPTxFSpcAvail::_1_word_available:
        result = "_1_word_available";
        break;
    case USB0_GNPTXSTS_NPTxFSpcAvail::_2_words_available:
        result = "_2_words_available";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GNPTXSTS_NPTxFSpcAvail.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GNPTXSTS_NPTxFSpcAvail &output)
{
    bool result = false;

    if ((result = !strncmp(data, "non_periodic_txfifo_full", 24)))
    {
        output = USB0_GNPTXSTS_NPTxFSpcAvail::non_periodic_txfifo_full;
    }
    else if ((result = !strncmp(data, "_1_word_available", 17)))
    {
        output = USB0_GNPTXSTS_NPTxFSpcAvail::_1_word_available;
    }
    else if ((result = !strncmp(data, "_2_words_available", 18)))
    {
        output = USB0_GNPTXSTS_NPTxFSpcAvail::_2_words_available;
    }

    return result;
}

}; // namespace XMC4700
