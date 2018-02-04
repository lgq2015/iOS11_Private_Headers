/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioPlaybackHistoryItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDate * _expirationDate;
    NSNumber * _pauseTime;
    NSDictionary * _serverTrackInfo;
    NSDate * _skipDate;
    long long  _storeIdentifier;
}

@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly, copy) NSNumber *pauseTime;
@property (nonatomic, readonly, copy) NSMutableDictionary *propertyListRepresentation;
@property (nonatomic, readonly, copy) NSDictionary *serverTrackInfo;
@property (nonatomic, readonly, copy) NSDate *skipDate;
@property (nonatomic, readonly) long long storeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrack:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)pauseTime;
- (id)propertyListRepresentation;
- (id)serverTrackInfo;
- (id)skipDate;
- (long long)storeIdentifier;

@end
