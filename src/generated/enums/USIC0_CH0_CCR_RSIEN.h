/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_CCR_RSIEN : uint8_t
{
    disabled /*!< The receiver start interrupt is disabled. */,
    enabled_case_receiver_start_event_service_req_cont =
        1 /*!< The receiver start interrupt is enabled. In case of a receiver
             start event, the service request output SRx indicated by
             INPR.TBINP is activated. */
};
static_assert(sizeof(USIC0_CH0_CCR_RSIEN) == 1);

/**
 * Converts USIC0_CH0_CCR_RSIEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_CCR_RSIEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_CCR_RSIEN";

    switch (instance)
    {
    case USIC0_CH0_CCR_RSIEN::disabled:
        result = "disabled";
        break;
    case USIC0_CH0_CCR_RSIEN::
        enabled_case_receiver_start_event_service_req_cont:
        result = "enabled_case_receiver_start_event_service_req_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_CCR_RSIEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_CCR_RSIEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = USIC0_CH0_CCR_RSIEN::disabled;
    }
    else if ((result = !strncmp(
                  data, "enabled_case_receiver_start_event_service_req_cont",
                  50)))
    {
        output = USIC0_CH0_CCR_RSIEN::
            enabled_case_receiver_start_event_service_req_cont;
    }

    return result;
}

}; // namespace XMC4700
