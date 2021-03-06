/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUScanOptions : NSObject <NSSecureCoding> {
    bool  _forced;
    NSString * _identifier;
    NSMutableSet * _types;
}

@property (getter=isForced, nonatomic) bool forced;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSSet *types;

+ (bool)supportsSecureCoding;

- (void)addType:(int)arg1;
- (void)clearTypes;
- (bool)containsType:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)findsAnyUpdate;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isForced;
- (void)removeType:(int)arg1;
- (void)setForced:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTypes:(id)arg1;
- (id)types;

@end
