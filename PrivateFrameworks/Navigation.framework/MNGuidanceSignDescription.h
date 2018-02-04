/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNGuidanceSignDescription : NSObject <NSSecureCoding> {
    int  _composedGuidanceEventIndex;
    NSArray * _details;
    long long  _distanceDetailLevel;
    GEOJunction * _junction;
    int  _shieldID;
    NSString * _shieldStringID;
    NSString * _shieldText;
    NSArray * _titles;
    NSUUID * _uniqueID;
    NSDictionary * _variableOverrides;
}

@property (nonatomic, readonly) int composedGuidanceEventIndex;
@property (nonatomic, readonly) NSArray *details;
@property (nonatomic, readonly) long long distanceDetailLevel;
@property (nonatomic, readonly) GEOJunction *junction;
@property (nonatomic, readonly) int shieldID;
@property (nonatomic, readonly) NSString *shieldStringID;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSArray *titles;
@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) NSDictionary *variableOverrides;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)composedGuidanceEventIndex;
- (id)description;
- (id)details;
- (long long)distanceDetailLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 titles:(id)arg2 details:(id)arg3 variableOverrides:(id)arg4 distanceDetailLevel:(int)arg5 junction:(id)arg6 shieldText:(id)arg7 shieldID:(int)arg8 shieldStringID:(id)arg9 composedGuidanceEventIndex:(int)arg10;
- (id)junction;
- (int)shieldID;
- (id)shieldStringID;
- (id)shieldText;
- (id)titles;
- (id)uniqueID;
- (id)variableOverrides;

@end
