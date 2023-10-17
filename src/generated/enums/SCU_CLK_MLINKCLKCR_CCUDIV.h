/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_MLINKCLKCR_CCUDIV : uint8_t
{
    fccufsys /*!< fCCU=fSYS */,
    _2 = 1 /*!< fCCU=fSYS/ 2 */
};
static_assert(sizeof(SCU_CLK_MLINKCLKCR_CCUDIV) == 1);

/**
 * Converts SCU_CLK_MLINKCLKCR_CCUDIV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_MLINKCLKCR_CCUDIV instance)
{
    const char *result = "UNKNOWN SCU_CLK_MLINKCLKCR_CCUDIV";

    switch (instance)
    {
    case SCU_CLK_MLINKCLKCR_CCUDIV::fccufsys:
        result = "fccufsys";
        break;
    case SCU_CLK_MLINKCLKCR_CCUDIV::_2:
        result = "_2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_MLINKCLKCR_CCUDIV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_MLINKCLKCR_CCUDIV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "fccufsys", 8)))
    {
        output = SCU_CLK_MLINKCLKCR_CCUDIV::fccufsys;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SCU_CLK_MLINKCLKCR_CCUDIV::_2;
    }

    return result;
}

}; // namespace XMC4700
