/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_INTERRUPT_SRSTAT_RTC_ATIM1 : uint8_t
{
    value1 /*!< Not updated */,
    value2 = 1 /*!< Update completed */
};
static_assert(sizeof(SCU_INTERRUPT_SRSTAT_RTC_ATIM1) == 1);

static constexpr uint16_t SCU_INTERRUPT_SRSTAT_RTC_ATIM1_id = 2626;

/**
 * Converts SCU_INTERRUPT_SRSTAT_RTC_ATIM1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_INTERRUPT_SRSTAT_RTC_ATIM1 instance)
{
    const char *result = "UNKNOWN SCU_INTERRUPT_SRSTAT_RTC_ATIM1";

    switch (instance)
    {
    case SCU_INTERRUPT_SRSTAT_RTC_ATIM1::value1:
        result = "value1";
        break;
    case SCU_INTERRUPT_SRSTAT_RTC_ATIM1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_INTERRUPT_SRSTAT_RTC_ATIM1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_INTERRUPT_SRSTAT_RTC_ATIM1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_INTERRUPT_SRSTAT_RTC_ATIM1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_INTERRUPT_SRSTAT_RTC_ATIM1::value2;
    }

    return result;
}

}; // namespace XMC4700
