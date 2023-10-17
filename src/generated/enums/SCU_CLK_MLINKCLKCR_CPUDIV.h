/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_MLINKCLKCR_CPUDIV : uint8_t
{
    fcpufsys /*!< fCPU=fSYS */,
    _2 = 1 /*!< fCPU=fSYS/ 2 */
};
static_assert(sizeof(SCU_CLK_MLINKCLKCR_CPUDIV) == 1);

/**
 * Converts SCU_CLK_MLINKCLKCR_CPUDIV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_MLINKCLKCR_CPUDIV instance)
{
    const char *result = "UNKNOWN SCU_CLK_MLINKCLKCR_CPUDIV";

    switch (instance)
    {
    case SCU_CLK_MLINKCLKCR_CPUDIV::fcpufsys:
        result = "fcpufsys";
        break;
    case SCU_CLK_MLINKCLKCR_CPUDIV::_2:
        result = "_2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_MLINKCLKCR_CPUDIV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_MLINKCLKCR_CPUDIV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "fcpufsys", 8)))
    {
        output = SCU_CLK_MLINKCLKCR_CPUDIV::fcpufsys;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SCU_CLK_MLINKCLKCR_CPUDIV::_2;
    }

    return result;
}

}; // namespace XMC4700
