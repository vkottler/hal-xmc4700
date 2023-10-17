/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_EP1_DTXFSTS_INEPTxFSpcAvail : uint16_t
{
    endpoint_txfifo_full /*!< Endpoint TxFIFO is full */,
    _1_word_available = 1 /*!< 1 word available */,
    _2_words_available = 2 /*!< 2 words available */
};
static_assert(sizeof(USB0_EP1_DTXFSTS_INEPTxFSpcAvail) == 2);

/**
 * Converts USB0_EP1_DTXFSTS_INEPTxFSpcAvail to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_EP1_DTXFSTS_INEPTxFSpcAvail instance)
{
    const char *result = "UNKNOWN USB0_EP1_DTXFSTS_INEPTxFSpcAvail";

    switch (instance)
    {
    case USB0_EP1_DTXFSTS_INEPTxFSpcAvail::endpoint_txfifo_full:
        result = "endpoint_txfifo_full";
        break;
    case USB0_EP1_DTXFSTS_INEPTxFSpcAvail::_1_word_available:
        result = "_1_word_available";
        break;
    case USB0_EP1_DTXFSTS_INEPTxFSpcAvail::_2_words_available:
        result = "_2_words_available";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_EP1_DTXFSTS_INEPTxFSpcAvail.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        USB0_EP1_DTXFSTS_INEPTxFSpcAvail &output)
{
    bool result = false;

    if ((result = !strncmp(data, "endpoint_txfifo_full", 20)))
    {
        output = USB0_EP1_DTXFSTS_INEPTxFSpcAvail::endpoint_txfifo_full;
    }
    else if ((result = !strncmp(data, "_1_word_available", 17)))
    {
        output = USB0_EP1_DTXFSTS_INEPTxFSpcAvail::_1_word_available;
    }
    else if ((result = !strncmp(data, "_2_words_available", 18)))
    {
        output = USB0_EP1_DTXFSTS_INEPTxFSpcAvail::_2_words_available;
    }

    return result;
}

}; // namespace XMC4700
