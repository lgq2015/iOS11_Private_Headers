/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyBadgeURLRequest : CKDURLRequest {
    unsigned long long  _badgeValue;
}

@property (nonatomic, readonly) unsigned long long badgeValue;

- (unsigned long long)badgeValue;
- (id)generateRequestOperations;
- (id)initWithBadgeValue:(unsigned long long)arg1;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;

@end
