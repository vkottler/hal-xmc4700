/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_CLC_DISR : uint8_t
{
    value1 /*!< EBU disable is not requested */,
    value2 = 1 /*!< EBU disable is requested */
};
static_assert(sizeof(EBU_CLC_DISR) == 1);

static constexpr uint16_t EBU_CLC_DISR_id = 390;

/**
 * Converts EBU_CLC_DISR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_CLC_DISR instance)
{
    const char *result = "UNKNOWN EBU_CLC_DISR";

    switch (instance)
    {
    case EBU_CLC_DISR::value1:
        result = "value1";
        break;
    case EBU_CLC_DISR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_CLC_DISR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_CLC_DISR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_CLC_DISR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_CLC_DISR::value2;
    }

    return result;
}

}; // namespace XMC4700
