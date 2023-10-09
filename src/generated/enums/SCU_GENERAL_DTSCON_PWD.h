/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_GENERAL_DTSCON_PWD : uint8_t
{
    value1 /*!< The DTS is powered */,
    value2 = 1 /*!< The DTS is not powered */
};
static_assert(sizeof(SCU_GENERAL_DTSCON_PWD) == 1);

static constexpr uint16_t SCU_GENERAL_DTSCON_PWD_id = 1261;

/**
 * Converts SCU_GENERAL_DTSCON_PWD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_GENERAL_DTSCON_PWD instance)
{
    const char *result = "UNKNOWN SCU_GENERAL_DTSCON_PWD";

    switch (instance)
    {
    case SCU_GENERAL_DTSCON_PWD::value1:
        result = "value1";
        break;
    case SCU_GENERAL_DTSCON_PWD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_GENERAL_DTSCON_PWD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_GENERAL_DTSCON_PWD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_GENERAL_DTSCON_PWD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_GENERAL_DTSCON_PWD::value2;
    }

    return result;
}

}; // namespace XMC4700
