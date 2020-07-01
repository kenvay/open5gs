/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.1.0/38413-g10.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_QosFlowModifyConfirmItem_H_
#define	_NGAP_QosFlowModifyConfirmItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_QosFlowIdentifier.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_QosFlowModifyConfirmItem */
typedef struct NGAP_QosFlowModifyConfirmItem {
	NGAP_QosFlowIdentifier_t	 qosFlowIdentifier;
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_QosFlowModifyConfirmItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_QosFlowModifyConfirmItem;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_QosFlowModifyConfirmItem_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_QosFlowModifyConfirmItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_QosFlowModifyConfirmItem_H_ */
#include <asn_internal.h>