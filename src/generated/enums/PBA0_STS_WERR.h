/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PBA0_STS_WERR : uint8_t
{
    no_write_error_occurred /*!< no write error occurred. */,
    write_error_occurred_interrupt_request_pending =
        1 /*!< write error occurred, interrupt request is pending. */
};
static_assert(sizeof(PBA0_STS_WERR) == 1);

/**
 * Converts PBA0_STS_WERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PBA0_STS_WERR instance)
{
    const char *result = "UNKNOWN PBA0_STS_WERR";

    switch (instance)
    {
    case PBA0_STS_WERR::no_write_error_occurred:
        result = "no_write_error_occurred";
        break;
    case PBA0_STS_WERR::write_error_occurred_interrupt_request_pending:
        result = "write_error_occurred_interrupt_request_pending";
        break;
    }

    return result;
}

/**
 * Converts a C string to PBA0_STS_WERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PBA0_STS_WERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_write_error_occurred", 23)))
    {
        output = PBA0_STS_WERR::no_write_error_occurred;
    }
    else if ((result = !strncmp(
                  data, "write_error_occurred_interrupt_request_pending", 46)))
    {
        output = PBA0_STS_WERR::write_error_occurred_interrupt_request_pending;
    }

    return result;
}

}; // namespace XMC4700
