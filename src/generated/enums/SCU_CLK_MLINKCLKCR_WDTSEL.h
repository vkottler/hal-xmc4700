/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_MLINKCLKCR_WDTSEL : uint8_t
{
    foficlock /*!< fOFIclock */,
    fstdbyclock = 1 /*!< fSTDBYclock */,
    fpllclock = 2 /*!< fPLLclock */
};
static_assert(sizeof(SCU_CLK_MLINKCLKCR_WDTSEL) == 1);

/**
 * Converts SCU_CLK_MLINKCLKCR_WDTSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_MLINKCLKCR_WDTSEL instance)
{
    const char *result = "UNKNOWN SCU_CLK_MLINKCLKCR_WDTSEL";

    switch (instance)
    {
    case SCU_CLK_MLINKCLKCR_WDTSEL::foficlock:
        result = "foficlock";
        break;
    case SCU_CLK_MLINKCLKCR_WDTSEL::fstdbyclock:
        result = "fstdbyclock";
        break;
    case SCU_CLK_MLINKCLKCR_WDTSEL::fpllclock:
        result = "fpllclock";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_MLINKCLKCR_WDTSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_MLINKCLKCR_WDTSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "foficlock", 9)))
    {
        output = SCU_CLK_MLINKCLKCR_WDTSEL::foficlock;
    }
    else if ((result = !strncmp(data, "fstdbyclock", 11)))
    {
        output = SCU_CLK_MLINKCLKCR_WDTSEL::fstdbyclock;
    }
    else if ((result = !strncmp(data, "fpllclock", 9)))
    {
        output = SCU_CLK_MLINKCLKCR_WDTSEL::fpllclock;
    }

    return result;
}

}; // namespace XMC4700
