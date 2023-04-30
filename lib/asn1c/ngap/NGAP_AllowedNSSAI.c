/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#include "NGAP_AllowedNSSAI.h"

#include "NGAP_AllowedNSSAI-Item.h"
static asn_oer_constraints_t asn_OER_type_NGAP_AllowedNSSAI_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_NGAP_AllowedNSSAI_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NGAP_AllowedNSSAI_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_AllowedNSSAI_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NGAP_AllowedNSSAI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NGAP_AllowedNSSAI_specs_1 = {
	sizeof(struct NGAP_AllowedNSSAI),
	offsetof(struct NGAP_AllowedNSSAI, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_AllowedNSSAI = {
	"AllowedNSSAI",
	"AllowedNSSAI",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NGAP_AllowedNSSAI_tags_1,
	sizeof(asn_DEF_NGAP_AllowedNSSAI_tags_1)
		/sizeof(asn_DEF_NGAP_AllowedNSSAI_tags_1[0]), /* 1 */
	asn_DEF_NGAP_AllowedNSSAI_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_AllowedNSSAI_tags_1)
		/sizeof(asn_DEF_NGAP_AllowedNSSAI_tags_1[0]), /* 1 */
	{ &asn_OER_type_NGAP_AllowedNSSAI_constr_1, &asn_PER_type_NGAP_AllowedNSSAI_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_NGAP_AllowedNSSAI_1,
	1,	/* Single element */
	&asn_SPC_NGAP_AllowedNSSAI_specs_1	/* Additional specs */
};

