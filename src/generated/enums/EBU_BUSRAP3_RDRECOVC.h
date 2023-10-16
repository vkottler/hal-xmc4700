/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRAP3_RDRECOVC : uint8_t
{
    value1 /*!< No Recovery Phase clock cycles available. */,
    value2 = 1 /*!< 1 clock cycle selected. */,
    value3 = 6 /*!< 6 clock cycles selected. */,
    value4 = 7 /*!< 7 clock cycles selected. */
};
static_assert(sizeof(EBU_BUSRAP3_RDRECOVC) == 1);

/**
 * Converts EBU_BUSRAP3_RDRECOVC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRAP3_RDRECOVC instance)
{
    const char *result = "UNKNOWN EBU_BUSRAP3_RDRECOVC";

    switch (instance)
    {
    case EBU_BUSRAP3_RDRECOVC::value1:
        result = "value1";
        break;
    case EBU_BUSRAP3_RDRECOVC::value2:
        result = "value2";
        break;
    case EBU_BUSRAP3_RDRECOVC::value3:
        result = "value3";
        break;
    case EBU_BUSRAP3_RDRECOVC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRAP3_RDRECOVC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRAP3_RDRECOVC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRAP3_RDRECOVC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRAP3_RDRECOVC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = EBU_BUSRAP3_RDRECOVC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = EBU_BUSRAP3_RDRECOVC::value4;
    }

    return result;
}

}; // namespace XMC4700
