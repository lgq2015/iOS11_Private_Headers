/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    NSString * _customLabel;
    <GEOMapItem> * _geoMapItem;
    long long  _geoMapItemSource;
    NSUUID * _identifier;
    double  _latitude;
    double  _longitude;
    long long  _type;
    long long  _typeSource;
    double  _uncertainty;
    NSArray * _visits;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *customLabel;
@property (nonatomic, readonly) <GEOMapItem> *geoMapItem;
@property (nonatomic, readonly) long long geoMapItemSource;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) NSString *preferredName;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long typeSource;
@property (nonatomic, readonly) double uncertainty;
@property (nonatomic, readonly) NSArray *visits;

+ (id)geoMapItemSourceToString:(long long)arg1;
+ (id)locationOfInterestTypeSourceToString:(long long)arg1;
+ (id)locationOfInterestTypeToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customLabel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoMapItem;
- (long long)geoMapItemSource;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(long long)arg6 typeSource:(long long)arg7 geoMapItem:(id)arg8 geoMapItemSource:(long long)arg9 visits:(id)arg10 customLabel:(id)arg11;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (id)nameFromMapItem:(id)arg1;
- (id)nameFromType:(long long)arg1;
- (id)preferredName;
- (long long)recentCompare:(id)arg1;
- (long long)type;
- (long long)typeSource;
- (double)uncertainty;
- (id)visits;

@end