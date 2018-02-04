/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthWrapMessageConfiguration : NSObject {
    NSData * _applicationData;
    struct __SecCertificate { } * _certificate;
    NSString * _channel;
    bool  _disableCompression;
    NSDate * _endDate;
    NSDictionary * _keyValuePairs;
    NSString * _payloadIdentifier;
    NSString * _payloadType;
    NSDate * _startDate;
    NSUUID * _studyUUID;
    NSUUID * _subjectUUID;
}

@property (nonatomic, retain) NSData *applicationData;
@property (nonatomic, readonly) struct __SecCertificate { }*certificate;
@property (nonatomic, readonly, copy) NSString *channel;
@property (nonatomic) bool disableCompression;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, retain) NSDictionary *keyValuePairs;
@property (nonatomic, copy) NSString *payloadIdentifier;
@property (nonatomic, copy) NSString *payloadType;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, readonly, copy) NSUUID *studyUUID;
@property (nonatomic, readonly, copy) NSUUID *subjectUUID;

- (void).cxx_destruct;
- (id)applicationData;
- (struct __SecCertificate { }*)certificate;
- (id)channel;
- (void)dealloc;
- (bool)disableCompression;
- (id)endDate;
- (id)initWithChannel:(id)arg1 payloadType:(id)arg2 certificate:(struct __SecCertificate { }*)arg3;
- (id)initWithSubjectUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 certificate:(struct __SecCertificate { }*)arg5;
- (id)keyValuePairs;
- (id)payloadIdentifier;
- (id)payloadType;
- (void)setApplicationData:(id)arg1;
- (void)setDisableCompression:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setKeyValuePairs:(id)arg1;
- (void)setPayloadIdentifier:(id)arg1;
- (void)setPayloadType:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (id)studyUUID;
- (id)subjectUUID;

@end
