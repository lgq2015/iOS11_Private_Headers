/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface _SSVPlayActivityEndpointRevisionInformation : NSObject <NSCopying, NSSecureCoding> {
    NSIndexSet * _additionalPendingRevisionsIndexSet;
    unsigned long long  _currentRevision;
    NSString * _revisionVersionToken;
}

@property (nonatomic, copy) NSIndexSet *additionalPendingRevisionsIndexSet;
@property (nonatomic) unsigned long long currentRevision;
@property (nonatomic, copy) NSString *revisionVersionToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalPendingRevisionsIndexSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentRevision;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)revisionVersionToken;
- (void)setAdditionalPendingRevisionsIndexSet:(id)arg1;
- (void)setCurrentRevision:(unsigned long long)arg1;
- (void)setRevisionVersionToken:(id)arg1;

@end
