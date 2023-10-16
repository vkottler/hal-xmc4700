/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FSR_PROG : uint8_t
{
    value1 /*!< There is no program operation requested or in progress or just finished. */,
    value2 = 1 /*!< Programming operation (write page) requested (from FIM) or in action or finished. */
};
static_assert(sizeof(FLASH0_FSR_PROG) == 1);

/**
 * Converts FLASH0_FSR_PROG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FSR_PROG instance)
{
    const char *result = "UNKNOWN FLASH0_FSR_PROG";

    switch (instance)
    {
    case FLASH0_FSR_PROG::value1:
        result = "value1";
        break;
    case FLASH0_FSR_PROG::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FSR_PROG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FSR_PROG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_FSR_PROG::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_FSR_PROG::value2;
    }

    return result;
}

}; // namespace XMC4700
