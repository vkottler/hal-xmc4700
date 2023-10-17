/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON0_EBSE : uint8_t
{
    delayed /*!< ADV is delayed. */,
    not_delayed = 1 /*!< ADV is not delayed. */
};
static_assert(sizeof(EBU_BUSRCON0_EBSE) == 1);

/**
 * Converts EBU_BUSRCON0_EBSE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON0_EBSE instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON0_EBSE";

    switch (instance)
    {
    case EBU_BUSRCON0_EBSE::delayed:
        result = "delayed";
        break;
    case EBU_BUSRCON0_EBSE::not_delayed:
        result = "not_delayed";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON0_EBSE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON0_EBSE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "delayed", 7)))
    {
        output = EBU_BUSRCON0_EBSE::delayed;
    }
    else if ((result = !strncmp(data, "not_delayed", 11)))
    {
        output = EBU_BUSRCON0_EBSE::not_delayed;
    }

    return result;
}

}; // namespace XMC4700
