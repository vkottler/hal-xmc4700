/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_FPCCR_THREAD : uint8_t
{
    value1 /*!< Mode was not Thread Mode when the floating-point stack frame
              was allocated. */
        ,
    value2 = 1 /*!< Mode was Thread Mode when the floating-point stack frame
                  was allocated. */
};
static_assert(sizeof(PPB_FPCCR_THREAD) == 1);

static constexpr uint16_t PPB_FPCCR_THREAD_id = 832;

/**
 * Converts PPB_FPCCR_THREAD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_FPCCR_THREAD instance)
{
    const char *result = "UNKNOWN PPB_FPCCR_THREAD";

    switch (instance)
    {
    case PPB_FPCCR_THREAD::value1:
        result = "value1";
        break;
    case PPB_FPCCR_THREAD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_FPCCR_THREAD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_FPCCR_THREAD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_FPCCR_THREAD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_FPCCR_THREAD::value2;
    }

    return result;
}

}; // namespace XMC4700
