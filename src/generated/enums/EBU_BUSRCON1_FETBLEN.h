/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON1_FETBLEN : uint8_t
{
    value1 /*!< 1 data access (default after reset). */,
    value2 = 1 /*!< 2 data accesses. */,
    value3 = 2 /*!< 4 data accesses. */,
    value4 = 3 /*!< 8 data accesses. */
};
static_assert(sizeof(EBU_BUSRCON1_FETBLEN) == 1);

/**
 * Converts EBU_BUSRCON1_FETBLEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON1_FETBLEN instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON1_FETBLEN";

    switch (instance)
    {
    case EBU_BUSRCON1_FETBLEN::value1:
        result = "value1";
        break;
    case EBU_BUSRCON1_FETBLEN::value2:
        result = "value2";
        break;
    case EBU_BUSRCON1_FETBLEN::value3:
        result = "value3";
        break;
    case EBU_BUSRCON1_FETBLEN::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON1_FETBLEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON1_FETBLEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON1_FETBLEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON1_FETBLEN::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSRCON1_FETBLEN::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSRCON1_FETBLEN::value4;
    }

    return result;
}

}; // namespace XMC4700
