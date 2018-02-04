/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriRequest : NSObject <NSSecureCoding> {
    NSString * __refId;
    NSUUID * _identifier;
    NSString * _originatingAceID;
}

@property (setter=_setOriginatingAceID:, nonatomic, copy) NSString *_originatingAceID;
@property (setter=_setRefId:, nonatomic, copy) NSString *_refId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_af_analyticsContextDescription;
- (id)_descriptionWithProperties:(id)arg1;
- (id)_identifier;
- (id)_initWithOriginatingAceID:(id)arg1;
- (id)_initWithOriginatingAceID:(id)arg1 identifier:(id)arg2;
- (bool)_makeAppFrontmost;
- (id)_originatingAceID;
- (id)_refId;
- (void)_setOriginatingAceID:(id)arg1;
- (void)_setRefId:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)requestName;

@end
