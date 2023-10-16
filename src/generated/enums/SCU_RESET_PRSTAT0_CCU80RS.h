/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_PRSTAT0_CCU80RS : uint8_t
{
    value1 /*!< Reset de-asserted */,
    value2 = 1 /*!< Reset asserted */
};
static_assert(sizeof(SCU_RESET_PRSTAT0_CCU80RS) == 1);

/**
 * Converts SCU_RESET_PRSTAT0_CCU80RS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_PRSTAT0_CCU80RS instance)
{
    const char *result = "UNKNOWN SCU_RESET_PRSTAT0_CCU80RS";

    switch (instance)
    {
    case SCU_RESET_PRSTAT0_CCU80RS::value1:
        result = "value1";
        break;
    case SCU_RESET_PRSTAT0_CCU80RS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_PRSTAT0_CCU80RS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_PRSTAT0_CCU80RS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_RESET_PRSTAT0_CCU80RS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_RESET_PRSTAT0_CCU80RS::value2;
    }

    return result;
}

}; // namespace XMC4700
