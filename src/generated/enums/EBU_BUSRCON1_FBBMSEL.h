/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON1_FBBMSEL : uint8_t
{
    value1 /*!< Burst buffer length defined by value in FETBLEN (default after
              reset). */
        ,
    value2 = 1 /*!< Continuous mode. All data required for transaction is
                  transferred in a single burst. */
};
static_assert(sizeof(EBU_BUSRCON1_FBBMSEL) == 1);

static constexpr uint16_t EBU_BUSRCON1_FBBMSEL_id = 340;

/**
 * Converts EBU_BUSRCON1_FBBMSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON1_FBBMSEL instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON1_FBBMSEL";

    switch (instance)
    {
    case EBU_BUSRCON1_FBBMSEL::value1:
        result = "value1";
        break;
    case EBU_BUSRCON1_FBBMSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON1_FBBMSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON1_FBBMSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_BUSRCON1_FBBMSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_BUSRCON1_FBBMSEL::value2;
    }

    return result;
}

}; // namespace XMC4700
