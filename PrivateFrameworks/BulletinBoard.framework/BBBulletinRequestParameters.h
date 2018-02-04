/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _enabledSectionIDs;
    long long  _maximumCount;
    unsigned long long  _publisherDestination;
    NSDate * _sinceDate;
}

@property (nonatomic, retain) NSSet *enabledSectionIDs;
@property (nonatomic, readonly) unsigned long long maximumCount;
@property (nonatomic, readonly) unsigned long long publisherDestination;
@property (nonatomic, retain) NSDate *sinceDate;

+ (id)requestParametersForDestination:(unsigned long long)arg1 withSinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enabledSectionIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(unsigned long long)arg1 sinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4;
- (unsigned long long)maximumCount;
- (unsigned long long)publisherDestination;
- (void)setEnabledSectionIDs:(id)arg1;
- (void)setSinceDate:(id)arg1;
- (id)sinceDate;

@end
