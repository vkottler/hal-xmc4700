/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_FPCCR_BFRDY : uint8_t
{
    value1 /*!< BusFault is disabled or priority did not permit setting the BusFault handler to the pending state when the floating-point stack frame was allocated. */,
    value2 = 1 /*!< BusFault is enabled and priority permitted setting the BusFault handler to the pending state when the floating-point stack frame was allocated. */
};
static_assert(sizeof(PPB_FPCCR_BFRDY) == 1);

static constexpr uint16_t PPB_FPCCR_BFRDY_id = 2429;

/**
 * Converts PPB_FPCCR_BFRDY to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_FPCCR_BFRDY instance)
{
    const char *result = "UNKNOWN PPB_FPCCR_BFRDY";

    switch (instance)
    {
    case PPB_FPCCR_BFRDY::value1:
        result = "value1";
        break;
    case PPB_FPCCR_BFRDY::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_FPCCR_BFRDY.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_FPCCR_BFRDY &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_FPCCR_BFRDY::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_FPCCR_BFRDY::value2;
    }

    return result;
}

}; // namespace XMC4700
